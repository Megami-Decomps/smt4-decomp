/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ca78` (_code @ 0x10ca78, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558f18; /* 0x558f18 */

extern unsigned int *FUN_002f1744(void);


void FUN_0010ca78(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002f1744();
  *puVar1 = (unsigned int)&DAT_00558f18;
  puVar1[0x26] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  return;
}
