/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038db30` (_code @ 0x38db30, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_003f0e20(int, unsigned int);

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_0038db30(void)

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
  FUN_003f0e20(temp_v3,temp_v1);
  if (((temp_v3 != 0) && (-1 < temp_v2)) && (temp_v2 < 9)) {
    temp_v3 = temp_v3 + temp_v2 * 2;
    *(short *)(temp_v3 + 0x13c) = *(short *)(temp_v3 + 0x13c) + temp_v0;
  }
  return 1;
}

} /* extern "C" */
