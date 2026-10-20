/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1f88` (_code @ 0x3a1f88, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4078(void);
int effParticleRebuildHandles(int, unsigned int *);
int FUN_00350ff0(int, unsigned int *);
int FUN_0035105c(int, int, unsigned int);
int effParticleParamRebuildHandles3c(int, unsigned int *);
int FUN_00390548(int, unsigned int *);
int FUN_00390570(int, unsigned int *);
int FUN_003a1acc(int, unsigned int *);
int FUN_003b9138(int, unsigned int);

/* Supplied declaration required: FUN_002b4078. */
/* Supplied declaration required: effParticleRebuildHandles. */
/* Supplied declaration required: FUN_00350ff0. */
/* Supplied declaration required: FUN_0035105c. */
/* Supplied declaration required: effParticleParamRebuildHandles3c. */
/* Supplied declaration required: FUN_00390548. */
/* Supplied declaration required: FUN_00390570. */
/* Supplied declaration required: FUN_003a1acc. */
/* Supplied declaration required: FUN_003b9138. */


void FUN_003a1f88(int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  
  if (param_1[0xb] == 0) {
    temp_v0 = *param_1;
    FUN_002b4078();
    param_1[0xb] = temp_v0;
    *(int *)(temp_v0 + 0x4c) = param_1[0xc];
  }
  switch(param_2) {
  case 1:
    FUN_0035105c(param_1[0xb],*param_1,param_2);
    FUN_00390570(param_1[0xb],param_3);
    break;
  case 2:
    FUN_0035105c(param_1[0xb],*param_1,param_2);
    FUN_00390548(param_1[0xb],param_3);
    break;
  case 4:
    FUN_0035105c(param_1[0xb],*param_1,param_2);
    FUN_003b9138(param_1[0xb],*param_3);
    break;
  case 5:
    effParticleRebuildHandles(param_1[0xb],param_3);
    break;
  case 6:
    effParticleParamRebuildHandles3c(param_1[0xb],param_3);
    break;
  case 7:
    FUN_0035105c(param_1[0xb],*param_1,param_2);
    FUN_00350ff0(param_1[0xb],param_3);
    break;
  case 9:
    FUN_0035105c(param_1[0xb],*param_1,param_2);
    FUN_003a1acc(param_1[0xb],param_3);
  }
  *(short *)(param_1[0xb] + 0xc) = (short)param_2;
  return;
}

} /* extern "C" */
