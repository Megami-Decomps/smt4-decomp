/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_Sound3DCalculator_CalcVolumeAndPriority` (_code @ 0x377758, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b99b8. */


void nw_snd_Sound3DCalculator_CalcVolumeAndPriority
               (int param_1,int param_2,int param_3,float *param_4,int *param_5)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  float in_s0;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v5 = *(float *)(param_2 + 0x4c);
  temp_v6 = 1.0f;
  temp_v7 = *(unsigned int *)(param_1 + 0x1c);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < temp_v5) << 0x1f) |
          ((unsigned int)(in_s0 == temp_v5) << 0x1e);
  temp_v2 = temp_v0 | ((unsigned int)((in_s0 != in_s0) || (temp_v5 != temp_v5)) << 0x1c);
  temp_v4 = *(float *)(param_3 + 0x24);
  temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  temp_v3 = temp_v6;
  if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v2 >> 0x1c) & 1)) {
    if (*(char *)(param_3 + 0x28) != '\x01') {
      if (*(char *)(param_3 + 0x28) == '\x02') {
        temp_v3 = 1.0f - ((in_s0 - temp_v5) / *(float *)(param_2 + 0x50)) * (1.0f - temp_v4);
        temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v3) << 0x1d);
        if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
          temp_v3 = 0.0f;
        }
      }
    }
    else {
      FUN_002b99b8();
      temp_v3 = temp_v4;
    }
  }
  temp_v4 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(temp_v2 >> 0x16) & 3);
  *param_4 = temp_v3;
  *param_5 = -(int)((temp_v6 - temp_v3) * temp_v4);
  return;
}
