/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4a74` (_code @ 0x2f4a74, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287728(void);
int FUN_002a03d8(int, unsigned int);

/* Supplied declaration required: FUN_00287728. */
extern int FUN_002893d8(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002b89a4(unsigned int);
extern int FUN_002c1d5c(void);


unsigned int FUN_002f4a74(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002c1d5c();
    if (temp_v0 != 0) {
      FUN_00287728();
      temp_v1 = 1;
    }
    else {
      temp_v0 = FUN_002b89a4(0);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        return 1;
      }
    }
    return temp_v1;
  }
  temp_v0 = FUN_002c1d5c();
  if (temp_v0 != 0) {
    return 1;
  }
  temp_v1 = scrGetArg(0);
  FUN_002a03d8(0,temp_v1);
  return 0;
}

} /* extern "C" */
