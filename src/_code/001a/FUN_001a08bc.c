/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a08bc` (_code @ 0x1a08bc, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ca620(void);
extern int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002cf0a0. */
/* Supplied declaration required: FUN_002efd18. */


unsigned char FUN_001a08bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 != 0) {
    temp_v0 = FUN_001ca620();
    if (temp_v0 != 0) {
      FUN_002efd18();
    }
    return temp_v0 != 0;
  }
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  FUN_002cf0a0(temp_v1,temp_v2);
  return 0;
}
