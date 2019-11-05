#!/bin/sh

function msg {
echo -e "\n#### $1 ####\n"
}

pushd . &>/dev/null

msg "configure"
rm -rf build
meson build

msg "build"
cd build
ninja

msg "start testing"
./test/testlibucs
msg "end testing"
#rm -rf build/test

popd >&/dev/null
