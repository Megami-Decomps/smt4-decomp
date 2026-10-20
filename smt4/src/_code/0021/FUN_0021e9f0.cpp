/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e9f0` (_code @ 0x21e9f0, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287728(int);
int scrGetArg(...);
int FUN_002a03d8(int, unsigned int);

/* Supplied declaration required: FUN_00287728. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002b89a4(void);
extern int FUN_002c1d5c(void);


unsigned int FUN_0021e9f0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b89a4();
    if (temp_v1 == 0) {
      temp_v1 = FUN_002c1d5c();
      if (temp_v1 != 0) {
        FUN_00287728(0);
      }
      return 0;
    }
  }
  else {
    temp_v2 = scrGetArg(0);
    if (temp_v2 < 2) {
      FUN_002a03d8(0,temp_v0);
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
