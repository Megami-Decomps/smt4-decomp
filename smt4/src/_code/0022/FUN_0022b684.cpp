/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b684` (_code @ 0x22b684, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0049fc14; /* 0x49fc14 */
extern int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern int DAT_0049fc38; /* 0x49fc38 */
extern unsigned int DAT_0049fc3c; /* 0x49fc3c */


void FUN_0022b684(int param_1)

{
  int temp_v0;
  
  DAT_0049fc14 = 1;
  DAT_0049fc18 = *(short *)(param_1 + 0x3c) + 200;
  DAT_0049fc38 = DAT_0049fc18;
  temp_v0 = *(int *)(param_1 + 0xd60);
  if (temp_v0 != 0) {
    DAT_0049fc1c = (unsigned int)*(unsigned char *)(temp_v0 + 0x20);
    DAT_0049fc3c = (unsigned int)*(unsigned char *)(temp_v0 + 0x20);
  }
  return;
}

} /* extern "C" */
