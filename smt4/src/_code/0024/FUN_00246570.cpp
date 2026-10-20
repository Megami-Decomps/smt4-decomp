/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246570` (_code @ 0x246570, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e3f8(void);
int FUN_002b45e8(void);
int FUN_002b4670(void);

/* Supplied declaration required: FUN_0022e3f8. */
extern unsigned int FUN_002ae3c4(unsigned int);
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */


int FUN_00246570(unsigned short *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = (unsigned int)*param_1;
  temp_v1 = 0;
  temp_v0 = FUN_002ae3c4(temp_v2);
  switch(temp_v0) {
  default:
    if ((param_1[1] & 2) != 0) {
      temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
    }
    return temp_v1;
  case 1:
    FUN_002b4670();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x7c);
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
    FUN_002b45e8();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0xa0);
      if ((param_1[1] & 2) != 0) {
        temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
      }
      return temp_v1;
    }
    break;
  case 10:
    FUN_0022e3f8();
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

} /* extern "C" */
