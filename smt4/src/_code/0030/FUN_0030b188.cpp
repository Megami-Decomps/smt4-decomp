/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b188` (_code @ 0x30b188, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int btlGetMainState(void);

extern int FUN_002499b4(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_0030b188(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg(0);
  btlGetMainState();
  temp_v1 = FUN_002499b4();
  if ((temp_v1 != 0) && (((unsigned int)*(unsigned short *)(temp_v1 + 0x1c6) & (1 << (temp_v0 & 0xff))) != 0)) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
