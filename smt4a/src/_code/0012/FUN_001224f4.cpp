/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001224f4` (_code @ 0x1224f4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *byteArrayEnsureAt(unsigned int, unsigned int);


void FUN_001224f4(int param_1,int param_2)

{
  unsigned char temp_v0;
  unsigned char *pbVar2;
  unsigned char *puVar3;
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 0x10) != 7) {
    if (param_2 != 0) {
      pbVar2 = (unsigned char *)byteArrayEnsureAt(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      temp_v2 = *(unsigned int *)(param_1 + 0x10);
      temp_v0 = *pbVar2;
      pbVar2 = (unsigned char *)byteArrayEnsureAt(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      *pbVar2 = temp_v0 | (unsigned char)(1 << (temp_v2 & 0xff));
    }
  }
  else {
    puVar3 = (unsigned char *)byteArrayEnsureAt(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
    ;
    if (param_2 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 0x80;
    }
    *puVar3 = temp_v1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(unsigned int *)(param_1 + 0x10) = 8;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - 1;
  return;
}

} /* extern "C" */
