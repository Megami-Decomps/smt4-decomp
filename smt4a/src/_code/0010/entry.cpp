/* NON_MATCHING: romwright 0.5.0 decompilation of `entry` (_code @ 0x100000, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00102c80(void);
int FUN_00135c30(void);
int FUN_00136c40(void);
int FUN_001396c8(void);
int FUN_0016f854(void);
int nninitCallStaticInitializers(void);
int nninitRegion(void);
int nninitSetup(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00102c80. */
/* Supplied declaration required: FUN_00135c30. */
/* Supplied declaration required: FUN_00136c40. */
/* Supplied declaration required: FUN_001396c8. */
/* Supplied declaration required: FUN_0016f854. */
/* Supplied declaration required: nninitCallStaticInitializers. */
/* Supplied declaration required: nninitRegion. */
/* Supplied declaration required: nninitSetup. */


void entry(void)

{
/* irregular: 9 native warning(s); review required */
  nninitRegion();
  FUN_00136c40();
  FUN_0016f854();
  FUN_001396c8();
  FUN_00102c80();
  nninitCallStaticInitializers();
  nninitSetup();
  FUN_00135c30();
  software_interrupt(3);
  return;
}

} /* extern "C" */
