/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a1c0` (_code @ 0x23a1c0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126fb8(unsigned int);
int FUN_002a116c(void);
int FUN_002a1200(void);

/* Supplied declaration required: FUN_00126fb8. */
/* Supplied declaration required: FUN_002a116c. */
/* Supplied declaration required: FUN_002a1200. */


void FUN_0023a1c0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int uStack_14;
  unsigned int uStack_10;
  
  puVar1 = (unsigned int *)&uStack_14;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_002a1200();
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)&uStack_14;
    FUN_002a116c();
    if (puVar1 == (unsigned int *)0x0) {
      return;
    }
  }
  FUN_00126fb8(param_1);
  return;
}

} /* extern "C" */
