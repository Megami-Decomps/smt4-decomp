/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003002b4` (_code @ 0x3002b4, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282924(int, unsigned int);
int scrGetArg(int);

/* Supplied declaration required: FUN_00282924. */
extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_003002b4(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v0 = scrGetArg(2);
  temp_v3 = btlGetMainState();
  FUN_00282924(temp_v3,temp_v1);
  if (((temp_v3 != 0) && (-1 < temp_v2)) && (temp_v2 < 9)) {
    temp_v3 = temp_v3 + temp_v2 * 2;
    *(short *)(temp_v3 + 0xae) = *(short *)(temp_v3 + 0xae) + temp_v0;
  }
  return 1;
}

} /* extern "C" */
