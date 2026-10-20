/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244220` (_code @ 0x244220, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_mapDepartWork; /* 0x58069c */


void FUN_00244220(void)

{
  int temp_v0;
  
  temp_v0 = g_mapDepartWork;
  *(unsigned short *)(g_mapDepartWork + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  return;
}

} /* extern "C" */
