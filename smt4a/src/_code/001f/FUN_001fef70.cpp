/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fef70` (_code @ 0x1fef70, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* Supplied declaration required: FUN_00184310. */
extern int affinityShouldReplaceState(unsigned short, int);
extern int FUN_002ada48(int, int);


void FUN_001fef70(unsigned short *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  
  temp_v1 = (unsigned int)*(unsigned short *)(param_2 + 0x62);
  FUN_00184310();
  temp_v4 = temp_v1 + param_3 * 2;
  temp_v0 = *(unsigned short *)(temp_v4 + 0x70);
  *param_1 = (*param_1 & 0xfc00) | (temp_v0 & 0x3ff);
  temp_v3 = *(unsigned short *)(temp_v4 + 0x70) & 0xfc00;
  *param_1 = (temp_v0 & 0x3ff) | temp_v3;
  if ((temp_v0 & 0x3ff) == 0) {
    *param_1 = temp_v3 | 1;
  }
  temp_v4 = FUN_002ada48(param_2 + 0x34,param_3);
  temp_v2 = affinityShouldReplaceState(*param_1 >> 10,temp_v4);
  if (temp_v2 != 0) {
    *param_1 = (*param_1 & 0x3ff) | (unsigned short)(temp_v4 << 10);
  }
  return;
}

} /* extern "C" */
