/* NON_MATCHING: romwright 0.5.0 decompilation of `vldtr_initializeStateValidator` (_code @ 0x161004, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178bc8(int);
int FUN_0017909c(int);
int FUN_0017cbb4(void);
int FUN_00195ae4(int);

extern int DAT_00589188; /* 0x589188 */

/* Supplied declaration required: FUN_00178bc8. */
/* Supplied declaration required: FUN_0017909c. */
/* Supplied declaration required: FUN_0017cbb4. */
/* Supplied declaration required: FUN_00195ae4. */


unsigned int vldtr_initializeStateValidator(int param_1)

{
/* irregular: 4 native warning(s); review required */
  DAT_00589188 = param_1;
  FUN_0017cbb4();
  FUN_00178bc8(DAT_00589188 + 4);
  FUN_00195ae4(DAT_00589188 + 8);
  FUN_0017909c(DAT_00589188 + 0xc);
  return 0;
}

} /* extern "C" */
