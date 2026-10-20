/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7830` (_code @ 0x2f7830, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013521c(void);

/* Supplied declaration required: FUN_0013521c. */


void FUN_002f7830(int param_1,unsigned char *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  if (puVar1 != *(unsigned char **)(param_1 + 8)) {
    *(unsigned char **)(param_1 + 4) = puVar1 + 1;
    if (puVar1 != (unsigned char *)0x0) {
      *puVar1 = *param_2;
    }
    return;
  }
  FUN_0013521c();
  return;
}

} /* extern "C" */
