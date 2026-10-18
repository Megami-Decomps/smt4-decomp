/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e970` (_code @ 0x21e970, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0024f1f8(void);
/* Supplied declaration required: FUN_00282e6c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_0029c660. */
extern int FUN_002b8ce4(unsigned int);
extern int FUN_002c1f28(void);


unsigned int FUN_0021e970(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    temp_v1 = FUN_00296f60(0);
    if (temp_v1 == 0) {
      temp_v1 = FUN_0024f1f8();
      if (temp_v1 == 0) {
        FUN_0029c660(0,temp_v0,0xff);
      }
      FUN_0029c660(1,temp_v0,0xff);
      return 0;
    }
    if (temp_v1 != 1) {
      return 1;
    }
    temp_v1 = FUN_0024f1f8();
    if (temp_v1 == 0) {
      FUN_0029c660(0,temp_v0,0xffffffff);
    }
    FUN_0029c660(1,temp_v0,0xffffffff);
    return 0;
  }
  temp_v1 = FUN_0024f1f8();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b8ce4(1);
    if (temp_v1 != 0) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_002b8ce4(0);
    if (temp_v1 != 0) {
      temp_v1 = FUN_002b8ce4(1);
      if (temp_v1 != 0) {
        return 1;
      }
    }
  }
  temp_v1 = FUN_002c1f28();
  if (temp_v1 != 0) {
    temp_v1 = FUN_00296f60(0);
    if (temp_v1 != 0) {
      if (temp_v1 == 1) {
        temp_v1 = FUN_0024f1f8();
        if (temp_v1 == 0) {
          FUN_00282e6c(0,0xffffffff);
        }
        FUN_00282e6c(1,0xffffffff);
      }
    }
    else {
      temp_v1 = FUN_0024f1f8();
      if (temp_v1 == 0) {
        FUN_00282e6c(0,0xff);
      }
      FUN_00282e6c(1,0xff);
    }
  }
  return 0;
}
