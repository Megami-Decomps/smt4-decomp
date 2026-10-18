/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353cd4` (_code @ 0x353cd4, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_STORAGE_s__________0058127c_17_1_DEFINED
#define ROMWRIGHT_STORAGE_s__________0058127c_17_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__________0058127c_17_1 {
    char whole[17];
    unsigned char u1[17];
    signed char s1[17];
};
typedef char romwright_storage_s__________0058127c_17_1_size_check[(sizeof(union romwright_storage_s__________0058127c_17_1) == 17) ? 1 : -1];
typedef char romwright_storage_s__________0058127c_17_1_u1_width_check[(sizeof(((union romwright_storage_s__________0058127c_17_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__________0058127c_17_1_s1_width_check[(sizeof(((union romwright_storage_s__________0058127c_17_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__________0058127c_17_1 s__________0058127c; /* 0x58127c */


void FUN_00353cd4(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = (*(unsigned int *)&s__________0058127c.u1[0]) + *(int *)((*(unsigned int *)&s__________0058127c.u1[0]) + 0x2840) * 0x284;
  puVar2 = (unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x280) * 0x28);
  *puVar2 = 0;
  puVar2[1] = in_s0;
  puVar2[2] = in_s1;
  puVar2[3] = in_s2;
  *(int *)(temp_v0 + 0x280) = *(int *)(temp_v0 + 0x280) + 1;
  return;
}
