/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e648` (_code @ 0x22e648, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00230b90(int, unsigned short);
extern int FUN_00230c1c(unsigned short, unsigned int);
extern unsigned int FUN_00230e04(unsigned short *);
extern int FUN_0023360c(int);
extern int FUN_00240d5c(int);
extern int FUN_0028fb3c(unsigned short);


void FUN_0022e648(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = param_2;
  temp_v0 = FUN_00240d5c(param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x880);
  temp_v1 = *(int *)(param_1 + 0x860);
  if (temp_v1 == 7 || temp_v1 == 8) {
    temp_v0 = temp_v0 + 1;
  }
  else {
    temp_v0 = temp_v0 + 2;
  }
  temp_v2 = FUN_0023360c(param_1 + temp_v1 * 0x74 + 0x880);
  puVar5 = (unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xc94 + temp_v2 * 4);
  if (*(int *)(param_1 + 0x860) != 8) {
    temp_v3 = FUN_00230e04(puVar5);
    temp_v1 = FUN_00230c1c(*puVar5,temp_v3);
  }
  else {
    temp_v1 = FUN_0028fb3c(*puVar5);
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    else if (temp_v1 >= 100) {
      temp_v1 = 99;
    }
    temp_v2 = FUN_00230b90(param_1,*puVar5);
    if (temp_v2 != 0) {
      temp_v1 = temp_v1 - 1;
    }
  }
  *(unsigned int *)(param_1 + 0x868) = (unsigned int)(temp_v1 != 0);
  *(int *)(param_1 + 0x86c) = temp_v1;
  *(unsigned int *)(param_1 + 0x870) = 0;
  *(int *)(param_1 + 0x874) = temp_v0;
  return;
}
