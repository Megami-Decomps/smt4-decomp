/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d88fc` (_code @ 0x4d88fc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e9fe4(int, int, int);

/* Supplied declaration required: FUN_003e9fe4. */


void FUN_004d88fc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  *(unsigned int *)(param_1 + 0xb8) = 0;
  *(unsigned int *)(param_1 + 0xb4) = 0;
  *(unsigned int *)(param_1 + 0xb0) = 0;
  *(unsigned short *)(param_1 + 0xac) = 0xffff;
  temp_v0 = *(int *)(param_2 + 0x178);
  temp_v2 = -1 < temp_v0;
  if (temp_v2) {
    temp_v0 = *(int *)(param_2 + 0x17c);
  }
  if (!temp_v2 || temp_v0 < 0) {
    FUN_003e9fe4(param_2,param_2 + 0xf4,0);
    *(int *)(param_2 + 0x178) = (int)*(char *)(param_2 + 0x114);
    *(int *)(param_2 + 0x17c) = (int)*(char *)(param_2 + 0x115);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x17c);
  *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_2 + 0x178);
  *(unsigned int *)(param_1 + 0xa8) = temp_v1;
  return;
}

} /* extern "C" */
