/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003705a0` (_code @ 0x3705a0, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00314bf8(int);
int FUN_003ae6cc(void);
int FUN_003c4d84(int);

extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00314bf8. */
/* Supplied declaration required: FUN_003ae6cc. */
/* Supplied declaration required: FUN_003c4d84. */


unsigned int FUN_003705a0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_00314bf8(0x65);
  temp_v0 = scrGetArg(0);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          FUN_003c4d84(0x65);
          FUN_003c4d84(0x65);
          FUN_003c4d84(0x65);
          FUN_003c4d84(0x65);
        }
      }
      else {
        FUN_003c4d84(0x65);
      }
    }
    else {
      FUN_003c4d84(0x65);
      FUN_003c4d84(0x65);
      FUN_003c4d84(0x65);
      FUN_003c4d84(0x65);
    }
  }
  else {
    FUN_003c4d84(0x65);
  }
  FUN_003ae6cc();
  return 1;
}

} /* extern "C" */
