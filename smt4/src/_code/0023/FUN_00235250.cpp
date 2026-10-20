/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235250` (_code @ 0x235250, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(unsigned int *, int);

extern unsigned int *asdSoundGetListener(void);
/* Supplied declaration required: memClear. */


void FUN_00235250(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  memClear(param_1 + 0x15b,0x80);
  memClear(param_1 + 0x17b,0xa0);
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x57d] = puVar1[2];
  param_1[0x57b] = temp_v0;
  param_1[0x57c] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x580] = puVar1[2];
  param_1[0x57e] = temp_v0;
  param_1[0x57f] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x583] = puVar1[2];
  param_1[0x581] = temp_v0;
  param_1[0x582] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x586] = puVar1[2];
  param_1[0x584] = temp_v0;
  param_1[0x585] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x589] = puVar1[2];
  param_1[0x587] = temp_v0;
  param_1[0x588] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x58c] = puVar1[2];
  param_1[0x58a] = temp_v0;
  param_1[0x58b] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x58f] = puVar1[2];
  param_1[0x58d] = temp_v0;
  param_1[0x58e] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x592] = puVar1[2];
  param_1[0x590] = temp_v0;
  param_1[0x591] = temp_v1;
  return;
}

} /* extern "C" */
