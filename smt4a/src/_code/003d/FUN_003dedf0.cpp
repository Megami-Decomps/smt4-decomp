/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dedf0` (_code @ 0x3dedf0, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);
int FUN_0041860c(int);

/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_00418584(int);
/* Supplied declaration required: FUN_0041860c. */


void FUN_003dedf0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  FUN_001ad9b4();
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = *(short *)(temp_v1 + 0xde);
  }
  if (((temp_v1 != 0 && temp_v0 != 0) && (temp_v1 = FUN_00418584(param_1), temp_v1 != 0)) &&
     (temp_v1 = param_1, FUN_001ad9b4(), temp_v1 != 0)) {
    FUN_0041860c(param_1);
  }
  return;
}

} /* extern "C" */
