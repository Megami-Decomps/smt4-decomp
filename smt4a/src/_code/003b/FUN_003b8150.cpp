/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8150` (_code @ 0x3b8150, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int scrSetResult(int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
extern int FUN_003e4fdc(unsigned short);
extern int FUN_004bca68(int, int);


unsigned int FUN_003b8150(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = FUN_003e4fdc(temp_v0);
  if (temp_v2 != 0 && temp_v1 != 0) {
    temp_v1 = FUN_004bca68(temp_v2,temp_v1);
    scrSetResult(temp_v1 != 0);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
