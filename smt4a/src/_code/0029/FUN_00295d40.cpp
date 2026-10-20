/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295d40` (_code @ 0x295d40, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);

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

/* Supplied declaration required: FUN_002b5cb4. */


void FUN_00295d40(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v0 = 0;
  temp_v1 = (*(unsigned int *)&s__________0058127c.u1[0]) + *(int *)((*(unsigned int *)&s__________0058127c.u1[0]) + 0x2840) * 0x284;
  if (0 < *(int *)(temp_v1 + 0x280)) {
    temp_v6 = 0.0f;
    temp_v7 = 1.0f;
    do {
      puVar1 = (unsigned int *)(temp_v1 + temp_v0 * 0x28);
      if (temp_v0 != 0) {
        *puVar1 = *puVar1 | 1;
        temp_v2 = (float)puVar1[1];
        FUN_002b5cb4();
        if (temp_v2 < temp_v6) {
          temp_v2 = -temp_v2;
        }
        temp_v3 = (float)puVar1[-9] - (float)puVar1[1];
        temp_v4 = (float)puVar1[-8] - (float)puVar1[2];
        temp_v5 = (float)puVar1[-7] - (float)puVar1[3];
        if (temp_v2 != temp_v6) {
          temp_v2 = temp_v7 / temp_v2;
          temp_v3 = temp_v3 * temp_v2;
          temp_v4 = temp_v4 * temp_v2;
          temp_v5 = temp_v5 * temp_v2;
        }
        puVar1[4] = (unsigned int)temp_v3;
        puVar1[5] = (unsigned int)temp_v4;
        puVar1[6] = (unsigned int)temp_v5;
      }
      else {
        *puVar1 = *puVar1 | 0xfffffffe;
        puVar1[4] = (unsigned int)temp_v6;
        puVar1[5] = (unsigned int)temp_v6;
        puVar1[6] = (unsigned int)temp_v6;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(temp_v1 + 0x280));
  }
  *(int *)((*(unsigned int *)&s__________0058127c.u1[0]) + 0x2840) = *(int *)((*(unsigned int *)&s__________0058127c.u1[0]) + 0x2840) + 1;
  return;
}

} /* extern "C" */
