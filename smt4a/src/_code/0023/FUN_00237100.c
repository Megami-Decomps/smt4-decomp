/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237100` (_code @ 0x237100, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
extern unsigned int FUN_0042d734(void);


unsigned char FUN_00237100(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_005b3f98 != 0) {
    FUN_002e3328(*(unsigned int *)(DAT_005b3f98 + 0xc));
    if (*(int **)(DAT_005b3f98 + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(DAT_005b3f98 + 0x18) + 4))();
    }
    FUN_0019a5a0(DAT_005b3f98);
    DAT_005b3f98 = 0;
  }
  temp_v0 = FUN_0042d734();
  return (temp_v0 & 0x80000000) == 0;
}
