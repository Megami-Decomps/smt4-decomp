/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ccdb8` (_code @ 0x4ccdb8, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);
extern int FUN_00203b1c(void);


unsigned int FUN_004ccdb8(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00203b1c();
  if (param_2 >= temp_v0) {
    temp_v3 = 0;
  }
  else {
    FUN_00187180(9,1);
    temp_v0 = FUN_00192798();
    temp_v1 = FUN_00203b1c();
    if (param_2 >= temp_v1) {
      temp_v3 = 0;
    }
    else if (param_2 >= 99) {
      temp_v3 = param_2 * param_2 * 3 + (unsigned int)(param_2 * param_2 * param_2) / 100 + param_2 * 0xdb8 +
              0x184c6;
      if (temp_v3 >= 1000000) {
        temp_v3 = 999999;
      }
    }
    else {
      temp_v3 = *(unsigned int *)((temp_v0 + param_2 * 4) - 4);
    }
    FUN_00184310();
    temp_v0 = (param_3 - (unsigned int)*(unsigned short *)(param_1 + 6)) + 1;
    if (temp_v0 < 1) {
      temp_v2 = 100;
    }
    else {
      if (temp_v0 >= 11) {
        temp_v0 = 10;
      }
      FUN_00187180(9,2);
      temp_v1 = FUN_00192798();
      temp_v2 = (unsigned int)*(unsigned short *)((temp_v1 + temp_v0 * 2) - 2);
    }
    temp_v3 = (temp_v3 * temp_v2) / 100;
    if (temp_v3 >= 1000000) {
      temp_v3 = 999999;
    }
  }
  return temp_v3;
}
