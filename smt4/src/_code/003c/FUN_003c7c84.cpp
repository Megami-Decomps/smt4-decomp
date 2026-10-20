/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c7c84` (_code @ 0x3c7c84, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027dc24(int, int, int);

/* Supplied declaration required: FUN_0027dc24. */


void FUN_003c7c84(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  *(unsigned int *)(param_1 + 0x98) = 0;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned short *)(param_1 + 0x8c) = 0xffff;
  temp_v0 = *(int *)(param_2 + 0x13c);
  temp_v2 = -1 < temp_v0;
  if (temp_v2) {
    temp_v0 = *(int *)(param_2 + 0x140);
  }
  if (!temp_v2 || temp_v0 < 0) {
    FUN_0027dc24(param_2,param_2 + 200,0);
    *(int *)(param_2 + 0x13c) = (int)*(char *)(param_2 + 0xe7);
    *(int *)(param_2 + 0x140) = (int)*(char *)(param_2 + 0xe8);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x140);
  *(unsigned int *)(param_1 + 0x84) = *(unsigned int *)(param_2 + 0x13c);
  *(unsigned int *)(param_1 + 0x88) = temp_v1;
  return;
}

} /* extern "C" */
