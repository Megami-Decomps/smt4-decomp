/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfd90` (_code @ 0x2cfd90, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282924(int, int);
int scrSetResult(int);

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern int scrGetArg(void);
extern int FUN_002a8740(int);


unsigned int FUN_002cfd90(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  if (temp_v0 < 0x6d) {
    temp_v1 = btlGetMainState();
    FUN_00282924(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x27c);
  }
  else {
    temp_v0 = FUN_002a8740(temp_v0 - 0x6d);
  }
  scrSetResult(*(unsigned short *)(temp_v0 + 0x46));
  return 1;
}

} /* extern "C" */
