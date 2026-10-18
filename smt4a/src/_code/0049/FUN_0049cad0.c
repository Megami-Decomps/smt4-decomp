/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049cad0` (_code @ 0x49cad0, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int FUN_0019271c(unsigned int);
extern int FUN_00213b5c(void);


int FUN_0049cad0(unsigned short *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = (unsigned int)*param_1;
  temp_v3 = 0;
  temp_v0 = FUN_0019271c(temp_v4);
  switch(temp_v0) {
  case 1:
  case 0xc:
    temp_v1 = temp_v4;
    FUN_00192550();
    if (temp_v1 != 0) {
      temp_v3 = *(int *)(temp_v1 + 0x4c);
    }
    else {
      temp_v3 = 99999999;
    }
    if (temp_v4 == 0x7b2) {
      temp_v3 = 1000000;
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
    if (temp_v4 == 0) {
      temp_v3 = 99999999;
    }
    else {
      temp_v3 = *(int *)(temp_v4 + 0x74);
    }
  }
  if ((param_1[1] & 2) != 0) {
    temp_v3 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v3) / 100;
  }
  temp_v2 = FUN_00213b5c();
  if (temp_v2 == 4) {
    temp_v3 = temp_v3 * 3;
  }
  return temp_v3;
}
