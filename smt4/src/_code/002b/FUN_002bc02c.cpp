/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc02c` (_code @ 0x2bc02c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004c5634; /* 0x4c5634 */

extern int FUN_002c1850(unsigned int);


void FUN_002bc02c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  
  temp_v2 = 0;
  do {
    if (temp_v2 >= 4) {
      puVar4 = (unsigned char *)0x0;
    }
    else {
      puVar4 = &DAT_004c5634 + temp_v2 * 0x78;
    }
    temp_v0 = FUN_002c1850(*(unsigned int *)(puVar4 + 0x48));
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(puVar4 + 0x50);
    }
    if (temp_v0 != 0 && temp_v1 != 4) {
      *(unsigned int *)(puVar4 + 0x68) = *(unsigned int *)(puVar4 + 0x68) | 4;
      *(unsigned int *)(puVar4 + 0x70) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 4);
  return;
}

} /* extern "C" */
