/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7634` (_code @ 0x2e7634, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecad4(unsigned int *, unsigned int, int);

extern unsigned char DAT_0055af54; /* 0x55af54 */

extern unsigned int FUN_00121234(void);
extern unsigned int *FUN_002e9f80(void);
/* Supplied declaration required: FUN_002ecad4. */


unsigned int * FUN_002e7634(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  *puVar1 = (unsigned int)&DAT_0055af54;
  temp_v0 = FUN_00121234();
  FUN_002ecad4(puVar1,temp_v0,0);
  return puVar1;
}

} /* extern "C" */
