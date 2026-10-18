/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c3a10` (_code @ 0x4c3a10, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004c3a10(unsigned int param_1)

{
  unsigned int temp_v0;
  
  switch(param_1) {
  case 0x1d:
  case 0x1e:
    return 0x3e0;
  case 0x20:
    return 1000;
  case 0x21:
    return 800;
  case 0x22:
    return 0x8c0;
  case 0x23:
    return 0x920;
  case 0x24:
    return 0x940;
  case 0x25:
    return 0x3bea;
  }
  temp_v0 = (unsigned int)(param_1 != 0);
  if (param_1 != 0) {
    temp_v0 = 1 << (param_1 & 0xff);
  }
  return temp_v0;
}
