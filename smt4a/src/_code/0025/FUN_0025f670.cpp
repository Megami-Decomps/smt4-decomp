/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025f670` (_code @ 0x25f670, 0x2d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4d08(int, unsigned char [68]);
int FUN_00226e90(int, int, unsigned int *, unsigned int *);
int FUN_00237438(int, int, unsigned int *, unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern int DAT_00580214; /* 0x580214 */
extern int DAT_00580228; /* 0x580228 */
extern int *DAT_00580234; /* 0x580234 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_001f4d08. */
/* Supplied declaration required: FUN_00226e90. */
/* Supplied declaration required: FUN_00237438. */


void FUN_0025f670(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned long long temp_v0;
  unsigned long long temp_v1;
  unsigned long long temp_v2;
  unsigned long long temp_v3;
  int *piVar5;
  unsigned long long *puVar6;
  float *pfVar7;
  float *pfVar8;
  int temp_v4;
  unsigned int *puVar10;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned char temp_v20 [68];
  
  temp_v5 = 0;
  if (DAT_00580234[0xb] != 0) {
    temp_v19 = 0x3e800000;
    do {
      puVar10 = (unsigned int *)(DAT_00580228 + DAT_00580214 * 0xa8);
      piVar5 = (int *)(DAT_00580234[10] + temp_v5 * 0x18);
      temp_v4 = *DAT_00580234;
      puVar6 = (unsigned long long *)(temp_v4 + *piVar5 * 0x10);
      temp_v0 = *puVar6;
      temp_v11 = *(float *)(puVar6 + 1);
      pfVar7 = (float *)(temp_v4 + piVar5[1] * 0x10);
      temp_v15 = *pfVar7;
      temp_v1 = *(unsigned long long *)(pfVar7 + 1);
      puVar6 = (unsigned long long *)(temp_v4 + piVar5[2] * 0x10);
      temp_v2 = *puVar6;
      temp_v14 = *(float *)(puVar6 + 1);
      pfVar8 = (float *)(temp_v4 + piVar5[3] * 0x10);
      pfVar7 = (float *)(DAT_00580234[2] + piVar5[4] * 0x10);
      temp_v12 = *pfVar8;
      temp_v3 = *(unsigned long long *)(pfVar8 + 1);
      temp_v6 = *pfVar7;
      temp_v7 = pfVar7[1];
      temp_v8 = pfVar7[2];
      *(float *)&puVar10[3] = temp_v6;
      *(float *)&puVar10[4] = temp_v7;
      *(float *)&puVar10[5] = temp_v8;
      temp_v9 = (float)temp_v0;
      temp_v10 = (float)((unsigned long long)temp_v0 >> 0x20);
      temp_v16 = (float)temp_v1;
      temp_v17 = (float)((unsigned long long)temp_v1 >> 0x20);
      temp_v13 = (float)((unsigned long long)temp_v2 >> 0x20);
      puVar10[6] = temp_v6 * temp_v9 + temp_v7 * temp_v10 + temp_v8 * temp_v11;
      temp_v8 = (float)temp_v2;
      temp_v7 = (float)((unsigned long long)temp_v3 >> 0x20);
      temp_v6 = (float)temp_v3;
      temp_v18 = (float)temp_v19;
      puVar10[0x23] = (temp_v9 + temp_v15 + temp_v8 + temp_v12) * temp_v18;
      puVar10[0x24] = (temp_v10 + temp_v16 + temp_v13 + temp_v6) * temp_v18;
      puVar10[0x25] = (temp_v11 + temp_v17 + temp_v14 + temp_v7) * temp_v18;
      *(float *)&puVar10[0x17] = temp_v9;
      *(float *)&puVar10[0x18] = temp_v10;
      *(float *)&puVar10[0x19] = temp_v11;
      *(float *)&puVar10[0x20] = temp_v12;
      *(float *)&puVar10[0x21] = temp_v6;
      *(float *)&puVar10[0x22] = temp_v7;
      *(float *)&puVar10[0x1d] = temp_v8;
      *(float *)&puVar10[0x1e] = temp_v13;
      *(float *)&puVar10[0x1f] = temp_v14;
      *(float *)&puVar10[0x1a] = temp_v15;
      *(float *)&puVar10[0x1b] = temp_v16;
      *(float *)&puVar10[0x1c] = temp_v17;
      *(unsigned char *)((int)puVar10 + 5) = 4;
      *puVar10 = param_1;
      *(unsigned short *)((int)puVar10 + 6) = 0;
      *(unsigned char *)(puVar10 + 2) = 1;
      *(unsigned char *)((int)puVar10 + 9) = 0;
      if ((int)romwright_fabs_4((float)puVar10[4]) < 0x3f666666) {
        if (romwright_fabs_4((float)puVar10[5]) <= romwright_fabs_4((float)puVar10[3])) {
          *(unsigned char *)(puVar10 + 1) = 0;
        }
        else {
          *(unsigned char *)(puVar10 + 1) = 2;
        }
        FUN_001f4d08((int)*(char *)(puVar10 + 1),temp_v20);
        FUN_00237438((int)*(char *)(puVar10 + 1),0,puVar10 + 7,puVar10 + 0x13);
        FUN_00237438((int)*(char *)(puVar10 + 1),1,puVar10 + 10,puVar10 + 0x14);
        FUN_00237438((int)*(char *)(puVar10 + 1),2,puVar10 + 0xd,puVar10 + 0x15);
        FUN_00237438((int)*(char *)(puVar10 + 1),2,puVar10 + 0x10,puVar10 + 0x16);
        FUN_00226e90((int)*(char *)(puVar10 + 1),(int)*(char *)((int)puVar10 + 5),puVar10 + 0x26,
                     puVar10 + 0x28);
        DAT_00580214 = DAT_00580214 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < (unsigned int)DAT_00580234[0xb]);
  }
  return;
}

} /* extern "C" */
