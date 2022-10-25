#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/charles/dev/projects/bankAcount/cmake-build-debug
  make -f /Users/charles/dev/projects/bankAcount/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/charles/dev/projects/bankAcount/cmake-build-debug
  make -f /Users/charles/dev/projects/bankAcount/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/charles/dev/projects/bankAcount/cmake-build-debug
  make -f /Users/charles/dev/projects/bankAcount/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/charles/dev/projects/bankAcount/cmake-build-debug
  make -f /Users/charles/dev/projects/bankAcount/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi

