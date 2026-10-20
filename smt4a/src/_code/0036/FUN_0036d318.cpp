/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d318` (_code @ 0x36d318, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(int);
int FUN_0019cac4(void);
int sysMemClear(unsigned int *, int);
int rt_memcpy_w(...);

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0036d318(int param_1,unsigned int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_0019cac4();
  sysMemClear(param_2,300);
  *(short *)((int)param_2 + 0x62) = (short)param_1;
  *(unsigned short *)(param_2 + 0x19) = *(unsigned short *)(temp_v0 + 2) & 0x7fff;
  *(short *)param_2 = (short)*(unsigned int *)(temp_v0 + 4);
  *(short *)((int)param_2 + 2) = (short)*(unsigned int *)(temp_v0 + 8);
  *(unsigned short *)(param_2 + 1) = *(unsigned short *)(temp_v0 + 0xc);
  *(unsigned short *)(param_2 + 2) = *(unsigned short *)(temp_v0 + 0x10);
  *(unsigned short *)((int)param_2 + 10) = *(unsigned short *)(temp_v0 + 0x12);
  *(unsigned short *)(param_2 + 3) = *(unsigned short *)(temp_v0 + 0x14);
  *(unsigned short *)((int)param_2 + 6) = *(unsigned short *)(temp_v0 + 0xe);
  rt_memcpy_w(param_2 + 7,param_2,0xe);
  *(unsigned int *)((int)param_2 + 0xe) = *param_2;
  *(unsigned int *)((int)param_2 + 0x12) = param_2[1];
  *(unsigned int *)((int)param_2 + 0x16) = param_2[2];
  *(unsigned short *)((int)param_2 + 0x1a) = *(unsigned short *)(param_2 + 3);
  *(unsigned short *)(param_2 + 0xd) = *(unsigned short *)(temp_v0 + 0x50);
  *(unsigned short *)((int)param_2 + 0x36) = *(unsigned short *)(temp_v0 + 0x52);
  *(unsigned short *)(param_2 + 0xe) = *(unsigned short *)(temp_v0 + 0x54);
  *(unsigned short *)((int)param_2 + 0x3a) = *(unsigned short *)(temp_v0 + 0x56);
  *(unsigned short *)(param_2 + 0xf) = *(unsigned short *)(temp_v0 + 0x58);
  *(unsigned short *)((int)param_2 + 0x3e) = *(unsigned short *)(temp_v0 + 0x5a);
  *(unsigned short *)(param_2 + 0x10) = *(unsigned short *)(temp_v0 + 0x5c);
  *(unsigned short *)((int)param_2 + 0x42) = *(unsigned short *)(temp_v0 + 0x5e);
  FUN_00184310(param_1);
  rt_memcpy_w(param_2 + 0x13,param_1 + 0xa0,0x12);
  *(unsigned short *)((int)param_2 + 0x2a) = *(unsigned short *)((int)param_2 + 0xe);
  *(unsigned short *)(param_2 + 0xb) = *(unsigned short *)(param_2 + 4);
  return;
}

} /* extern "C" */
