/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f217c` (_code @ 0x3f217c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short FUN_003e4a00(void);


unsigned int FUN_003f217c(void)

{
  unsigned short temp_v0;
  
  temp_v0 = FUN_003e4a00();
  switch(temp_v0) {
  default:
    return 200;
  case 2:
    return 0xc9;
  case 3:
    return 0xca;
  case 4:
    return 0xcb;
  case 5:
    return 0xcc;
  case 6:
    return 0xcd;
  case 7:
    return 0xce;
  }
}

} /* extern "C" */
