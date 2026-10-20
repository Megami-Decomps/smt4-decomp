/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e350` (_code @ 0x27e350, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249974(void);

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00249974. */
extern int FUN_0028c5e8(int);


void FUN_0027e350(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0028c5e8(DAT_00439ca8 + 8);
  if (temp_v0 != 0) {
    FUN_00249974();
  }
  return;
}

} /* extern "C" */
