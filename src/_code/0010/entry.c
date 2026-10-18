/* NON_MATCHING: romwright 0.5.0 decompilation of `entry` (_code @ 0x100000, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00100024. */
/* Supplied declaration required: FUN_00100cb8. */
/* Supplied declaration required: FUN_00102338. */
/* Supplied declaration required: FUN_0010236c. */
/* Supplied declaration required: FUN_001023c0. */
/* Supplied declaration required: FUN_00104ef4. */
/* Supplied declaration required: func_0x00101308. */
/* Supplied declaration required: func_0x00106d58. */


void entry(void)

{
/* irregular: 9 native warning(s); review required */
  FUN_00100024();
  FUN_0010236c();
  func_0x00106d58();
  FUN_00104ef4();
  FUN_00100cb8();
  FUN_00102338();
  FUN_001023c0();
  func_0x00101308();
  software_interrupt(3);
  return;
}
