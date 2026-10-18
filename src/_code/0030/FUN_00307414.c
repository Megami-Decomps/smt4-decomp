/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307414` (_code @ 0x307414, 0x4cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_00472560; /* 0x472560 */
extern unsigned char DAT_00472561; /* 0x472561 */
extern unsigned char DAT_00472562; /* 0x472562 */
extern unsigned char DAT_00472563; /* 0x472563 */
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
/* Supplied declaration required: FUN_0024f5ec. */
/* Supplied declaration required: FUN_00269694. */
/* Supplied declaration required: FUN_002f81d4. */


void FUN_00307414(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float *pfVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  
  temp_v4 = *(unsigned int *)(param_1 + 0x40);
  temp_v5 = (*(unsigned int **)(param_1 + 0x3c))[1];
  if ((*(unsigned int *)(temp_v4 + 0x34) < *(unsigned int *)(param_1 + 0x34)) && (*(unsigned int *)(temp_v4 + 0x34) != 0)) {
    return;
  }
  puVar6 = (unsigned int *)**(unsigned int **)(param_1 + 0x3c);
  temp_v3 = temp_v4;
  FUN_00269694(temp_v4,temp_v4 + 0x24);
  temp_v19 = 0.003921569f;
  temp_v18 = 255.0f;
  temp_v1 = *(unsigned int *)(param_1 + 0x30);
  DAT_004ea92c = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea930 = (float)VectorUnsignedToFloat
                                  ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea934 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea938 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea92c = DAT_004ea92c * 0.003921569f;
  DAT_004ea930 = DAT_004ea930 * 0.003921569f;
  DAT_004ea934 = DAT_004ea934 * 0.003921569f;
  DAT_004ea938 = DAT_004ea938 * 0.003921569f;
  temp_v17 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat((temp_v3 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat((temp_v3 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea91c = temp_v17 * 0.003921569f * DAT_004ea92c;
  DAT_004ea920 = temp_v9 * 0.003921569f * DAT_004ea930;
  DAT_004ea924 = temp_v13 * 0.003921569f * DAT_004ea934;
  DAT_004ea928 = temp_v16 * 0.003921569f * DAT_004ea938;
  temp_v7 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
  temp_v10 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
  temp_v1 = *(unsigned int *)(temp_v4 + 0x38);
  temp_v6 = *(unsigned int *)(temp_v4 + 0x80);
  temp_v3 = 0;
  temp_v11 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
  temp_v8 = VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
  if (temp_v1 != 0) {
    do {
      if (*puVar6 < temp_v6) {
        temp_v2 = temp_v4 + 0x3c;
        FUN_00269694(temp_v2,temp_v4 + 0x60,*puVar6,temp_v6);
        DAT_004ea938 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        DAT_004ea92c = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
        DAT_004ea930 = (float)VectorUnsignedToFloat
                                        ((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
        DAT_004ea934 = (float)VectorUnsignedToFloat
                                        ((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorUnsignedToFloat(temp_v8 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (float)VectorUnsignedToFloat(temp_v7 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = (float)VectorUnsignedToFloat(temp_v10 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorUnsignedToFloat(temp_v11 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        DAT_004ea938 = DAT_004ea938 * temp_v19;
        DAT_004ea92c = DAT_004ea92c * temp_v19;
        DAT_004ea930 = DAT_004ea930 * temp_v19;
        DAT_004ea934 = DAT_004ea934 * temp_v19;
        DAT_004ea91c = temp_v9 * temp_v19 * DAT_004ea92c;
        DAT_004ea920 = temp_v13 * temp_v19 * DAT_004ea930;
        DAT_004ea924 = temp_v16 * temp_v19 * DAT_004ea934;
        DAT_004ea928 = temp_v17 * temp_v19 * DAT_004ea938;
        pfVar4 = (float *)(*(int *)(temp_v5 + 4) + (temp_v3 & 0xffff) * 0x10);
        temp_v14 = VectorFloatToUnsigned(DAT_004ea91c * temp_v18,3);
        temp_v2 = VectorFloatToUnsigned(DAT_004ea920 * temp_v18,3);
        temp_v15 = VectorFloatToUnsigned(DAT_004ea924 * temp_v18,3);
        temp_v12 = VectorFloatToUnsigned(DAT_004ea928 * temp_v18,3);
        temp_v9 = (float)VectorUnsignedToFloat(temp_v12 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = (float)VectorUnsignedToFloat(temp_v15 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorUnsignedToFloat(temp_v14 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        *pfVar4 = temp_v9 * temp_v19 * temp_v19;
        pfVar4[3] = temp_v16 * temp_v19 * temp_v19;
        pfVar4[1] = temp_v13 * temp_v19 * temp_v19;
        pfVar4[2] = temp_v17 * temp_v19 * temp_v19;
      }
      else {
        pfVar4 = (float *)(*(int *)(temp_v5 + 4) + (temp_v3 & 0xffff) * 0x10);
        temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472560,(unsigned char)(in_fpscr >> 0x16) & 3);
        *pfVar4 = temp_v9 * temp_v19 * temp_v19;
        temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472561,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[1] = temp_v9 * temp_v19 * temp_v19;
        temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472562,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[2] = temp_v9 * temp_v19 * temp_v19;
        temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_00472563,(unsigned char)(in_fpscr >> 0x16) & 3);
        pfVar4[3] = temp_v9 * temp_v19 * temp_v19;
      }
      temp_v3 = temp_v3 + 1;
      puVar6 = puVar6 + 0xc;
    } while (temp_v3 < temp_v1);
  }
  FUN_002f81d4(temp_v5,param_1,param_1 + 0x10,param_1 + 0x20);
  if (*(char *)(temp_v4 + 0xb9) != '\0') {
    temp_v0 = *(unsigned short *)(temp_v5 + 0x12) | 0x100;
  }
  else {
    temp_v0 = *(unsigned short *)(temp_v5 + 0x12) & 0xfeff;
  }
  *(unsigned short *)(temp_v5 + 0x12) = temp_v0;
  FUN_0024f5ec(temp_v5,*(unsigned int *)(temp_v4 + 0x28) & 0xffff);
  return;
}
