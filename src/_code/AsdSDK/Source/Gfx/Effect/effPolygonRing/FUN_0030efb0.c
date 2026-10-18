/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030efb0` (_code @ 0x30efb0, 0x1f4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_0047375c; /* 0x47375c */

/* Supplied declaration required: FUN_002474a0. */
/* Supplied declaration required: FUN_0024ba44. */
/* Supplied declaration required: FUN_002bcf58. */
extern float *FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c7a54. */


float * FUN_0030efb0(int param_1)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float *pfVar5;
  float temp_v4;
  int temp_v5;
  unsigned char *puVar8;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float in_s0;
  unsigned long long temp_v9;
  float *pfVar13;
  
  temp_v8 = *(unsigned int *)(param_1 + 0x38);
  if (temp_v8 < 4) {
    temp_v8 = 3;
  }
  *(unsigned int *)(param_1 + 0x38) = temp_v8;
  pfVar5 = (float *)FUN_002c34a4(0x10000,0x100,0,temp_v8 * 4 + 0x10,0x10,1);
  pfVar13 = pfVar5 + temp_v8;
  *pfVar13 = (float)pfVar5;
  pfVar13[3] = (float)pfVar5;
  FUN_002bcf58(param_1 + 0x5c,param_1,0x5c);
  temp_v4 = 1.4013e-45f;
  FUN_002c7a54(1,param_1 + 0x5c);
  pfVar13[1] = temp_v4;
  temp_v4 = (float)(temp_v8 & 0xffff);
  FUN_002474a0(temp_v4,2,4,&DAT_0047375c,0x48);
  temp_v7 = 0;
  pfVar13[2] = temp_v4;
  puVar8 = *(unsigned char **)(*(int *)((int)temp_v4 + 8) + 0x38);
  *(unsigned int *)((int)temp_v4 + 0x54) = *(unsigned int *)((int)temp_v4 + 0x54) | 0x20;
  temp_v6 = *(unsigned int *)(param_1 + 0x44);
  if (temp_v8 != 0) {
    temp_v9 = 0x3f800000;
    temp_v5 = (*(unsigned int *)(param_1 + 0x48) & temp_v6) +
            (((temp_v6 ^ *(unsigned int *)(param_1 + 0x48)) & 0xfefefeff) >> 1);
    do {
      temp_v2 = (unsigned char)(temp_v6 >> 8);
      temp_v3 = (unsigned char)(temp_v6 >> 0x10);
      temp_v0 = (unsigned char)temp_v6;
      *puVar8 = temp_v0;
      puVar8[1] = temp_v2;
      puVar8[2] = temp_v3;
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      puVar8[3] = temp_v1;
      puVar8[4] = temp_v0;
      puVar8[5] = temp_v2;
      puVar8[6] = temp_v3;
      puVar8[7] = temp_v1;
      puVar8[8] = (char)temp_v5;
      puVar8[9] = (char)((unsigned int)temp_v5 >> 8);
      puVar8[10] = (char)((unsigned int)temp_v5 >> 0x10);
      puVar8[0xb] = (char)((unsigned int)temp_v5 >> 0x18);
      puVar8[0xc] = temp_v0;
      puVar8[0xd] = temp_v2;
      puVar8[0xe] = temp_v3;
      puVar8[0xf] = temp_v1;
      FUN_0024ba44(0);
      temp_v7 = temp_v7 + 1;
      puVar8 = puVar8 + 0x10;
      in_s0 = (((float)temp_v9 - *(float *)(param_1 + 0xcc)) + in_s0 * *(float *)(param_1 + 0xcc)) *
              *(float *)(param_1 + 200);
      *pfVar5 = in_s0;
      pfVar5 = pfVar5 + 1;
    } while (temp_v7 < temp_v8);
  }
  return pfVar13;
}
