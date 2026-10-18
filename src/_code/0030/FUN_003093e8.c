/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003093e8` (_code @ 0x3093e8, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_00439c60; /* 0x439c60 */

extern int *FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_003093e8(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)FUN_002c0ac8();
  if ((int *)piVar1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[1] + 4))();
  }
  if ((int *)*piVar1 != (int *)0x0) {
    (**(romwright_code **)(*(int *)*piVar1 + 4))();
  }
  FUN_002c4360(piVar1);
  DAT_00439c60 = 0;
  return;
}
