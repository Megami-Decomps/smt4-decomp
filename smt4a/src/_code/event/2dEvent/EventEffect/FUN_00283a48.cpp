/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283a48` (_code @ 0x283a48, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0038a538(unsigned int);
int SBORROW4(int, int);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int jobGetWork(void);
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0038a538. */


unsigned int FUN_00283a48(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  
  temp_v0 = jobGetWork();
  temp_v6 = 0;
  if (*(int *)(temp_v0 + 0xc) != 0) {
    if (*(int *)(temp_v0 + 0xc) != 1) {
      *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
      return 0;
    }
    temp_v1 = *(int *)(temp_v0 + 0x10);
    temp_v7 = 0.5f;
    if (temp_v1 < 3) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      temp_v5 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = temp_v4 * 0.5f;
      *(float *)(temp_v0 + 0x14) = temp_v5 * 0.5f;
      *(float *)(temp_v0 + 0x20) = temp_v4;
    }
    else {
      temp_v4 = 1.0f;
      if (temp_v1 < 5) {
        *(unsigned int *)(temp_v0 + 0x1c) = 0;
        *(unsigned int *)(temp_v0 + 0x14) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x20) = 0x3f800000;
        temp_v4 = (float)VectorSignedToFloat(temp_v1 - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x18) = temp_v4 * 0.5f;
      }
      else if (temp_v1 < 6) {
        *(unsigned int *)(temp_v0 + 0x1c) = 0;
        *(unsigned int *)(temp_v0 + 0x14) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x18) = 0x3f800000;
        *(float *)(temp_v0 + 0x20) = temp_v4;
      }
      else if (temp_v1 < 10) {
        *(unsigned int *)(temp_v0 + 0x1c) = 0;
        *(unsigned int *)(temp_v0 + 0x18) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x20) = 0x3f800000;
        temp_v4 = (float)VectorSignedToFloat(9 - temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x14) = temp_v4 * 0.25f;
      }
      else if (temp_v1 < 0xe) {
        *(unsigned int *)(temp_v0 + 0x14) = 0;
        *(unsigned int *)(temp_v0 + 0x20) = 0x3f800000;
        temp_v5 = (float)VectorSignedToFloat(0xe - temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (float)VectorSignedToFloat(temp_v1 - 9,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x18) = temp_v5 * 0.25f;
        *(float *)(temp_v0 + 0x1c) = temp_v4 * 0.25f;
      }
      else {
        *(unsigned int *)(temp_v0 + 0xc) = 2;
        *(unsigned int *)(temp_v0 + 0x14) = 0;
        *(unsigned int *)(temp_v0 + 0x18) = 0;
        *(unsigned int *)(temp_v0 + 0x1c) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x20) = 0x3f800000;
        FUN_0038a538(*(unsigned int *)(temp_v0 + 8));
      }
    }
    temp_v3 = *(int *)(temp_v0 + 0x28) != 0;
    temp_v1 = 0;
    temp_v2 = 0;
    if (temp_v3) {
      temp_v2 = *(int *)(temp_v0 + 0x10);
      temp_v1 = temp_v2 - 3;
    }
    if ((temp_v3 && temp_v2 != 3) && temp_v1 < 0 == (temp_v3 && SBORROW4(temp_v2,3))) {
      if (temp_v2 < 6) {
        temp_v4 = (float)VectorSignedToFloat(temp_v2 - 3,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x2c) = temp_v4 * temp_v7;
        *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
        return 0;
      }
      if (temp_v2 < 8) {
        temp_v4 = (float)VectorSignedToFloat(7 - temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x2c) = temp_v4 * temp_v7;
        *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
        return 0;
      }
    }
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v6;
  }
  else if ((*(unsigned int *)(temp_v0 + 0x24) < 4) &&
          (temp_v1 = *(unsigned int *)(temp_v0 + 0x24) * 0x10,
          temp_v1 = asdTMTexTableNodeIsLoaded(*(unsigned int *)(temp_v1 + 0x57f43c),*(unsigned int *)(temp_v1 + 0x57f440)),
          temp_v1 != 0)) {
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x18) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x1c) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x20) = temp_v6;
    *(unsigned int *)(temp_v0 + 0xc) = 1;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v6;
  }
  *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
  return 0;
}

} /* extern "C" */
