/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eff58` (_code @ 0x2eff58, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecad4(unsigned int *, unsigned int, int);

extern unsigned char DAT_005588f4; /* 0x5588f4 */
extern unsigned char DAT_0055af54; /* 0x55af54 */

extern unsigned int *sharedRefInit(void);
/* Supplied declaration required: FUN_002ecad4. */


unsigned int * FUN_002eff58(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)sharedRefInit();
  *puVar1 = (unsigned int)&DAT_0055af54;
  FUN_002ecad4(puVar1,param_2,4);
  *puVar1 = (unsigned int)&DAT_005588f4;
  return puVar1;
}

} /* extern "C" */
