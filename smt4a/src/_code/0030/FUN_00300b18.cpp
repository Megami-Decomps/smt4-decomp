/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300b18` (_code @ 0x300b18, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f3b58(unsigned int, int, unsigned int);

extern unsigned char DAT_0055a954; /* 0x55a954 */

extern unsigned int FUN_0012425a(void);
extern int FUN_002ecf28(void);
/* Supplied declaration required: FUN_002f3b58. */
extern unsigned int *FUN_003054a4(unsigned int, unsigned int);


unsigned int * FUN_00300b18(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_003054a4(param_1,1);
  *puVar1 = (unsigned int)&DAT_0055a954;
  if (param_2 != 0) {
    *(short *)(puVar1 + 8) = (short)param_2;
    temp_v0 = FUN_0012425a();
    temp_v1 = FUN_002ecf28();
    FUN_002f3b58(*(unsigned int *)(temp_v1 + 0xc),param_2,temp_v0);
  }
  return puVar1;
}

} /* extern "C" */
