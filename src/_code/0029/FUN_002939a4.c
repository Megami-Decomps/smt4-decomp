/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002939a4` (_code @ 0x2939a4, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0023e590. */


void FUN_002939a4(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned char *)((int)param_1 + 0x22) = param_2;
  param_1[1] = 0;
  *param_1 = 1;
  temp_v1 = 0;
  temp_v2 = 0;
  FUN_0023e590(param_1,&temp_v1,&temp_v2);
  temp_v0 = (temp_v1 - param_1[0xb]) * 0x1000;
  param_1[2] = (int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1d)) >> 3;
  temp_v0 = (temp_v2 - param_1[0xc]) * 0x1000;
  param_1[3] = (int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1d)) >> 3;
  param_1[4] = param_1[0xb] << 0xc;
  param_1[5] = param_1[0xc] << 0xc;
  return;
}
