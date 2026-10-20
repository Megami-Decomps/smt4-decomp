/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7478` (_code @ 0x2b7478, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);

/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_004bc850(void);


unsigned short FUN_002b7478(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004bc850();
  FUN_0019cac4();
  return *(unsigned short *)(temp_v0 + 2) & 0x7fff;
}

} /* extern "C" */
