/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305400` (_code @ 0x305400, 0x5dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);
int rt_memcpy(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: rt_memcpy. */


void FUN_00305400(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v2;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
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
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  float temp_v27;
  float temp_v28;
  
  piVar1 = *(int **)(param_1 + 0x10);
  temp_v5 = (unsigned int)*(short *)((int)piVar1 + 10);
  temp_v4 = (unsigned int)(short)piVar1[2];
  puVar4 = *(unsigned int **)(*piVar1 + 0x38);
  temp_v2 = temp_v5 / 3;
  piVar1[0x16] = piVar1[0x16] | 0x20;
  temp_v0 = *param_2;
  temp_v7 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = 0.0f;
  temp_v17 = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = (float)VectorUnsignedToFloat((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = (float)VectorUnsignedToFloat((temp_v0 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = param_2[1];
  temp_v19 = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v18 = (float)VectorUnsignedToFloat((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat((temp_v0 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = param_2[2];
  temp_v27 = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v22 = (float)VectorUnsignedToFloat((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = (float)VectorUnsignedToFloat((temp_v0 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = 0;
  temp_v0 = param_2[3];
  temp_v21 = (float)VectorUnsignedToFloat(temp_v0 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v20 = (float)VectorUnsignedToFloat(temp_v0 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = (float)VectorUnsignedToFloat((temp_v0 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat((temp_v0 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v28 = temp_v21 * 0.003921569f;
  if (temp_v2 != 0) {
    temp_v21 = 255.0f;
  }
  puVar5 = puVar4;
  puVar6 = puVar4;
  DAT_004ea91c = temp_v28;
  DAT_004ea920 = temp_v11 * 0.003921569f;
  DAT_004ea924 = temp_v15 * 0.003921569f;
  DAT_004ea928 = temp_v20 * 0.003921569f;
  if (temp_v2 != 0) {
    do {
      DAT_004ea938 = 1.0f - temp_v6;
      temp_v3 = temp_v3 + 1;
      temp_v23 = VectorFloatToUnsigned
                         ((temp_v27 * 0.003921569f * temp_v6 + temp_v17 * 0.003921569f * DAT_004ea938) *
                          temp_v21,3);
      temp_v24 = VectorFloatToUnsigned
                         ((temp_v22 * 0.003921569f * temp_v6 + temp_v16 * 0.003921569f * DAT_004ea938) *
                          temp_v21,3);
      temp_v25 = VectorFloatToUnsigned
                         ((temp_v14 * 0.003921569f * temp_v6 + temp_v12 * 0.003921569f * DAT_004ea938) *
                          temp_v21,3);
      temp_v26 = VectorFloatToUnsigned
                         ((temp_v10 * 0.003921569f * temp_v6 + temp_v8 * 0.003921569f * DAT_004ea938) *
                          temp_v21,3);
      *(char *)(puVar5 + 1) = (char)temp_v26;
      *(char *)((int)puVar5 + 5) = (char)temp_v25;
      *(char *)((int)puVar5 + 6) = (char)temp_v24;
      *(char *)((int)puVar5 + 7) = (char)temp_v23;
      DAT_004ea91c = temp_v28 * temp_v6;
      DAT_004ea920 = temp_v11 * 0.003921569f * temp_v6;
      DAT_004ea924 = temp_v15 * 0.003921569f * temp_v6;
      DAT_004ea928 = temp_v20 * 0.003921569f * temp_v6;
      temp_v6 = temp_v6 + 1.0f / temp_v7;
      DAT_004ea92c = temp_v19 * 0.003921569f * DAT_004ea938;
      DAT_004ea930 = temp_v18 * 0.003921569f * DAT_004ea938;
      DAT_004ea934 = temp_v13 * 0.003921569f * DAT_004ea938;
      DAT_004ea938 = temp_v9 * 0.003921569f * DAT_004ea938;
      DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
      DAT_004ea920 = DAT_004ea920 + DAT_004ea930;
      DAT_004ea924 = DAT_004ea924 + DAT_004ea934;
      DAT_004ea928 = DAT_004ea928 + DAT_004ea938;
      temp_v23 = VectorFloatToUnsigned(DAT_004ea91c * temp_v21,3);
      temp_v26 = VectorFloatToUnsigned(DAT_004ea920 * temp_v21,3);
      temp_v24 = VectorFloatToUnsigned(DAT_004ea924 * temp_v21,3);
      temp_v25 = VectorFloatToUnsigned(DAT_004ea928 * temp_v21,3);
      *(char *)puVar5 = (char)temp_v25;
      *(char *)((int)puVar5 + 1) = (char)temp_v24;
      *(char *)((int)puVar5 + 2) = (char)temp_v26;
      *(char *)((int)puVar5 + 3) = (char)temp_v23;
      puVar6 = puVar5 + 3;
      puVar5[2] = *puVar5;
      puVar5 = puVar6;
    } while (temp_v3 < temp_v2);
  }
  temp_v2 = 1;
  if (temp_v2 < temp_v4) {
    do {
      rt_memcpy(puVar6,puVar4,temp_v5 << 2);
      temp_v2 = temp_v2 + 1;
      puVar6 = puVar6 + temp_v5;
    } while (temp_v2 < temp_v4);
  }
  piVar1 = *(int **)(param_1 + 0x14);
  puVar9 = *(unsigned char **)(*piVar1 + 0x38);
  piVar1[0x16] = piVar1[0x16] | 0x20;
  temp_v2 = *param_2;
  *puVar9 = (char)temp_v2;
  puVar9[1] = (char)(temp_v2 >> 8);
  puVar9[2] = (char)(temp_v2 >> 0x10);
  puVar9[3] = (char)(temp_v2 >> 0x18);
  temp_v2 = param_2[1];
  temp_v1 = 3;
  puVar9[4] = (char)temp_v2;
  puVar9[5] = (char)(temp_v2 >> 8);
  puVar9[6] = (char)(temp_v2 >> 0x10);
  puVar4 = (unsigned int *)(puVar9 + 4);
  puVar9[7] = (char)(temp_v2 >> 0x18);
  do {
    temp_v1 = temp_v1 - 1;
    puVar4[1] = *(unsigned int *)(puVar9 + 4);
    puVar4 = puVar4 + 2;
    *puVar4 = *(unsigned int *)(puVar9 + 4);
  } while (temp_v1 != 0);
  temp_v2 = 1;
  puVar8 = puVar9;
  if (temp_v4 >= 2) {
    do {
      puVar8 = puVar8 + 0x20;
      rt_memcpy(puVar8,puVar9,0x20);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v4);
  }
  return;
}

} /* extern "C" */
