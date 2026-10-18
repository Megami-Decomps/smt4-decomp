/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023de58` (_code @ 0x23de58, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0023de58(unsigned int param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
    return 0x7f;
  case 2:
    return 0xffff;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
    return 3;
  case 0xc:
  case 0x15:
  case 0x1a:
    return 2;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    return 1;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    return 99;
  default:
    return 0;
  }
}
