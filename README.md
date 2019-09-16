# Core Flight System : Framework : App : Sample Lib

This repository contains a sample library (sample_lib), which is a framework component of the Core Flight System.

This sample library is a non-flight example library implementation for the cFS Bundle. It is intended to be located in the `apps/sample_lib` subdirectory of a cFS Mission Tree.  The Core Flight System is bundled at https://github.com/nasa/cFS (which includes sample_lib as a submodule), which includes build and execution instructions.

sample_lib implements SAMPLE_Function, as an example for how to build and link a library in cFS.

## Release Notes

- 1.1.0:
  - Minor updates (see https://github.com/nasa/sample_lib/pull/6)
- **1.0.0a OFFICIAL RELEASE**:
  - Released as part of cFE 6.6.0a under the Apache 2.0 license, see [LICENSE](LICENSE-18128-Apache-2_0.pdf).

Note the old GSFC Build toolset is deprecated (fsw/for_build/Makefile) in favor of cmake (CMakeLists.txt)

## Known issues

As a lab library, extensive testing is not performed prior to release and only minimal functionality is included.

## Getting Help

For best results, submit issues:questions or issues:help wanted requests at https://github.com/nasa/cFS.

Official cFS page: http://cfs.gsfc.nasa.gov

