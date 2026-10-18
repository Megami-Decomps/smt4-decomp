/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a68cc` (_code @ 0x4a68cc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c8d8; /* 0x55c8d8 */

/* Supplied declaration required: FUN_004a4bc8. */
extern unsigned int *FUN_004a82cc(void);


unsigned int * FUN_004a68cc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_004a82cc();
  *puVar1 = (unsigned int)&DAT_0055c8d8;
  FUN_004a4bc8();
  *(unsigned char *)(puVar1 + 0x218) = 0;
  return puVar1;
}
