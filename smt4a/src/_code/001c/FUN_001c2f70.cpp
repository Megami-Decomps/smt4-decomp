/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2f70` (_code @ 0x1c2f70, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6694(unsigned int, int);

extern unsigned int _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
/* Supplied declaration required: FUN_001b6694. */


void FUN_001c2f70(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  *(unsigned int *)(param_1 + 0x170) = param_2[2];
  *(unsigned int *)(param_1 + 0x168) = temp_v0;
  *(unsigned int *)(param_1 + 0x16c) = temp_v1;
  temp_v0 = param_3[1];
  temp_v1 = param_3[2];
  temp_v2 = param_3[3];
  temp_v3 = param_3[4];
  temp_v4 = param_3[5];
  temp_v5 = param_3[6];
  temp_v6 = param_3[7];
  *(unsigned int *)(param_1 + 0x17c) = *param_3;
  *(unsigned int *)(param_1 + 0x180) = temp_v0;
  *(unsigned int *)(param_1 + 0x184) = temp_v1;
  *(unsigned int *)(param_1 + 0x188) = temp_v2;
  *(unsigned int *)(param_1 + 0x18c) = temp_v3;
  *(unsigned int *)(param_1 + 400) = temp_v4;
  *(unsigned int *)(param_1 + 0x194) = temp_v5;
  *(unsigned int *)(param_1 + 0x198) = temp_v6;
  temp_v0 = param_3[9];
  temp_v1 = param_3[10];
  temp_v2 = param_3[0xb];
  temp_v3 = param_3[0xc];
  *(unsigned int *)(param_1 + 0x19c) = param_3[8];
  *(unsigned int *)(param_1 + 0x1a0) = temp_v0;
  *(unsigned int *)(param_1 + 0x1a4) = temp_v1;
  *(unsigned int *)(param_1 + 0x1a8) = temp_v2;
  *(unsigned int *)(param_1 + 0x1ac) = temp_v3;
  *(unsigned char *)(param_1 + 0x164) = 1;
  temp_v0 = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
  FUN_001b6694(temp_v0,param_1 + 0x50);
  *(unsigned char *)(param_1 + 0x166) = 1;
  return;
}

} /* extern "C" */
