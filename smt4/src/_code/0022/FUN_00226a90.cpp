/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226a90` (_code @ 0x226a90, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227228(unsigned int);
int rangeInit(unsigned int, int, int);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00227228. */
extern int rangeIsValid(void);
/* Supplied declaration required: rangeInit. */


void FUN_00226a90(int param_1,int param_2,int param_3)

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
    temp_v3 = *(int *)(param_1 + 0x3054) + 0x1c;
  }
  else if (param_3 == 2) {
    temp_v3 = *(int *)(param_1 + 0x3054) + 0x3c;
  }
  else if (param_3 == 3) {
    temp_v3 = *(int *)(param_1 + 0x3054) + 0x5c;
  }
  temp_v2 = 0;
  do {
    if (((*(int *)(param_1 + 0x3058) != 0) &&
        (psVar5 = (short *)(temp_v3 + temp_v2 * 0x10), psVar5[1] != 0)) && (*psVar5 == param_2)) {
      temp_v0 = rangeIsValid();
      if (temp_v0 == 0) {
        FUN_00227228(*(unsigned int *)(param_1 + 0x3058));
      }
      VectorSignedToFloat((int)psVar5[3],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)psVar5[2],(unsigned char)(in_fpscr >> 0x16) & 3);
      rangeInit(*(unsigned int *)(param_1 + 0x3058),(int)psVar5[1],0);
    }
    if (((*(int *)(param_1 + 0x305c) != 0) &&
        (temp_v0 = temp_v3 + temp_v2 * 0x10, *(short *)(temp_v0 + 10) != 0)) &&
       (*(short *)(temp_v0 + 8) == param_2)) {
      temp_v1 = rangeIsValid();
      if (temp_v1 == 0) {
        FUN_00227228(*(unsigned int *)(param_1 + 0x305c));
      }
      VectorSignedToFloat((int)*(short *)(temp_v0 + 0xe),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      rangeInit(*(unsigned int *)(param_1 + 0x305c),(int)*(short *)(temp_v0 + 10),0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}

} /* extern "C" */
