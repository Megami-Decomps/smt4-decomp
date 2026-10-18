/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226c24` (_code @ 0x226c24, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002273bc. */
extern int FUN_002273f0(void);
/* Supplied declaration required: FUN_002546ec. */


void FUN_00226c24(int param_1,int param_2,int param_3)

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
      temp_v0 = FUN_002273f0();
      if (temp_v0 == 0) {
        FUN_002273bc(*(unsigned int *)(param_1 + 0x3058));
      }
      VectorSignedToFloat((int)psVar5[3],(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)psVar5[2],(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002546ec(*(unsigned int *)(param_1 + 0x3058),(int)psVar5[1],0);
    }
    if (((*(int *)(param_1 + 0x305c) != 0) &&
        (temp_v0 = temp_v3 + temp_v2 * 0x10, *(short *)(temp_v0 + 10) != 0)) &&
       (*(short *)(temp_v0 + 8) == param_2)) {
      temp_v1 = FUN_002273f0();
      if (temp_v1 == 0) {
        FUN_002273bc(*(unsigned int *)(param_1 + 0x305c));
      }
      VectorSignedToFloat((int)*(short *)(temp_v0 + 0xe),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002546ec(*(unsigned int *)(param_1 + 0x305c),(int)*(short *)(temp_v0 + 10),0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}
