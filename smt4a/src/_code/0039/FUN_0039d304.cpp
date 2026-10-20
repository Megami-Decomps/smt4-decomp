/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d304` (_code @ 0x39d304, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003eaf20(void);

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0039d304(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlGetMainState();
  FUN_003eaf20();
  if ((temp_v1 != 0) && (((unsigned int)*(unsigned short *)(temp_v1 + 0x274) & (1 << (temp_v0 & 0xff))) != 0)) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
