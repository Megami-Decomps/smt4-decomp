/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb54c` (_code @ 0x2fb54c, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00287990. */
extern int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_0029c660. */
extern int FUN_002b8ce4(unsigned int);
extern int FUN_002c1f28(void);


unsigned int FUN_002fb54c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002c1f28();
    if (temp_v0 != 0) {
      FUN_00287990();
      temp_v1 = 1;
    }
    else {
      temp_v0 = FUN_002b8ce4(0);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        return 1;
      }
    }
    return temp_v1;
  }
  temp_v0 = FUN_002c1f28();
  if (temp_v0 != 0) {
    return 1;
  }
  temp_v1 = FUN_00296f60(0);
  FUN_0029c660(0,temp_v1,0xffffffff);
  return 0;
}
