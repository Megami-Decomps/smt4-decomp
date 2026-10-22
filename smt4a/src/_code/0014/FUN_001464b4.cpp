/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001464b4` (_code @ 0x1464b4, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006c2(...);
int asdDeallocateArrayStorage(unsigned int, int, int);

extern unsigned char DAT_00557c50; /* 0x557c50 */

/* Supplied declaration required: FUN_001006c2. */
/* Supplied declaration required: asdDeallocateArrayStorage. */


unsigned int * FUN_001464b4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int *puVar6;
  unsigned int temp_v2;
  
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00557c50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = (unsigned int *)FUN_001006c2(0x400,0);
  puVar6 = (unsigned int *)param_1[7];
  puVar3 = puVar2;
  for (puVar4 = (unsigned int *)param_1[6]; puVar4 != puVar6; puVar4 = puVar4 + 1) {
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = *puVar4;
    }
    puVar3 = puVar3 + 1;
  }
  asdDeallocateArrayStorage(param_1[6],(int)(param_1[8] - param_1[6]) >> 2,0);
  temp_v1 = param_1[6];
  param_1[6] = (unsigned int)puVar2;
  param_1[7] = ((param_1[7] - temp_v1) & 0xfffffffcU) + (int)puVar2;
  param_1[8] = (unsigned int)(puVar2 + 0x100);
  if ((unsigned int)((int)(param_1[0xb] - param_1[9]) >> 3) < 0x100) {
    temp_v0 = (int)(param_1[10] - param_1[9]) >> 3;
    temp_v2 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
    if (temp_v2 < temp_v0 + 0x20) {
      temp_v2 = temp_v0 + 0x20;
    }
    if (temp_v2 < 0x101) {
      temp_v2 = 0x100;
    }
    puVar2 = (unsigned int *)FUN_001006c2(temp_v2 << 3,0);
    puVar6 = (unsigned int *)param_1[10];
    puVar3 = puVar2;
    for (puVar4 = (unsigned int *)param_1[9]; puVar4 != puVar6; puVar4 = puVar4 + 2) {
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
      }
      puVar3 = puVar3 + 2;
    }
    asdDeallocateArrayStorage(param_1[9],(int)(param_1[0xb] - param_1[9]) >> 3,0);
    temp_v1 = param_1[9];
    param_1[9] = (unsigned int)puVar2;
    param_1[10] = ((param_1[10] - temp_v1) & 0xfffffff8U) + (int)puVar2;
    param_1[0xb] = (unsigned int)(puVar2 + temp_v2 * 2);
  }
  return param_1;
}

} /* extern "C" */
