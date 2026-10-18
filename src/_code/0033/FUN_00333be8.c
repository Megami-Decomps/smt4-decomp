/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333be8` (_code @ 0x333be8, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


int * FUN_00333be8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  piVar1 = *(int **)(DAT_00433158 + 0x390);
  if (piVar1 != (int *)0x0) {
    temp_v2 = 0;
    if (temp_v2 < *(unsigned int *)(DAT_00433158 + 0x38c)) {
      do {
        if (*piVar1 == param_1) {
          return piVar1 + 1;
        }
        temp_v2 = temp_v2 + 1;
        piVar1 = piVar1 + 0x15;
      } while (temp_v2 < *(unsigned int *)(DAT_00433158 + 0x38c));
    }
  }
  temp_v0 = FUN_002c0ec4(0x1c,1);
  temp_v1 = FUN_002c0e9c();
  FUN_002c0e4c(temp_v0);
  return (int *)(temp_v1 + param_1 * 0x50);
}
