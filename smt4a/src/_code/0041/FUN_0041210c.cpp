/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041210c` (_code @ 0x41210c, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00410f84(int *);
int FUN_00412248(int *);
int FUN_00416840(void);
int asdAnimGetTrackLastFrame(int, unsigned int);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00410f84. */
/* Supplied declaration required: FUN_00412248. */
/* Supplied declaration required: FUN_00416840. */
/* Supplied declaration required: asdAnimGetTrackLastFrame. */


unsigned int FUN_0041210c(int *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v5;
  float temp_v6;
  
  temp_v2 = *param_1;
  if (temp_v2 != param_1[2]) {
    *param_1 = param_1[2];
    param_1[1] = temp_v2;
    FUN_00410f84(param_1);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_00412248(param_1);
  temp_v2 = btlGetMainState();
  if (*param_1 != 1 && *param_1 != 2) {
    temp_v4 = 0;
    do {
      temp_v3 = temp_v2 + temp_v4 * 0x10;
      if (*(int *)(temp_v3 + 0x4d78) != 0) {
        *(int *)(temp_v3 + 0x4d80) = *(int *)(temp_v3 + 0x4d80) + 2;
        asdAnimGetTrackLastFrame(*(int *)(temp_v3 + 0x4d78),*(unsigned int *)(temp_v3 + 0x4d7c));
        temp_v5 = *(int *)(temp_v3 + 0x4d80);
        temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v6) << 0x1e) |
                ((unsigned int)(temp_v6 <= in_s0) << 0x1d);
        temp_v1 = (unsigned char)(temp_v0 >> 0x18);
        if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
          temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v0 >> 0x16) & 3);
          temp_v5 = (int)(temp_v6 - in_s0);
          *(int *)(temp_v3 + 0x4d80) = temp_v5;
        }
        temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v0 >> 0x16) & 3);
        temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < in_s0) << 0x1f);
        in_fpscr = temp_v0 | ((unsigned int)((temp_v6 != temp_v6) || (in_s0 != in_s0)) << 0x1c);
        if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          *(unsigned int *)(temp_v3 + 0x4d80) = 0;
        }
        if (((0 < *(int *)(temp_v3 + 0x4d84)) &&
            (temp_v5 = *(int *)(temp_v3 + 0x4d84) - 1, *(int *)(temp_v3 + 0x4d84) = temp_v5, temp_v5 < 1)) &&
           (0 < *(int *)(temp_v3 + 0x4d7c))) {
          *(unsigned int *)(temp_v3 + 0x4d7c) = 0;
          *(unsigned int *)(temp_v3 + 0x4d80) = 0;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xc);
  }
  temp_v2 = param_1[3];
  param_1[3] = temp_v2 + 1U;
  if (temp_v2 + 1U >= 0x10000) {
    param_1[3] = 0xffff;
  }
  if (param_1[0xc] != 0) {
    FUN_00416840();
  }
  return 0;
}

} /* extern "C" */
