/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a374` (_code @ 0x33a374, 0x314 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001f3f34. */
/* Supplied declaration required: FUN_00330108. */


unsigned int FUN_0033a374(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  float *pfVar1;
  float *pfVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v0 = DAT_005806a4;
  if (*(int *)(DAT_005806a4 + 0x270) <= *(int *)(DAT_005806a4 + 0x274)) {
    puVar6 = (unsigned int *)(DAT_005806a4 + 0x240);
    temp_v5 = *(unsigned int *)(DAT_005806a4 + 0x244);
    temp_v7 = *(unsigned int *)(DAT_005806a4 + 0x248);
    temp_v8 = *(unsigned int *)(DAT_005806a4 + 0x24c);
    temp_v9 = *(unsigned int *)(DAT_005806a4 + 0x250);
    *(unsigned int *)(DAT_005806a4 + 0x254) = *(unsigned int *)(DAT_005806a4 + 0x23c);
    *(unsigned int *)(temp_v0 + 600) = *puVar6;
    *(unsigned int *)(temp_v0 + 0x25c) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x260) = temp_v7;
    *(unsigned int *)(temp_v0 + 0x264) = temp_v8;
    *(unsigned int *)(temp_v0 + 0x268) = temp_v9;
    return 1;
  }
  temp_v2 = *(int *)(DAT_005806a4 + 0x26c);
  if (temp_v2 != 0) {
    if (temp_v2 == 2) {
      temp_v5 = *(unsigned int *)(DAT_005806a4 + 0x224);
      VectorSignedToFloat(*(int *)(DAT_005806a4 + 0x274),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(int *)(DAT_005806a4 + 0x270),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3f34();
      temp_v7 = *(unsigned int *)(temp_v0 + 0x228);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x270),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x274),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3f34();
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x274),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x270),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = *(unsigned int *)(temp_v0 + 0x22c);
      FUN_001f3f34();
      *(unsigned int *)(temp_v0 + 0x254) = temp_v5;
      *(unsigned int *)(temp_v0 + 600) = temp_v7;
      *(unsigned int *)(temp_v0 + 0x25c) = temp_v8;
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x274),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x270),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = *(unsigned int *)(temp_v0 + 0x230);
      FUN_001f3f34();
      temp_v7 = *(unsigned int *)(temp_v0 + 0x234);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x270),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x274),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f3f34();
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x274),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x270),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = *(unsigned int *)(temp_v0 + 0x238);
      FUN_001f3f34();
      *(unsigned int *)(temp_v0 + 0x260) = temp_v5;
      *(unsigned int *)(temp_v0 + 0x264) = temp_v7;
      *(unsigned int *)(temp_v0 + 0x268) = temp_v8;
      *(int *)(temp_v0 + 0x274) = *(int *)(temp_v0 + 0x274) + 1;
      return 0;
    }
    if (temp_v2 == 3) {
      temp_v1 = DAT_005806a4 + 0x254;
      temp_v2 = DAT_005806a4 + 0x260;
      *(float *)(DAT_005806a4 + 0x254) =
           *(float *)(DAT_005806a4 + 0x254) + *(float *)(DAT_005806a4 + 0x278);
      *(float *)(temp_v0 + 600) = *(float *)(temp_v0 + 600) + *(float *)(temp_v0 + 0x27c);
      *(float *)(temp_v0 + 0x25c) = *(float *)(temp_v0 + 0x25c) + *(float *)(temp_v0 + 0x280);
      *(float *)(temp_v0 + 0x260) = *(float *)(temp_v0 + 0x260) + *(float *)(temp_v0 + 0x284);
      *(float *)(temp_v0 + 0x264) = *(float *)(temp_v0 + 0x264) + *(float *)(temp_v0 + 0x288);
      *(float *)(temp_v0 + 0x268) = *(float *)(temp_v0 + 0x268) + *(float *)(temp_v0 + 0x28c);
      FUN_00330108(temp_v2,temp_v1,&temp_v10);
      *(unsigned int *)(temp_v0 + 0x260) = temp_v10;
      *(unsigned int *)(temp_v0 + 0x264) = uStack_1c;
      *(unsigned int *)(temp_v0 + 0x268) = uStack_18;
      *(int *)(temp_v0 + 0x274) = *(int *)(temp_v0 + 0x274) + 1;
      return 0;
    }
    pfVar1 = (float *)(DAT_005806a4 + 0x240);
    pfVar2 = (float *)(DAT_005806a4 + 600);
    temp_v3 = *(float *)(DAT_005806a4 + 0x244);
    temp_v6 = *(float *)(DAT_005806a4 + 0x25c);
    temp_v4 = 1.0f / *(float *)(DAT_005806a4 + 0x290);
    *(float *)(DAT_005806a4 + 0x254) =
         *(float *)(DAT_005806a4 + 0x254) +
         (*(float *)(DAT_005806a4 + 0x23c) - *(float *)(DAT_005806a4 + 0x254)) * temp_v4;
    *(float *)(temp_v0 + 600) = *(float *)(temp_v0 + 600) + (*pfVar1 - *pfVar2) * temp_v4;
    *(float *)(temp_v0 + 0x25c) = *(float *)(temp_v0 + 0x25c) + (temp_v3 - temp_v6) * temp_v4;
    temp_v3 = 1.0f / *(float *)(temp_v0 + 0x290);
    *(float *)(temp_v0 + 0x260) =
         *(float *)(temp_v0 + 0x260) + (*(float *)(temp_v0 + 0x248) - *(float *)(temp_v0 + 0x260)) * temp_v3
    ;
    *(float *)(temp_v0 + 0x264) =
         *(float *)(temp_v0 + 0x264) + (*(float *)(temp_v0 + 0x24c) - *(float *)(temp_v0 + 0x264)) * temp_v3
    ;
    temp_v3 = *(float *)(temp_v0 + 0x268) +
            (*(float *)(temp_v0 + 0x250) - *(float *)(temp_v0 + 0x268)) * temp_v3;
  }
  else {
    *(float *)(DAT_005806a4 + 0x254) =
         *(float *)(DAT_005806a4 + 0x254) + *(float *)(DAT_005806a4 + 0x278);
    *(float *)(temp_v0 + 600) = *(float *)(temp_v0 + 600) + *(float *)(temp_v0 + 0x27c);
    *(float *)(temp_v0 + 0x25c) = *(float *)(temp_v0 + 0x25c) + *(float *)(temp_v0 + 0x280);
    *(float *)(temp_v0 + 0x260) = *(float *)(temp_v0 + 0x260) + *(float *)(temp_v0 + 0x284);
    *(float *)(temp_v0 + 0x264) = *(float *)(temp_v0 + 0x264) + *(float *)(temp_v0 + 0x288);
    temp_v3 = *(float *)(temp_v0 + 0x268) + *(float *)(temp_v0 + 0x28c);
  }
  *(float *)(temp_v0 + 0x268) = temp_v3;
  *(int *)(temp_v0 + 0x274) = *(int *)(temp_v0 + 0x274) + 1;
  return 0;
}
