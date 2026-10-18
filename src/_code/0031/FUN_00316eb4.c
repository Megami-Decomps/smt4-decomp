/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316eb4` (_code @ 0x316eb4, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00270028. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_002b8e84. */
/* Supplied declaration required: FUN_0031eae4. */


unsigned char FUN_00316eb4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    FUN_0031eae4();
    FUN_00270028(3);
    return 0;
  }
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 1) {
    FUN_002b8e84(0x1000184);
    FUN_00270028(1);
    return 0;
  }
  temp_v0 = FUN_002893d8();
  return temp_v0 >= 3;
}
