/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399238` (_code @ 0x399238, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int *);

typedef int romwright_code(...);
extern unsigned int DAT_0057a9a8; /* 0x57a9a8 */

extern int *FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00399238(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)FUN_00164a9c();
  if ((int *)piVar1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[1] + 4))();
  }
  if ((int *)*piVar1 != (int *)0x0) {
    (**(romwright_code **)(*(int *)*piVar1 + 4))();
  }
  FUN_0019a5a0(piVar1);
  DAT_0057a9a8 = 0;
  return;
}

} /* extern "C" */
