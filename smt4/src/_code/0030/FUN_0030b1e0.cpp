/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b1e0` (_code @ 0x30b1e0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int btlGetMainState(void);

extern int FUN_002499b4(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
extern int scrGetArg(void);
extern int __aeabi_idivmod(int, int);


unsigned int FUN_0030b1e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  btlGetMainState();
  temp_v1 = FUN_002499b4();
  if ((temp_v1 != 0) &&
     (temp_v1 = __aeabi_idivmod(*(short *)(temp_v1 + 0x1b4) * 100,(int)*(short *)(temp_v1 + 0x1b6)),
     temp_v0 <= temp_v1)) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
