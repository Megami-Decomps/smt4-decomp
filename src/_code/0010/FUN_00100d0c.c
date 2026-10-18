/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100d0c` (_code @ 0x100d0c, 0x10 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"


void FUN_00100d0c(unsigned short param_1,unsigned int *param_2)

{
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)*param_2;
  if (puVar1 < (unsigned short *)param_2[1]) {
    *param_2 = (unsigned int)(puVar1 + 1);
    *puVar1 = param_1;
  }
  return;
}
