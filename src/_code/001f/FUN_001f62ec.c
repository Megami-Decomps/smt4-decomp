/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f62ec` (_code @ 0x1f62ec, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b63c0. */


int FUN_001f62ec(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b63c0();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b63c0();
  if (temp_v0 == 0 || temp_v1 == 0) {
    return 0;
  }
  switch(*(unsigned char *)(temp_v0 + 6)) {
  case 0:
    temp_v2 = 2;
    break;
  default:
    temp_v2 = 0;
    break;
  case 2:
    temp_v2 = 5;
    break;
  case 3:
    temp_v2 = 6;
    break;
  case 4:
    temp_v2 = 3;
    break;
  case 5:
    temp_v2 = 4;
    break;
  case 6:
    temp_v2 = 1;
    break;
  case 7:
    temp_v2 = 7;
    break;
  case 8:
    temp_v2 = 8;
    break;
  case 9:
    temp_v2 = 9;
  }
  switch(*(unsigned char *)(temp_v1 + 6)) {
  case 0:
    temp_v3 = 2;
    break;
  default:
    temp_v3 = 0;
    break;
  case 2:
    temp_v3 = 5;
    break;
  case 3:
    temp_v3 = 6;
    break;
  case 4:
    temp_v3 = 3;
    break;
  case 5:
    temp_v3 = 4;
    break;
  case 6:
    temp_v3 = 1;
    break;
  case 7:
    temp_v3 = 7;
    break;
  case 8:
    temp_v3 = 8;
    break;
  case 9:
    temp_v3 = 9;
  }
  temp_v2 = temp_v2 - temp_v3;
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002b63c0();
    temp_v1 = (unsigned int)*param_2;
    FUN_002b63c0();
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 4) - (unsigned int)*(unsigned short *)(temp_v1 + 4);
    }
  }
  return temp_v2;
}
