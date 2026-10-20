/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe388` (_code @ 0x3fe388, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_001a7a20(int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


void FUN_003fe388(int param_1,unsigned int param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 0x210);
  temp_v1 = FUN_002e3390(param_2);
  temp_v2 = FUN_001a7a20(temp_v4 + 0x88,param_2,temp_v1);
  if (temp_v2 != 0xffff) {
    temp_v3 = *(unsigned char *)(*(int *)(param_1 + 0x114) + (temp_v2 >> 3));
    temp_v0 = (unsigned char)(1 << (temp_v2 & 7));
    if (param_3 == 0) {
      temp_v3 = temp_v3 & ~temp_v0;
    }
    else {
      temp_v3 = temp_v0 | temp_v3;
    }
    *(unsigned char *)(*(int *)(param_1 + 0x114) + (temp_v2 >> 3)) = temp_v3;
  }
  return;
}

} /* extern "C" */
