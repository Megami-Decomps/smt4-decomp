/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcff8` (_code @ 0x3bcff8, 0x2f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_006472fc; /* 0x6472fc */
extern float DAT_00647300; /* 0x647300 */
extern float DAT_00647304; /* 0x647304 */
extern float DAT_00647308; /* 0x647308 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned long long aeabi_idivmod(unsigned int, int);


void FUN_003bcff8(int param_1,int param_2,unsigned int param_3)

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
    DAT_006472fc = DAT_006472dc;
    DAT_00647300 = DAT_006472e0;
    DAT_00647304 = DAT_006472e4;
    DAT_00647308 = DAT_006472e8;
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
    DAT_006472f8 = DAT_00647308;
    DAT_006472ec = DAT_006472fc;
    DAT_006472f0 = DAT_00647300;
    DAT_006472f4 = DAT_00647304;
    DAT_006472dc = (temp_v4 * temp_v13 * temp_v5 + temp_v3 * temp_v13 * temp_v6) * DAT_006472fc;
    DAT_006472e0 = (temp_v8 * temp_v13 * temp_v5 + temp_v7 * temp_v13 * temp_v6) * DAT_00647300;
    DAT_006472e4 = (temp_v10 * temp_v13 * temp_v5 + temp_v9 * temp_v13 * temp_v6) * DAT_00647304;
    DAT_006472e8 = (temp_v12 * temp_v13 * temp_v5 + temp_v11 * temp_v13 * temp_v6) * DAT_00647308;
    return;
  }
  temp_v1 = *(unsigned int *)(param_1 + *(char *)(param_2 + 0x18) * 4 + 0x3c);
  temp_v4 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_006472ec = temp_v4 * 0.003921569f;
  DAT_006472f0 = temp_v13 * 0.003921569f;
  DAT_006472f4 = temp_v3 * 0.003921569f;
  DAT_006472f8 = temp_v6 * 0.003921569f;
  DAT_006472dc = DAT_006472dc * temp_v4 * 0.003921569f;
  DAT_006472e0 = DAT_006472e0 * temp_v13 * 0.003921569f;
  DAT_006472e4 = DAT_006472e4 * temp_v3 * 0.003921569f;
  DAT_006472e8 = DAT_006472e8 * temp_v6 * 0.003921569f;
  return;
}

} /* extern "C" */
