/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cc9dc` (_code @ 0x4cc9dc, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00187180(int, int);

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);
extern int FUN_00203b1c(void);


int FUN_004cc9dc(int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  FUN_00184310();
  temp_v3 = (param_2 - (unsigned int)*(unsigned short *)(param_1 + 6)) + 1;
  if (temp_v3 < 1) {
    temp_v4 = 100;
  }
  else {
    if (temp_v3 >= 11) {
      temp_v3 = 10;
    }
    FUN_00187180(9,2);
    temp_v0 = FUN_00192798();
    temp_v4 = (unsigned int)*(unsigned short *)((temp_v0 + temp_v3 * 2) - 2);
  }
  for (temp_v3 = param_2; temp_v0 = FUN_00203b1c(), temp_v3 < temp_v0; temp_v3 = temp_v3 + 1) {
    FUN_00187180(9,1);
    temp_v0 = FUN_00192798();
    temp_v1 = FUN_00203b1c();
    if (temp_v3 >= temp_v1) {
      temp_v2 = 0;
    }
    else if (temp_v3 >= 99) {
      temp_v2 = temp_v3 * temp_v3 * 3 + (unsigned int)(temp_v3 * temp_v3 * temp_v3) / 100 + temp_v3 * 0xdb8 + 0x184c6;
      if (temp_v2 >= 1000000) {
        temp_v2 = 999999;
      }
    }
    else {
      temp_v2 = *(unsigned int *)((temp_v0 + temp_v3 * 4) - 4);
    }
    temp_v2 = (temp_v2 * temp_v4) / 100;
    if (temp_v2 >= 1000000) {
      temp_v2 = 999999;
    }
    if (*param_3 < temp_v2) break;
    *param_3 = *param_3 - temp_v2;
  }
  return temp_v3 - param_2;
}

} /* extern "C" */
