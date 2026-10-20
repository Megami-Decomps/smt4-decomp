/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309424` (_code @ 0x309424, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(int *);

typedef int romwright_code(...);
extern unsigned int DAT_00439c60; /* 0x439c60 */

extern int *FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_00309424(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)FUN_002c08f0();
  if ((int *)piVar1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[1] + 4))();
  }
  if ((int *)*piVar1 != (int *)0x0) {
    (**(romwright_code **)(*(int *)*piVar1 + 4))();
  }
  FUN_002c415c(piVar1);
  DAT_00439c60 = 0;
  return;
}

} /* extern "C" */
