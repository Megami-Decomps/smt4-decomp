/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae898` (_code @ 0x2ae898, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0894(void);
int FUN_002c415c(void);

extern int FUN_002b93b0(void);
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002ae898(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b93b0();
  if (temp_v0 != 0) {
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_002c0894();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  return;
}

} /* extern "C" */
