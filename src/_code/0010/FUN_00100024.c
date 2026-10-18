/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100024` (_code @ 0x100024, 0x1c bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

extern unsigned int *DAT_00100040; /* 0x100040 */
extern unsigned int DAT_00100044; /* 0x100044 */


void FUN_00100024(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)DAT_00100044;
  for (puVar2 = DAT_00100040; puVar2 < puVar1; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  return;
}
