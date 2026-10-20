/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cee68` (_code @ 0x4cee68, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00557ed8; /* 0x557ed8 */

extern int FUN_0015a21c(unsigned int *);


void FUN_004cee68(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00557ed8;
  temp_v0 = FUN_0015a21c(param_1 + 0x136);
  *(unsigned char *)(temp_v0 - 0x4d0) = 1;
  *(unsigned int *)(temp_v0 - 0x4cc) = 0;
  *(unsigned int *)(temp_v0 - 0x4c8) = 0;
  *(unsigned int *)(temp_v0 - 0x4c4) = 0;
  *(unsigned int *)(temp_v0 - 0x4c0) = 0;
  *(unsigned int *)(temp_v0 - 0x4bc) = 0;
  *(unsigned int *)(temp_v0 - 0x4b8) = 0;
  *(unsigned int *)(temp_v0 - 0x4b4) = 0;
  *(unsigned int *)(temp_v0 + 0xb4) = 0;
  *(unsigned int *)(temp_v0 - 0x4b0) = 0;
  *(unsigned int *)(temp_v0 - 0x4ac) = 0;
  *(unsigned int *)(temp_v0 - 0x4a8) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  *(unsigned char *)(temp_v0 + 0x8c) = 0;
  *(unsigned int *)(temp_v0 + 0x94) = 0;
  *(unsigned int *)(temp_v0 + 0x90) = 0;
  *(unsigned char *)(temp_v0 + 0x98) = 0;
  *(unsigned int *)(temp_v0 + 0xa0) = 0;
  *(unsigned int *)(temp_v0 + 0x9c) = 0;
  *(unsigned char *)(temp_v0 + 0xa4) = 0;
  *(unsigned int *)(temp_v0 + 0xac) = 0;
  *(unsigned int *)(temp_v0 + 0xa8) = 0;
  *(unsigned char *)(temp_v0 + 0xb0) = 0;
  return;
}

} /* extern "C" */
