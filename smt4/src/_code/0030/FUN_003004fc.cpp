/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003004fc` (_code @ 0x3004fc, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282924(int, int);
int scrSetResult(int);
int btlGetMainState(void);
int FUN_002953b8(void);
int FUN_0033b960(void);

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_002953b8. */
extern int scrGetArg(void);
extern int FUN_002a8740(int);
/* Supplied declaration required: FUN_0033b960. */


unsigned int FUN_003004fc(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  if (temp_v0 < 0x6d) {
    btlGetMainState();
    temp_v1 = btlGetMainState();
    FUN_00282924(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x27c);
  }
  else {
    temp_v0 = FUN_002a8740(temp_v0 - 0x6d);
  }
  FUN_0033b960();
  if (0 < temp_v0) {
    FUN_002953b8();
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
