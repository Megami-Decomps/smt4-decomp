/* NON_MATCHING: retail copies 0x9c bytes of uninitialized stack storage to DAT_004e64c0 after incrementing the input counter; a defined C++ reconstruction needs the missing initialization semantics. */
/* romwright 0.5.0 decompilation of FUN_00126fd0 for reference (not compiled; its own view of the boundaries):

void FUN_00126fd0(int *param_1)

{
  unsigned char auStack_a0 [160];
  
  *param_1 = *param_1 + 1;
  FUN_002bcd68(&DAT_004e64c0,auStack_a0,0x9c);
                    /* WARNING: Treating indirect jump as return * /
  return;
}
*/
#include "common.h"
