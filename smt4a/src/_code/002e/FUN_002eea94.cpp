/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eea94` (_code @ 0x2eea94, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e98d4(void);

extern unsigned char DAT_0053a204; /* 0x53a204 */

extern unsigned short *FUN_002e786a(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e98d4. */


void FUN_002eea94(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002e98d4();
  }
  puVar1 = (unsigned short *)FUN_002e786a(param_2,&DAT_0053a204,0);
  *(unsigned short **)(param_1 + 4) = puVar1;
  *puVar1 = 0;
  return;
}

} /* extern "C" */
