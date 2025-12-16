#!/usr/bin/env bash
set -euo pipefail

# Operate from the repo root (where this script lives)
cd "$(dirname "$0")"

CURRENT_DIR="currentlysolvin"
TARGET_DIR="solved"

if [ ! -d .git ]; then
  echo "Error: .git directory not found here: $(pwd)" >&2
  exit 1
fi

if [ ! -d "$CURRENT_DIR" ]; then
  echo "Error: $CURRENT_DIR directory not found" >&2
  exit 1
fi

mkdir -p "$TARGET_DIR"

shopt -s nullglob
# Keep it simple: process only C++ sources to avoid .bin files
files=("$CURRENT_DIR"/*.cpp)
if [ ${#files[@]} -eq 0 ]; then
  echo "No .cpp files to process in $CURRENT_DIR."
  exit 0
fi

commit_num=1
for src in "${files[@]}"; do
  [ -f "$src" ] || continue

  base=$(basename -- "$src")
  dst="$TARGET_DIR/$base"

  echo "Moving $src -> $dst"
  mv -- "$src" "$dst"

  # Stage and commit everything now under tracking (only 'solved' is tracked)
  git add .
  git commit -m "$commit_num"
  git push

  commit_num=$((commit_num + 1))
done

echo "Done. Processed $((commit_num - 1)) file(s)." 
