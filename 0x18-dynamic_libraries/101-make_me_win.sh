#!/bin/bash
wget -p /tmp https://github.com/AAYMANO/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOIAD=/tmp/libgiga.so
