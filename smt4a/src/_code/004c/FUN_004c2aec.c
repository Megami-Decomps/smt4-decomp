/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c2aec` (_code @ 0x4c2aec, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int *FUN_0014aa78(void);
extern int FUN_0017760c(void);
/* Supplied declaration required: FUN_001ab854. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c28b4. */
/* Supplied declaration required: FUN_004c55e4. */


int FUN_004c2aec(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v4 = 1.0f;
  temp_v3 = in_s0;
  puVar1 = (unsigned int *)FUN_0014aa78();
  FUN_003f0e20(puVar1,param_2);
  puVar2 = (unsigned int *)FUN_0014aa78();
  FUN_003f0e20(puVar2,param_3);
  if (param_4 >= 1) {
    if (puVar2 != (unsigned int *)0x0) {
      if (((puVar1 != (unsigned int *)0x0) &&
          ((puVar1[1] & DAT_00571414) == 0 && (*puVar1 & DAT_00571410) == 0)) &&
         ((DAT_00571410 & *puVar2) != 0 || (DAT_00571414 & puVar2[1]) != 0)) {
        param_4 = puVar2[0x97] * param_4;
        temp_v0 = (int)((unsigned long long)((long long)param_4 * 0x51eb851f) >> 0x20);
        temp_v1 = param_4 / 200 + (param_4 >> 0x1f);
        temp_v1 = temp_v1 - (temp_v0 >> 0x1f);
      }
      else {
        temp_v1 = (int)(puVar2[0x97] * param_4) / 100;
      }
    }
    else {
      FUN_001ab854(param_3 - 0x6d);
      temp_v1 = FUN_0017760c();
      temp_v1 = temp_v1 * param_4;
      temp_v0 = (int)((unsigned long long)((long long)temp_v1 * 0x51eb851f) >> 0x20);
      temp_v1 = temp_v1 / 100 + (temp_v1 >> 0x1f);
      temp_v1 = temp_v1 - (temp_v0 >> 0x1f);
    }
    if (temp_v1 < 1) {
      temp_v1 = 1;
    }
    in_s0 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = temp_v3 + in_s0;
  }
  temp_v1 = param_2;
  FUN_004c55e4(param_2,param_1);
  FUN_004c28b4(param_2,0x19);
  temp_v3 = temp_v3 * temp_v4 * in_s0 * temp_v4 + 0.0f;
  if (0 < temp_v1) {
    temp_v2 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (temp_v4 + temp_v2 * 0.01f) * temp_v3;
  }
  if (((puVar1 != (unsigned int *)0x0 && puVar2 != (unsigned int *)0x0) &&
      ((*puVar1 & DAT_00571410) == 0 && (puVar1[1] & DAT_00571414) == 0)) &&
     (((puVar2[1] & DAT_00571414) != 0 || (*puVar2 & DAT_00571410) != 0 && ((int)temp_v3 >= 10000)))) {
    temp_v3 = 9999.0f;
  }
  return (int)temp_v3;
}
