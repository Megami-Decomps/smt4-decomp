/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100cb8` (_code @ 0x100cb8, 0x1a bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00100cd4; /* 0x100cd4 */
extern int DAT_00100cd8; /* 0x100cd8 */


void FUN_00100cb8(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_00100cd8 + 0x100cc4);
  for (piVar1 = (int *)(DAT_00100cd4 + 0x100cc0); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    (*(romwright_code *)(*piVar1 + (int)piVar1))();
  }
  return;
}
