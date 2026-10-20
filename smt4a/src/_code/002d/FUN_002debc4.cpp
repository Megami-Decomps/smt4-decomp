/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002debc4` (_code @ 0x2debc4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDelete(void);
int aocMainShutdown(void);
int FUN_0047c950(void);

/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: aocMainShutdown. */
/* Supplied declaration required: FUN_0047c950. */


void FUN_002debc4(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  *(unsigned char *)(temp_v0 + 0x18) = 1;
  if (*(int *)(temp_v0 + 0x1c) != 0) {
    aocMainShutdown();
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_0047c950();
      asdOperatorDelete();
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
  }
  return;
}

} /* extern "C" */
