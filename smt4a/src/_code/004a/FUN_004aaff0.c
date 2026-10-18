/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aaff0` (_code @ 0x4aaff0, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001834a4(unsigned int, unsigned int);


int FUN_004aaff0(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v3 = *(int *)(param_1 + param_2 * 0x400 + 0x79ac);
  temp_v0 = FUN_001834a4(0xd,0x418);
  temp_v1 = FUN_001834a4(0xd,0x41e);
  temp_v2 = 1;
  temp_v4 = (float)VectorSignedToFloat((int)**(short **)(temp_v1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat((int)**(short **)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = temp_v3 / 10;
  if (0 < temp_v3) {
    temp_v2 = 2;
    temp_v3 = temp_v3 / 10;
    if (0 < temp_v3) {
      temp_v2 = 3;
      temp_v3 = temp_v3 / 10;
      if (0 < temp_v3) {
        temp_v2 = 4;
        temp_v3 = temp_v3 / 10;
        if ((0 < temp_v3) && (temp_v2 = 5, 0 < temp_v3 / 10)) {
          temp_v2 = 6;
        }
      }
    }
  }
  temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(5 - temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  return (int)(-(temp_v6 * temp_v4) + ((temp_v5 + temp_v4 * 5.0f) - temp_v4 * temp_v7) * 0.5f);
}
