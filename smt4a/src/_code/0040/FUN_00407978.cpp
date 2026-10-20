/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00407978` (_code @ 0x407978, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *asdSoundGetListener(void);


void FUN_00407978(unsigned int *param_1)

{
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
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x13] = 0xffffffff;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x169] = puVar1[2];
  param_1[0x167] = temp_v0;
  param_1[0x168] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x16c] = puVar1[2];
  param_1[0x16a] = temp_v0;
  param_1[0x16b] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x16f] = puVar1[2];
  param_1[0x16d] = temp_v0;
  param_1[0x16e] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x172] = puVar1[2];
  param_1[0x170] = temp_v0;
  param_1[0x171] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x175] = puVar1[2];
  param_1[0x173] = temp_v0;
  param_1[0x174] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x178] = puVar1[2];
  param_1[0x176] = temp_v0;
  param_1[0x177] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x17b] = puVar1[2];
  param_1[0x179] = temp_v0;
  param_1[0x17a] = temp_v1;
  puVar1 = (unsigned int *)asdSoundGetListener();
  temp_v0 = *puVar1;
  temp_v1 = puVar1[1];
  param_1[0x17e] = puVar1[2];
  param_1[0x17c] = temp_v0;
  param_1[0x17d] = temp_v1;
  return;
}

} /* extern "C" */
