/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9604` (_code @ 0x1a9604, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int asdModelIdListGet(unsigned int);


void FUN_001a9604(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5 */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int in_s5;
  
  temp_v0 = asdModelIdListGet(0);
  temp_v0 = *(int *)(temp_v0 + 8);
  *(unsigned int *)(temp_v0 + 0xbc) = in_s2;
  *(unsigned int *)(temp_v0 + 0xc0) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0xb4) = in_s0;
  *(unsigned int *)(temp_v0 + 0xb8) = in_s1;
  temp_v1 = 0;
  temp_v2 = *(int *)(temp_v0 + 200);
  if (temp_v2 != 0) {
    puVar2 = (unsigned int *)(temp_v0 + 200 + temp_v2);
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
  if (param_1 != -1) {
    if (param_1 == 0) {
      *puVar2 = 1;
      puVar2[1] = in_s3;
      puVar2[2] = in_s4;
      puVar2[3] = in_s5;
      return;
    }
    if (param_1 == 1) {
      temp_v1 = 2;
    }
    else {
      if (param_1 != 2) {
        puVar2[1] = in_s3;
        puVar2[2] = in_s4;
        puVar2[3] = in_s5;
        return;
      }
      temp_v1 = 3;
    }
  }
  *puVar2 = temp_v1;
  puVar2[1] = in_s3;
  puVar2[2] = in_s4;
  puVar2[3] = in_s5;
  return;
}

} /* extern "C" */
