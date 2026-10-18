/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b3250` (_code @ 0x3b3250, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421fac; /* 0x421fac */

/* Supplied declaration required: FUN_0039741c. */
extern int FUN_003fabcc(unsigned int *);


void FUN_003b3250(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x505] = param_2;
  param_1[0x506] = 0;
  param_1[0x50a] = 0;
  param_1[0x50b] = 0;
  *(unsigned char *)(param_1 + 0x50c) = 1;
  *(unsigned char *)((int)param_1 + 0x1431) = *(unsigned char *)(param_1 + 0x521);
  param_1[0x509] = 0;
  param_1[0x508] = 0;
  param_1[0x507] = 0;
  temp_v0 = FUN_003fabcc(param_1 + 0x505);
  param_1[0x50a] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(param_1[0x50a] + 8) = param_1[0x50a];
  *(unsigned int *)(param_1[0x50a] + 0xc) = param_1[0x50a];
  param_1[0x50d] = param_2;
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  param_1[0x510] = 0;
  param_1 = param_1 + 0x511;
  FUN_0039741c();
  *param_1 = (unsigned int)&DAT_00421fac;
  param_1[9] = param_2;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x40;
  param_1[0xe] = 0x10000;
  param_1[0xf] = param_3;
  *(unsigned char *)((int)param_1 + 0x41) = 1;
  *(unsigned char *)((int)param_1 + 0x42) = 0;
  *(unsigned char *)((int)param_1 + 0x43) = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  *(unsigned char *)((int)param_1 + 0x45) = 0;
  return;
}
