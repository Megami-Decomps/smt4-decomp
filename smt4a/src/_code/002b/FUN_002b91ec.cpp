/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b91ec` (_code @ 0x2b91ec, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_lmapScene; /* 0x581288 */

extern int gameFlagsGetBlock(void);
extern int gameFlagIsSet(unsigned int);
extern int FUN_002e5db4(void);


void FUN_002b91ec(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  temp_v1 = gameFlagIsSet(0x4c9);
  if ((temp_v1 == 0) || (temp_v1 = FUN_002e5db4(), temp_v1 != 0)) {
    *(unsigned int *)(g_lmapScene + 0x1d0) = 0xf;
  }
  else {
    *(unsigned int *)(g_lmapScene + 0x1d0) = 0xb;
  }
  temp_v1 = g_lmapScene;
  *(unsigned int *)(g_lmapScene + 0x228) = 6;
  *(unsigned char *)(temp_v1 + 0x22c) = 1;
  *(unsigned int *)(temp_v1 + 0x240) = 0x40a00000;
  *(unsigned int *)(temp_v1 + 0x1d4) = 0;
  *(unsigned int *)(temp_v0 + 0x10a0) = 0;
  *(unsigned int *)(temp_v0 + 0x109c) = 0;
  *(unsigned int *)(temp_v0 + 0x10a4) = 0;
  temp_v0 = gameFlagIsSet(0x4c9);
  if ((temp_v0 == 0) || (temp_v0 = FUN_002e5db4(), temp_v0 != 0)) {
    *(unsigned int *)(g_lmapScene + 0x238) = 6;
  }
  *(unsigned char *)(g_lmapScene + 0x23c) = 1;
  return;
}

} /* extern "C" */
