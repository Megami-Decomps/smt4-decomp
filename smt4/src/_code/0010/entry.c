/* NON_MATCHING: romwright 0.5.0 decompilation of `entry` (_code @ 0x100000, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00100cb8. */
/* Supplied declaration required: FUN_0010236c. */
/* Supplied declaration required: FUN_00104f50. */
/* Supplied declaration required: func_0x00101308. */
/* Supplied declaration required: func_0x00106db4. */
/* Supplied declaration required: nninitCallStaticInitializers. */
/* Supplied declaration required: nninitRegion. */
/* Supplied declaration required: nninitSetup. */


void entry(void)

{
/* irregular: 9 native warning(s); review required */
  nninitRegion();
  FUN_0010236c();
  func_0x00106db4();
  FUN_00104f50();
  FUN_00100cb8();
  nninitCallStaticInitializers();
  nninitSetup();
  func_0x00101308();
  software_interrupt(3);
  return;
}
