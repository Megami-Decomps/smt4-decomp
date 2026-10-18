/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121d58` (_code @ 0x121d58, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421d58; /* 0x421d58 */

extern unsigned int *FUN_00131420(void);


void FUN_00121d58(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00131420();
  *puVar1 = (unsigned int)&DAT_00421d58;
  return;
}
