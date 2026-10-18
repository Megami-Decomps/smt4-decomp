/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac0c4` (_code @ 0x2ac0c4, 0x1e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int *FUN_002a462c(void);
extern int *FUN_002a464e(unsigned int);


int * FUN_002ac0c4(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v2;
  float temp_v3;
  
  temp_v0 = 0;
  if ((int)in_s0 * 2 + 0x99000000U >= 0x1e500001) {
    if ((~(unsigned int)in_s0 & 0x7fffffff) >> 0x17 == 0) {
      return (int *)0x0;
    }
    if ((unsigned int)((int)in_s0 * 2) < 0x67000000) {
      return (int *)0x67000000;
    }
    if (0x85a00000 < (unsigned int)((int)in_s0 << 1)) {
      piVar2 = (int *)FUN_002a464e(2);
      if (((unsigned int)in_s0 & 0x80000000) == 0) {
        return piVar2;
      }
      piVar2 = (int *)FUN_002a462c();
      return piVar2;
    }
    temp_v0 = 1;
  }
  if (((unsigned int)in_s0 & 0x80000000) == 0) {
    temp_v3 = 0.5f;
  }
  else {
    temp_v3 = -0.5f;
  }
  temp_v2 = (int)(temp_v3 + in_s0 * 5.77078f);
  VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  piVar2 = (int *)(temp_v2 >> 2);
  if (temp_v0) {
    temp_v1 = (unsigned int)((int)piVar2 - (int)piVar2 / 2) >> 0xe;
    piVar2 = (int *)(temp_v1 + *(int *)((int)piVar2 +
                                     ((((int)piVar2 / 2) * 0x800000 + 0x3f800000) * 4 -
                                     (temp_v2 >> 0x1f))) + *(int *)(temp_v1 + 4));
    if ((piVar2 == (int *)0x0) || (*piVar2 != 0x314c4254)) {
      piVar2 = (int *)0x0;
    }
    return piVar2;
  }
  temp_v3 = (float)VectorSignedToFloat(piVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorFloatToUnsigned(temp_v3 * 8388608.0f + 1.0653532e+09f,3);
  return piVar2;
}
