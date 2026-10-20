/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa820` (_code @ 0x3aa820, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003a8cc8(void);

extern unsigned char DAT_00422400; /* 0x422400 */

extern unsigned int *FUN_0022cb58(void);
/* Supplied declaration required: FUN_003a8cc8. */


unsigned int * FUN_003aa820(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0022cb58();
  *puVar1 = (unsigned int)&DAT_00422400;
  FUN_003a8cc8();
  *(unsigned char *)(puVar1 + 0x169) = 0;
  return puVar1;
}

} /* extern "C" */
