/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9cb0` (_code @ 0x2c9cb0, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282bfc(...);
int scrGetArg(...);
int FUN_0029c3c0(...);

/* Supplied declaration required: FUN_00282bfc. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_0029c3c0. */
extern int FUN_002b89a4(void);
extern int FUN_002c1d5c(void);


unsigned int FUN_002c9cb0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b89a4();
    if (temp_v1 != 0) {
      return 1;
    }
    temp_v1 = FUN_002c1d5c();
    if (temp_v1 != 0) {
      temp_v1 = scrGetArg(0);
      if (temp_v1 != 0) {
        if (temp_v1 == 1) {
          FUN_00282bfc(0,0xffffffff);
        }
      }
      else {
        FUN_00282bfc(0,0xff);
      }
    }
  }
  else {
    temp_v1 = scrGetArg(0);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        return 1;
      }
      FUN_0029c3c0(0,temp_v0,0xffffffff);
    }
    else {
      FUN_0029c3c0(0,temp_v0,0xff);
    }
  }
  return 0;
}

} /* extern "C" */
