/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192600` (_code @ 0x192600, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00291730(unsigned int *);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00291998(void);
int FUN_002b827c(void);
int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00291730. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00291998. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00192600(void)

{
/* irregular: 7 native warning(s); review required */
  FUN_002b827c();
  FUN_00291998();
  FUN_00291944();
  FUN_002917b8();
  if (DAT_0044cdf0 != (unsigned int *)0x0) {
    FUN_002c43b4(*DAT_0044cdf0,0);
    FUN_00291730(DAT_0044cdf0 + 0x10);
    FUN_002c415c(DAT_0044cdf0);
    DAT_0044cdf0 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
