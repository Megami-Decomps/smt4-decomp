/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1ee8` (_code @ 0x1c1ee8, 0x30c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int DAT_00446ff4; /* 0x446ff4 */
extern int DAT_00447008; /* 0x447008 */
extern int *DAT_00447018; /* 0x447018 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0026e8a4. */
/* Supplied declaration required: FUN_0026ea5c. */


void FUN_001c1ee8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned long long temp_v0;
  unsigned long long temp_v1;
  unsigned long long temp_v2;
  unsigned long long *puVar4;
  float *pfVar5;
  int *piVar6;
  int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  
  temp_v4 = 0;
  if (DAT_00447018[9] != 0) {
    temp_v15 = 0x3eaaaaab;
    do {
      piVar6 = (int *)(DAT_00447018[8] + temp_v4 * 0x18);
      puVar8 = (unsigned int *)(DAT_00447008 + DAT_00446ff4 * 0xa8);
      temp_v3 = *DAT_00447018;
      puVar4 = (unsigned long long *)(temp_v3 + *piVar6 * 0x10);
      temp_v0 = *puVar4;
      temp_v10 = *(float *)(puVar4 + 1);
      puVar4 = (unsigned long long *)(temp_v3 + piVar6[1] * 0x10);
      temp_v1 = *puVar4;
      temp_v13 = *(float *)(puVar4 + 1);
      pfVar5 = (float *)(temp_v3 + piVar6[2] * 0x10);
      temp_v11 = *pfVar5;
      temp_v2 = *(unsigned long long *)(pfVar5 + 1);
      pfVar5 = (float *)(DAT_00447018[2] + piVar6[4] * 0x10);
      temp_v5 = *pfVar5;
      temp_v6 = pfVar5[1];
      temp_v7 = pfVar5[2];
      *(float *)&puVar8[3] = temp_v5;
      *(float *)&puVar8[4] = temp_v6;
      *(float *)&puVar8[5] = temp_v7;
      temp_v8 = (float)temp_v0;
      temp_v9 = (float)((unsigned long long)temp_v0 >> 0x20);
      temp_v12 = (float)((unsigned long long)temp_v1 >> 0x20);
      puVar8[6] = temp_v5 * temp_v8 + temp_v6 * temp_v9 + temp_v7 * temp_v10;
      temp_v7 = (float)temp_v1;
      temp_v5 = (float)temp_v2;
      temp_v6 = (float)((unsigned long long)temp_v2 >> 0x20);
      temp_v14 = (float)temp_v15;
      puVar8[0x23] = (temp_v8 + temp_v7 + temp_v11) * temp_v14;
      puVar8[0x24] = (temp_v9 + temp_v12 + temp_v5) * temp_v14;
      puVar8[0x25] = (temp_v10 + temp_v13 + temp_v6) * temp_v14;
      *(float *)&puVar8[0x17] = temp_v8;
      *(float *)&puVar8[0x18] = temp_v9;
      *(float *)&puVar8[0x19] = temp_v10;
      *(float *)&puVar8[0x1d] = temp_v11;
      *(float *)&puVar8[0x1e] = temp_v5;
      *(float *)&puVar8[0x1f] = temp_v6;
      *(float *)&puVar8[0x1a] = temp_v7;
      *(float *)&puVar8[0x1b] = temp_v12;
      *(float *)&puVar8[0x1c] = temp_v13;
      *(unsigned char *)((int)puVar8 + 5) = 3;
      *puVar8 = param_1;
      *(unsigned short *)((int)puVar8 + 6) = 0;
      *(unsigned char *)(puVar8 + 2) = 1;
      *(unsigned char *)((int)puVar8 + 9) = 0;
      if (romwright_fabs_4((float)puVar8[5]) <= romwright_fabs_4((float)puVar8[3])) {
        *(unsigned char *)(puVar8 + 1) = 0;
      }
      else {
        *(unsigned char *)(puVar8 + 1) = 2;
      }
      FUN_0026ea5c((int)*(char *)(puVar8 + 1),0,puVar8 + 7,puVar8 + 0x13);
      FUN_0026ea5c((int)*(char *)(puVar8 + 1),1,puVar8 + 10,puVar8 + 0x14);
      FUN_0026ea5c((int)*(char *)(puVar8 + 1),2,puVar8 + 0xd,puVar8 + 0x15);
      FUN_0026e8a4((int)*(char *)(puVar8 + 1),(int)*(char *)((int)puVar8 + 5),puVar8 + 0x26,
                   puVar8 + 0x28);
      temp_v4 = temp_v4 + 1;
      DAT_00446ff4 = DAT_00446ff4 + 1;
    } while (temp_v4 < (unsigned int)DAT_00447018[9]);
  }
  return;
}
