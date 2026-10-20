/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106f24` (_code @ 0x106f24, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int inlineBufferFreeData(int, int);
int rt_memcpy(unsigned int, int, int);

extern unsigned char LAB_00106f5c; /* 0x106f5c */

extern unsigned int FUN_002e786a(unsigned int, unsigned char *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: inlineBufferFreeData. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00106f24(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v2 = *(int *)(param_1 + 4);
  temp_v1 = FUN_002e786a(param_2,&LAB_00106f5c,0,param_4,param_4);
  *(unsigned int *)(param_1 + 8) = param_2;
  temp_v0 = ((temp_v0 - temp_v2) >> 1) * 2;
  *(unsigned int *)(param_1 + 4) = temp_v1;
  rt_memcpy(temp_v1,temp_v2,temp_v0 + 2);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4) + temp_v0;
  inlineBufferFreeData(param_1,temp_v2);
  return;
}

} /* extern "C" */
