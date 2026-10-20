/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f6254` (_code @ 0x4f6254, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f5180(unsigned int, int, int);
int FUN_003d9174(unsigned int);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001f5180. */
extern int FUN_0022a00c(void);
/* Supplied declaration required: FUN_003d9174. */


void FUN_004f6254(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  unsigned int in_fpscr;
  
  temp_v3 = 0;
  if (param_3 == 1) {
    temp_v3 = *(int *)(param_1 + 0x33c8) + 0x1c;
  }
  else if (param_3 == 2) {
    temp_v3 = *(int *)(param_1 + 0x33c8) + 0x3c;
  }
  else if (param_3 == 3) {
    temp_v3 = *(int *)(param_1 + 0x33c8) + 0x5c;
  }
  temp_v2 = 0;
  do {
    if (((*(int *)(param_1 + 0x33cc) != 0) &&
        (psVar5 = (short *)(temp_v3 + temp_v2 * 0x10), psVar5[1] != 0)) && (*psVar5 == param_2)) {
      temp_v0 = FUN_0022a00c();
      if (temp_v0 == 0) {
        FUN_003d9174(*(unsigned int *)(param_1 + 0x33cc));
      }
      VectorSignedToFloat((int)psVar5[3],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)psVar5[2],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f5180(*(unsigned int *)(param_1 + 0x33cc),(int)psVar5[1],0);
    }
    if (((*(int *)(param_1 + 0x33d0) != 0) &&
        (temp_v0 = temp_v3 + temp_v2 * 0x10, *(short *)(temp_v0 + 10) != 0)) &&
       (*(short *)(temp_v0 + 8) == param_2)) {
      temp_v1 = FUN_0022a00c();
      if (temp_v1 == 0) {
        FUN_003d9174(*(unsigned int *)(param_1 + 0x33d0));
      }
      VectorSignedToFloat((int)*(short *)(temp_v0 + 0xe),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001f5180(*(unsigned int *)(param_1 + 0x33d0),(int)*(short *)(temp_v0 + 10),0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}

} /* extern "C" */
