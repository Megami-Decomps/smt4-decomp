/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049cc10` (_code @ 0x49cc10, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int FUN_0019271c(unsigned int);
/* Supplied declaration required: FUN_00480d20. */


int FUN_0049cc10(unsigned short *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = (unsigned int)*param_1;
  temp_v1 = 0;
  temp_v0 = FUN_0019271c(temp_v2);
  switch(temp_v0) {
  default:
    if ((param_1[1] & 2) != 0) {
      temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
    }
    return temp_v1;
  case 1:
  case 0xc:
    FUN_00192550();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x50);
      if ((param_1[1] & 2) != 0) {
        temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
      }
      return temp_v1;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_00192608();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x78);
      if ((param_1[1] & 2) != 0) {
        temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
      }
      return temp_v1;
    }
    break;
  case 10:
    FUN_00480d20();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x2c);
      if ((param_1[1] & 2) != 0) {
        temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
      }
      return temp_v1;
    }
  }
  temp_v1 = 99999999;
  if ((param_1[1] & 2) != 0) {
    temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
  }
  return temp_v1;
}
