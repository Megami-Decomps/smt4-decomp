/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00243ea0` (_code @ 0x243ea0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005f0c84; /* 0x5f0c84 */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00292268. */


void FUN_00243ea0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0018719c(0x4d0);
  if (((temp_v0 != 0) && (DAT_005f0c84 != 0)) && (DAT_005f0c84 == 1)) {
    FUN_00292268();
    return;
  }
  return;
}
