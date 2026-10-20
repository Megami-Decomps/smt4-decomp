/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001385f0` (_code @ 0x1385f0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014192c(int);
int FUN_00144ab4(void);
int FUN_00157558(int);
int FUN_001575cc(int);
int FUN_0017dd80(void);

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014192c. */
/* Supplied declaration required: FUN_00144ab4. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001575cc. */
/* Supplied declaration required: FUN_0017dd80. */


unsigned int FUN_001385f0(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_00144ab4();
  *(unsigned int *)(DAT_0059dbb4 + 0x52c) = 0;
  FUN_0017dd80();
  FUN_0014192c(0);
  FUN_001575cc(DAT_0059dbb4);
  FUN_00157558(DAT_0059dbb4);
  return 0;
}

} /* extern "C" */
