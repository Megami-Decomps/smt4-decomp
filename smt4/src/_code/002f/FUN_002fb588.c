/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb588` (_code @ 0x2fb588, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00287728. */
extern int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_0029c3c0. */
extern int FUN_002b89a4(unsigned int);
extern int FUN_002c1d5c(void);


unsigned int FUN_002fb588(void)

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
  temp_v1 = FUN_00296cc8(0);
  FUN_0029c3c0(0,temp_v1,0xffffffff);
  return 0;
}
