/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e21dc` (_code @ 0x2e21dc, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002c0ac8(void);
extern int FUN_002c1f28(void);


unsigned int FUN_002e21dc(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  
  temp_v0 = FUN_002c0ac8();
  if (*(int *)(temp_v0 + 0x10) == *(int *)(temp_v0 + 0x14)) {
    temp_v3 = 0.0f;
    if (0.0f <= *(float *)(temp_v0 + 0xc)) {
      temp_v3 = 1.0f;
    }
  }
  else {
    temp_v1 = FUN_002c1f28();
    temp_v2 = *(int *)(temp_v0 + 0x10);
    if (temp_v1 != 0) {
      *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x14);
      temp_v3 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x14) - temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3
                                        );
      *(float *)(temp_v0 + 8) = *(float *)(temp_v0 + 8) + *(float *)(temp_v0 + 0xc) * temp_v3;
      return 0;
    }
    *(int *)(temp_v0 + 0x10) = temp_v2 + 1;
    temp_v3 = *(float *)(temp_v0 + 8) + *(float *)(temp_v0 + 0xc);
  }
  *(float *)(temp_v0 + 8) = temp_v3;
  return 0;
}
