/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480c28` (_code @ 0x480c28, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001ba3d4(unsigned int);


int FUN_00480c28(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v1 = 0;
  temp_v6 = 0;
  do {
    temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v1 * 4 + 0x57f6f8));
    temp_v2 = temp_v2 + temp_v0;
    temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v1 * 4 + 0x57f724));
    temp_v3 = temp_v3 + temp_v0;
    temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v1 * 4 + 0x57f750));
    temp_v4 = temp_v4 + temp_v0;
    temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v1 * 4 + 0x57f77c));
    temp_v5 = temp_v5 + temp_v0;
    temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v1 * 4 + 0x57f7a8));
    temp_v1 = temp_v1 + 1;
    temp_v6 = temp_v6 + temp_v0;
  } while (temp_v1 < 0xb);
  temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  return (int)(temp_v7 * 70.4f + temp_v11 * 300.8f + temp_v10 * 800.0f + temp_v9 * 2120.0f + temp_v8 * 5600.0f);
}
