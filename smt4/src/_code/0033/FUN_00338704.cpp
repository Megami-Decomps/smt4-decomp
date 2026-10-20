/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338704` (_code @ 0x338704, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00245a7c(int, unsigned int);

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00245a7c. */
extern unsigned int *FUN_0027e928(unsigned int);


void FUN_00338704(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0027e928(DAT_0043427c);
  if ((puVar1 == (unsigned int *)0x0) || (((*puVar1 & 0x80) == 0 && ((*puVar1 & 0x1000) == 0)))) {
    temp_v0 = 2;
    FUN_00245a7c(2,*(unsigned int *)(param_1 + 0x49e0));
    *(unsigned int *)(param_1 + 0x49e0) = temp_v0;
  }
  return;
}

} /* extern "C" */
