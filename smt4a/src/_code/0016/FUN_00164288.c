/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00164288` (_code @ 0x164288, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0061978c; /* 0x61978c */

extern int FUN_001681a4(unsigned int);


void FUN_00164288(void)

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
      puVar4 = &DAT_0061978c + temp_v2 * 0x78;
    }
    temp_v0 = FUN_001681a4(*(unsigned int *)(puVar4 + 0x48));
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
