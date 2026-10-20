/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002235f4` (_code @ 0x2235f4, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0058069c; /* 0x58069c */


void FUN_002235f4(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0058069c;
  temp_v1 = *(int *)(DAT_0058069c + 0xc);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(temp_v1 + 4);
  }
  if (temp_v1 != 0 && temp_v2 != 0) {
    if (*(char *)(DAT_0058069c + 10) != '\0') {
      temp_v4 = 0x3f800000;
      temp_v3 = *(unsigned int *)(temp_v2 + 4) & 0xfffffffc;
    }
    else {
      temp_v4 = 0;
      temp_v3 = *(unsigned int *)(temp_v2 + 4) | 3;
    }
    *(unsigned int *)(temp_v2 + 4) = temp_v3;
    *(unsigned int *)(temp_v2 + 0x1fc) = temp_v4;
  }
  temp_v1 = *(int *)(temp_v0 + 0x10);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(temp_v1 + 4);
  }
  if (temp_v1 != 0 && temp_v2 != 0) {
    if (*(char *)(temp_v0 + 10) != '\0') {
      temp_v3 = *(unsigned int *)(temp_v2 + 4) & 0xfffffffc;
    }
    else {
      temp_v3 = *(unsigned int *)(temp_v2 + 4) | 3;
    }
    *(unsigned int *)(temp_v2 + 4) = temp_v3;
  }
  return;
}

} /* extern "C" */
