/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f78e0` (_code @ 0x2f78e0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_002f78e0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  temp_v0 = 1 << (temp_v0 & 0xff);
  scrSetResult((*(unsigned int *)(temp_v1 + 0x49d4) & ((int)temp_v0 >> 0x1f)) != 0 ||
               (*(unsigned int *)(temp_v1 + 0x49d0) & temp_v0) != 0);
  return 1;
}

} /* extern "C" */
