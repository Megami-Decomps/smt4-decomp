/* NON_MATCHING: retail increments the counter, then copies 0x9c bytes from a newly allocated, uninitialized stack buffer to DAT_006428e4; the buffer's source/provenance is unrecovered, so no fabricated snapshot is supplied. */
/* romwright 0.5.0 decompilation of FUN_0016cccc for reference (not compiled; its own view of the boundaries):

void FUN_0016cccc(int *param_1)

{
  unsigned char auStack_a0 [160];
  
  *param_1 = *param_1 + 1;
  FUN_002e71b4(&DAT_006428e4,auStack_a0,0x9c);
                    /* WARNING: Treating indirect jump as return * /
  return;
}
*/
#include "common.h"
