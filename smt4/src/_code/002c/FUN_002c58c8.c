/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c58c8` (_code @ 0x2c58c8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9178. */
extern int FUN_002b93b0(void);
/* Supplied declaration required: FUN_002bd540. */


int FUN_002c58c8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b93b0();
  if (temp_v0 != 0) {
    FUN_002b9178();
    if (*(int *)(temp_v0 + 8) != 0) {
      *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = 0x10000;
      if (*(int *)(temp_v0 + 8) != 0) {
        FUN_002bd540();
        *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 4;
      }
    }
  }
  return temp_v0;
}
