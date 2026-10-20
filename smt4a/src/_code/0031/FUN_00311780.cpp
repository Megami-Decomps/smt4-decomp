/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311780` (_code @ 0x311780, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f3b58(unsigned int, int, unsigned int);

extern unsigned char DAT_0055a180; /* 0x55a180 */

extern unsigned int FUN_0012411a(unsigned int *);
extern unsigned int FUN_002eb56c(void);
extern int FUN_002ecedc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002f3b58. */
extern unsigned int *FUN_003054a4(unsigned int, unsigned int);


unsigned int * FUN_00311780(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  puVar1 = (unsigned int *)FUN_003054a4(param_1,1);
  *puVar1 = (unsigned int)&DAT_0055a180;
  if (param_2 != 0) {
    *(short *)(puVar1 + 8) = (short)param_2;
    temp_v0 = FUN_0012411a(puVar1);
    temp_v1 = FUN_002eb56c();
    temp_v2 = FUN_002ecedc(0xc,temp_v1);
    temp_v3 = 0;
    if (temp_v2 != 0) {
      temp_v3 = *(int *)(temp_v2 + 0xc);
    }
    FUN_002f3b58(*(unsigned int *)(temp_v3 + 0xc),param_2,temp_v0);
  }
  return puVar1;
}

} /* extern "C" */
