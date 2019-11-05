#!/bin/bash
base='0'

merges="$(git rev-list --merges HEAD | wc -l)"
merge_dist=`[ ${merges} = 0 ] && echo  $(git rev-list HEAD | wc -l ) || echo $(git rev-list  $(git rev-list --merges HEAD  | head -n 1)...HEAD | wc -l)`
hash="$(git rev-parse HEAD)"

echo "$base.$merges.$merge_dist.r_${hash::8}"
