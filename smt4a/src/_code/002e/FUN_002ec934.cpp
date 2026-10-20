/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec934` (_code @ 0x2ec934, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f17e4(int *, unsigned int);

extern unsigned char DAT_0055ae64; /* 0x55ae64 */

extern unsigned int *FUN_002e9f80(void);
/* Supplied declaration required: FUN_002f17e4. */


void FUN_002ec934(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  *puVar1 = (unsigned int)&DAT_0055ae64;
  piVar2 = (int *)(puVar1 + 3);
  FUN_002f17e4(piVar2,param_3);
  for (temp_v0 = 0; temp_v0 < param_3; temp_v0 = temp_v0 + 1) {
    *(unsigned char *)(*piVar2 + temp_v0) = *(unsigned char *)(param_2 + temp_v0);
  }
  return;
}

} /* extern "C" */
