/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461f10` (_code @ 0x461f10, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1f5c(void);
int FUN_001d239c(int);
int FUN_0045f9fc(int, unsigned int);

/* Supplied declaration required: FUN_001d1f5c. */
/* Supplied declaration required: FUN_001d239c. */
/* Supplied declaration required: FUN_0045f9fc. */


void FUN_00461f10(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_001d1f5c();
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    if (*(char *)(temp_v0 + 0x139) != '\0') {
      if (-1 < (int)param_2) {
        FUN_0045f9fc(temp_v0 + 0x98,param_2 & 0xff);
      }
      FUN_001d239c(temp_v0);
    }
  }
  return;
}

} /* extern "C" */
