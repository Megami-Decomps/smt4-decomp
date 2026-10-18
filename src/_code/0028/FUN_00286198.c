/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00286198` (_code @ 0x286198, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b2144. */
/* Supplied declaration required: FUN_002b6eb8. */


void FUN_00286198(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [72];
  
  temp_v1 = param_2;
  if (param_3 != 0) {
    if ((int)param_3 >= 0x168) {
      temp_v0 = (int)(((long long)(int)param_3 * -0x49f49f49 + ((unsigned long long)param_3 << 0x20)) >> 0x20);
      temp_v1 = temp_v0 >> 8;
      param_3 = param_3 + (temp_v1 - (temp_v0 >> 0x1f)) * -0x168;
    }
    if ((int)param_3 < 0) {
      if ((int)param_3 < -0x167) {
        temp_v1 = (unsigned int)(((long long)(int)param_3 * -0x49f49f49 + ((unsigned long long)param_3 << 0x20)) >> 0x20
                      );
        param_3 = param_3 + (((int)temp_v1 >> 8) - ((int)temp_v1 >> 0x1f)) * -0x168;
      }
      param_3 = param_3 + 0x168;
    }
    VectorSignedToFloat(0x168 - param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b2144(temp_v4,temp_v1,param_3);
    FUN_002b6eb8(param_1,param_1,temp_v4);
    temp_v1 = temp_v2;
  }
  if (param_2 != 0) {
    if ((int)param_2 >= 0x168) {
      temp_v0 = (int)(((long long)(int)param_2 * -0x49f49f49 + ((unsigned long long)param_2 << 0x20)) >> 0x20);
      temp_v1 = temp_v0 >> 8;
      param_2 = param_2 + (temp_v1 - (temp_v0 >> 0x1f)) * -0x168;
    }
    if ((int)param_2 < 0) {
      if ((int)param_2 < -0x167) {
        temp_v0 = (int)(((long long)(int)param_2 * -0x49f49f49 + ((unsigned long long)param_2 << 0x20)) >> 0x20)
        ;
        temp_v1 = temp_v0 >> 8;
        param_2 = param_2 + (temp_v1 - (temp_v0 >> 0x1f)) * -0x168;
      }
      param_2 = param_2 + 0x168;
    }
    VectorSignedToFloat(0x168 - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b2144(temp_v4,temp_v1);
    FUN_002b6eb8(param_1,param_1,temp_v4);
    temp_v1 = temp_v3;
  }
  if (param_4 != 0) {
    if ((int)param_4 >= 0x168) {
      temp_v0 = (int)(((long long)(int)param_4 * -0x49f49f49 + ((unsigned long long)param_4 << 0x20)) >> 0x20);
      temp_v1 = temp_v0 >> 8;
      param_4 = param_4 + (temp_v1 - (temp_v0 >> 0x1f)) * -0x168;
    }
    if ((int)param_4 < 0) {
      if ((int)param_4 < -0x167) {
        temp_v0 = (int)(((long long)(int)param_4 * -0x49f49f49 + ((unsigned long long)param_4 << 0x20)) >> 0x20)
        ;
        temp_v1 = temp_v0 >> 8;
        param_4 = param_4 + (temp_v1 - (temp_v0 >> 0x1f)) * -0x168;
      }
      param_4 = param_4 + 0x168;
    }
    VectorSignedToFloat(0x168 - param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b2144(temp_v4,temp_v1);
    FUN_002b6eb8(param_1,param_1,temp_v4);
  }
  return;
}
