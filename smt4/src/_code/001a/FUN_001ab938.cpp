/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab938` (_code @ 0x1ab938, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(void);

/* Supplied declaration required: scrGetArg. */
extern int jobGetWork(void);


unsigned int FUN_001ab938(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  scrGetArg();
  temp_v0 = jobGetWork();
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
  }
  return 1;
}

} /* extern "C" */
