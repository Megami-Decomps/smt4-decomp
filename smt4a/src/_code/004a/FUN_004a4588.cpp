/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a4588` (_code @ 0x4a4588, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004a133c(void);

extern unsigned char DAT_0055c8a4; /* 0x55c8a4 */

/* Supplied declaration required: FUN_004a133c. */
extern unsigned int *FUN_004a82cc(void);


unsigned int * FUN_004a4588(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_004a82cc();
  *puVar1 = (unsigned int)&DAT_0055c8a4;
  *(unsigned char *)(puVar1 + 0x218) = param_2;
  FUN_004a133c();
  return puVar1;
}

} /* extern "C" */
