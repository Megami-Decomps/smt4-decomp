/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298508` (_code @ 0x298508, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00573808; /* 0x573808 */

extern unsigned int FUN_00164a9c(void);
/* Supplied declaration required: FUN_004fa828. */


void FUN_00298508(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  if (DAT_00573808 != 0) {
    FUN_004fa828(DAT_00573808,temp_v0);
    return;
  }
  return;
}
