/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7614` (_code @ 0x2e7614, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecad4(unsigned int *, unsigned int, int);

extern unsigned char DAT_0055af54; /* 0x55af54 */

extern unsigned int *sharedRefInit(void);
/* Supplied declaration required: FUN_002ecad4. */


unsigned int * FUN_002e7614(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)sharedRefInit();
  *puVar1 = (unsigned int)&DAT_0055af54;
  FUN_002ecad4(puVar1,param_2,0);
  return puVar1;
}

} /* extern "C" */
