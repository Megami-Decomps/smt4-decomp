/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00175f54` (_code @ 0x175f54, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c534; /* 0x55c534 */

extern unsigned int *_ZN9Obj55c5a0C1Ev(void);


void FUN_00175f54(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)_ZN9Obj55c5a0C1Ev();
  puVar1[1] = 0;
  *puVar1 = (unsigned int)&DAT_0055c534;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(unsigned short *)(puVar1 + 5) = 0;
  *(unsigned short *)((int)puVar1 + 0x16) = 0xffff;
  puVar1[4] = 6;
  return;
}

} /* extern "C" */
