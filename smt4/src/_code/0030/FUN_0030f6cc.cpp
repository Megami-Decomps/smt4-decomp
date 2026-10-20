/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f6cc` (_code @ 0x30f6cc, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0cec(int, int);

extern int DAT_00433158; /* 0x433158 */

extern int FUN_002c0c74(void);
/* Supplied declaration required: FUN_002c0cec. */


int FUN_0030f6cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002c0cec(0x23,5);
  temp_v0 = FUN_002c0c74();
  return temp_v0 + *(int *)(DAT_00433158 + 0x40c);
}

} /* extern "C" */
