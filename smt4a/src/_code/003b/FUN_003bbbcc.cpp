/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbbcc` (_code @ 0x3bbbcc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003eaf20(void);

extern int btlGetMainState(void);
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003bbbcc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 8;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 3) {
    temp_v1 = 0xb;
  }
  temp_v0 = btlGetMainState();
  FUN_003eaf20();
  if (temp_v0 != 0) {
    scrSetResult(0 < *(int *)(temp_v0 + temp_v1 * 4 + 0x74));
  }
  else {
    scrSetResult(0);
  }
  return 1;
}

} /* extern "C" */
