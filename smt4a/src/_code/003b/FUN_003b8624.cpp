/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8624` (_code @ 0x3b8624, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003f0e20(unsigned int *, unsigned int);

extern unsigned int DAT_00571110; /* 0x571110 */
extern unsigned int DAT_00571114; /* 0x571114 */

extern unsigned int *btlGetMainState(void);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_003b8624(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = scrGetArg();
  puVar2 = (unsigned int *)btlGetMainState();
  FUN_003f0e20(puVar2,temp_v0);
  if (puVar2 != (unsigned int *)0x0) {
    scrSetResult((*puVar2 & DAT_00571110) != 0 || (puVar2[1] & DAT_00571114) != 0);
  }
  else {
    scrSetResult(0);
  }
  return 1;
}

} /* extern "C" */
