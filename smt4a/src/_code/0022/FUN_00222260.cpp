/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222260` (_code @ 0x222260, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001642e4(unsigned int, int *, int, int);
int asdMemFree(unsigned int);
int FUN_00290edc(void);

/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00290edc. */


unsigned int FUN_00222260(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_10;
  
  uStack_10 = param_4;
  FUN_001642e4(param_1,&uStack_10,1,0x80);
  temp_v0 = param_1;
  FUN_00290edc();
  asdMemFree(param_1);
  return temp_v0;
}

} /* extern "C" */
