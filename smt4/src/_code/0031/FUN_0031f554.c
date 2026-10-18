/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f554` (_code @ 0x31f554, 0x2f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea93c; /* 0x4ea93c */
extern float DAT_004ea940; /* 0x4ea940 */
extern float DAT_004ea944; /* 0x4ea944 */
extern float DAT_004ea948; /* 0x4ea948 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned long long aeabi_idivmod(unsigned int, int);


void FUN_0031f554(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  
  temp_v13 = 0.003921569f;
  temp_v0 = *(int *)(param_1 + 0x38) / 6;
  if (0 < temp_v0) {
    DAT_004ea93c = DAT_004ea91c;
    DAT_004ea940 = DAT_004ea920;
    DAT_004ea944 = DAT_004ea924;
    DAT_004ea948 = DAT_004ea928;
    temp_v14 = aeabi_idivmod(param_3,temp_v0);
    temp_v6 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
    temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = ((int)temp_v14 + (int)*(char *)(param_2 + 0x18)) % 6;
    temp_v0 = temp_v2 + 1;
    temp_v6 = temp_v6 / temp_v3;
    temp_v1 = *(unsigned int *)(param_1 + temp_v0 * 4 + (temp_v0 / 6) * -0x18 + 0x3c);
    temp_v11 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorUnsignedToFloat((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = *(unsigned int *)(param_1 + temp_v2 * 4 + 0x3c);
    temp_v12 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = 1.0f - temp_v6;
    DAT_004ea938 = DAT_004ea948;
    DAT_004ea92c = DAT_004ea93c;
    DAT_004ea930 = DAT_004ea940;
    DAT_004ea934 = DAT_004ea944;
    DAT_004ea91c = (temp_v4 * temp_v13 * temp_v5 + temp_v3 * temp_v13 * temp_v6) * DAT_004ea93c;
    DAT_004ea920 = (temp_v8 * temp_v13 * temp_v5 + temp_v7 * temp_v13 * temp_v6) * DAT_004ea940;
    DAT_004ea924 = (temp_v10 * temp_v13 * temp_v5 + temp_v9 * temp_v13 * temp_v6) * DAT_004ea944;
    DAT_004ea928 = (temp_v12 * temp_v13 * temp_v5 + temp_v11 * temp_v13 * temp_v6) * DAT_004ea948;
    return;
  }
  temp_v1 = *(unsigned int *)(param_1 + *(char *)(param_2 + 0x18) * 4 + 0x3c);
  temp_v4 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea92c = temp_v4 * 0.003921569f;
  DAT_004ea930 = temp_v13 * 0.003921569f;
  DAT_004ea934 = temp_v3 * 0.003921569f;
  DAT_004ea938 = temp_v6 * 0.003921569f;
  DAT_004ea91c = DAT_004ea91c * temp_v4 * 0.003921569f;
  DAT_004ea920 = DAT_004ea920 * temp_v13 * 0.003921569f;
  DAT_004ea924 = DAT_004ea924 * temp_v3 * 0.003921569f;
  DAT_004ea928 = DAT_004ea928 * temp_v6 * 0.003921569f;
  return;
}
