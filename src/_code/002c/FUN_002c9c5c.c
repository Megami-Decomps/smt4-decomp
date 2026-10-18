/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9c5c` (_code @ 0x2c9c5c, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282e6c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_0029c660. */
extern int FUN_002b8ce4(void);
extern int FUN_002c1f28(void);


unsigned int FUN_002c9c5c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00289640();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b8ce4();
    if (temp_v1 != 0) {
      return 1;
    }
    temp_v1 = FUN_002c1f28();
    if (temp_v1 != 0) {
      temp_v1 = FUN_00296f60(0);
      if (temp_v1 != 0) {
        if (temp_v1 == 1) {
          FUN_00282e6c(0,0xffffffff);
        }
      }
      else {
        FUN_00282e6c(0,0xff);
      }
    }
  }
  else {
    temp_v1 = FUN_00296f60(0);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        return 1;
      }
      FUN_0029c660(0,temp_v0,0xffffffff);
    }
    else {
      FUN_0029c660(0,temp_v0,0xff);
    }
  }
  return 0;
}
