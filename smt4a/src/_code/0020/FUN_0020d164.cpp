/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d164` (_code @ 0x20d164, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int libc_sprintf(unsigned int, unsigned int);


unsigned int FUN_0020d164(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 == 0) {
    temp_v0 = libc_sprintf(param_1,0x20d2f8);
    return temp_v0;
  }
  if (param_2 == 1) {
    temp_v0 = libc_sprintf(param_1,0x20d304);
    return temp_v0;
  }
  if (param_2 == 2) {
    temp_v0 = libc_sprintf(param_1,0x20d30c);
    return temp_v0;
  }
  if (param_2 == 3) {
    temp_v0 = libc_sprintf(param_1,0x20d318);
    return temp_v0;
  }
  if (param_2 == 4) {
    temp_v0 = libc_sprintf(param_1,0x20d320);
    return temp_v0;
  }
  if (param_2 == 5) {
    temp_v0 = libc_sprintf(param_1,0x20d32c);
    return temp_v0;
  }
  if (param_2 == 6) {
    temp_v0 = libc_sprintf(param_1,0x20d338);
    return temp_v0;
  }
  if (param_2 == 7) {
    temp_v0 = libc_sprintf(param_1,0x20d344);
    return temp_v0;
  }
  if (param_2 == 0xb) {
    temp_v0 = libc_sprintf(param_1,0x20d350);
    return temp_v0;
  }
  if (param_2 == 0xc) {
    temp_v0 = libc_sprintf(param_1,0x20d360);
    return temp_v0;
  }
  if (param_2 == 0xd) {
    temp_v0 = libc_sprintf(param_1,0x20d36c);
    return temp_v0;
  }
  if (param_2 == 0xe) {
    temp_v0 = libc_sprintf(param_1,0x20d378);
    return temp_v0;
  }
  if (param_2 == 0xf) {
    temp_v0 = libc_sprintf(param_1,0x20d384);
    return temp_v0;
  }
  if (param_2 == 0x10) {
    temp_v0 = libc_sprintf(param_1,0x20d390);
    return temp_v0;
  }
  if (param_2 == 0x11) {
    temp_v0 = libc_sprintf(param_1,0x20d39c);
    return temp_v0;
  }
  if (param_2 != 0x12) {
    if (param_2 == 0x13) {
      temp_v0 = libc_sprintf(param_1,0x20d3b4);
      return temp_v0;
    }
    if (param_2 != 0x14) {
      if (param_2 == 0x19) {
        temp_v0 = libc_sprintf(param_1,0x20d2ec);
        return temp_v0;
      }
      return 0;
    }
    temp_v0 = libc_sprintf(param_1,0x20d3c0);
    return temp_v0;
  }
  temp_v0 = libc_sprintf(param_1,0x20d3a8);
  return temp_v0;
}

} /* extern "C" */
