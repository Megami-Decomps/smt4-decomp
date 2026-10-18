/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ebcd0` (_code @ 0x1ebcd0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019fe8c. */
extern int FUN_001ed720(void);


unsigned int FUN_001ebcd0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = FUN_001ed720();
  if (temp_v0 == 0) {
    FUN_0019fe8c(*(unsigned int *)(temp_v1 + 8),temp_v1 + 0x28);
  }
  return 0;
}
