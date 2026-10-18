/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316ffc` (_code @ 0x316ffc, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00270298. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_0031ec60. */


unsigned char FUN_00316ffc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 == 0) {
    FUN_0031ec60();
    FUN_00270298(3);
    return 0;
  }
  temp_v0 = FUN_00289640();
  if (temp_v0 == 1) {
    FUN_002b91c4(0x1000184);
    FUN_00270298(1);
    return 0;
  }
  temp_v0 = FUN_00289640();
  return temp_v0 >= 3;
}
