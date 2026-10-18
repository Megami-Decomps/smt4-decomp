/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de9ec` (_code @ 0x3de9ec, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570280; /* 0x570280 */

extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


int * FUN_003de9ec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  piVar1 = *(int **)(DAT_00570280 + 0x390);
  if (piVar1 != (int *)0x0) {
    temp_v2 = 0;
    if (temp_v2 < *(unsigned int *)(DAT_00570280 + 0x38c)) {
      do {
        if (*piVar1 == param_1) {
          return piVar1 + 1;
        }
        temp_v2 = temp_v2 + 1;
        piVar1 = piVar1 + 0x11;
      } while (temp_v2 < *(unsigned int *)(DAT_00570280 + 0x38c));
    }
  }
  temp_v0 = FUN_00187180(0x1c,1);
  temp_v1 = FUN_00192798();
  FUN_00192748(temp_v0);
  return (int *)(temp_v1 + param_1 * 0x40);
}
