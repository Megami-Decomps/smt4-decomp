/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103bd8` (_code @ 0x103bd8, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bdb44(void);
int FUN_002c3530(int);
int FUN_002c35b0(void);
int FUN_002c39a4(int);
int FUN_002c3a14(int);

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bdb44. */
/* Supplied declaration required: FUN_002c3530. */
/* Supplied declaration required: FUN_002c35b0. */
/* Supplied declaration required: FUN_002c39a4. */
/* Supplied declaration required: FUN_002c3a14. */


unsigned int FUN_00103bd8(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_002c35b0();
  *(unsigned int *)(g_titleScene + 0x528) = 0;
  FUN_002bdb44();
  FUN_002c3530(0);
  FUN_002c3a14(g_titleScene);
  FUN_002c39a4(g_titleScene);
  return 0;
}

} /* extern "C" */
