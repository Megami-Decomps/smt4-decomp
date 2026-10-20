/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211e88` (_code @ 0x211e88, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: scrGetArg. */
extern int jobGetWork(unsigned int);


unsigned int FUN_00211e88(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = jobGetWork(temp_v0);
  if (temp_v2 != 0) {
    if (temp_v1 == 0) {
      *(unsigned int *)(temp_v2 + 0xc) = 0x3f800000;
      *(unsigned int *)(temp_v2 + 0x10) = 0;
    }
    else {
      *(unsigned int *)(temp_v2 + 0xc) = 0;
      temp_v3 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v2 + 0x10) = 1.0f / temp_v3;
    }
  }
  return 1;
}

} /* extern "C" */
