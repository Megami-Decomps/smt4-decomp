/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1e6c` (_code @ 0x3c1e6c, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9364. */
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


int FUN_003c1e6c(int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  FUN_002b9364();
  temp_v3 = (param_2 - (unsigned int)*(unsigned char *)(param_1 + 3)) + 1;
  temp_v2 = param_2;
  if (temp_v3 < 1) {
    temp_v4 = 100;
  }
  else {
    if (temp_v3 >= 11) {
      temp_v3 = 10;
    }
    FUN_002c0ec4(9,2);
    temp_v1 = FUN_002c0e9c();
    temp_v4 = (unsigned int)*(unsigned short *)((temp_v1 + temp_v3 * 2) - 2);
  }
  for (; temp_v2 != 99; temp_v2 = temp_v2 + 1) {
    FUN_002c0ec4(9,1);
    temp_v3 = FUN_002c0e9c();
    if (temp_v2 < 99) {
      temp_v3 = *(int *)((temp_v3 + temp_v2 * 4) - 4);
    }
    else {
      temp_v3 = 0;
    }
    temp_v0 = (temp_v3 * temp_v4) / 100;
    if (*param_3 < temp_v0) break;
    *param_3 = *param_3 - temp_v0;
  }
  return temp_v2 - param_2;
}
