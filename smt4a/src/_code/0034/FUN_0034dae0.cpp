/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dae0` (_code @ 0x34dae0, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

extern int DAT_00588fd4; /* 0x588fd4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00261424(void);


void FUN_0034dae0(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  float temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
  temp_v0 = DAT_00588fd4;
  temp_v2 = FUN_00261424();
  temp_v4 = 0.0f;
  temp_v8 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v8) << 0x1d);
  if ((romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) && (temp_v4 = temp_v8, (int)temp_v8 >= 0x41100001)) {
    temp_v4 = 9.0f;
  }
  param_2 = param_2 & 0xffff;
  FUN_0019cac4();
  temp_v8 = (float)VectorUnsignedToFloat
                           (*(unsigned short *)(param_2 + 2) & 0xffff7fff,(unsigned char)(temp_v3 >> 0x16) & 3);
  temp_v7 = (unsigned int)(temp_v8 * (temp_v4 * 0.55f + 1.0f) + temp_v4 * temp_v4 * 5.0f);
  temp_v1 = (unsigned short)temp_v7;
  *(unsigned short *)(param_1 + 2) = temp_v1;
  if ((temp_v7 & 0xffff) >= 0x3e7) {
    temp_v1 = 999;
  }
  *(unsigned short *)(param_1 + 2) = temp_v1;
  if (param_2 != 0) {
    temp_v4 = temp_v4 * 0.3f + 1.0f + temp_v4 * temp_v4 * 0.06666667f;
    temp_v8 = (float)VectorUnsignedToFloat(*(unsigned int *)(param_2 + 4),(unsigned char)(temp_v3 >> 0x16) & 3);
    temp_v6 = (int)(temp_v4 * temp_v8);
    *(int *)(temp_v0 + 0x20e8) = temp_v6;
    if (temp_v6 >= 0x98967f) {
      temp_v6 = 9999999;
    }
    *(int *)(temp_v0 + 0x20e8) = temp_v6;
    temp_v8 = (float)VectorUnsignedToFloat(*(unsigned int *)(param_2 + 8),(unsigned char)(temp_v3 >> 0x16) & 3);
    temp_v5 = (int)(temp_v4 * temp_v8);
    temp_v6 = 9999999;
    if (temp_v5 < 9999999) {
      temp_v6 = temp_v5;
    }
    *(int *)(temp_v0 + 0x20ec) = temp_v5;
    *(int *)(temp_v0 + 0x20ec) = temp_v6;
    return;
  }
  *(unsigned int *)(temp_v0 + 0x20e8) = *(unsigned int *)(param_1 + 0x10);
  *(unsigned int *)(temp_v0 + 0x20ec) = *(unsigned int *)(param_1 + 0x14);
  return;
}

} /* extern "C" */
