/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e10f0` (_code @ 0x2e10f0, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0064038c; /* 0x64038c */
extern unsigned int DAT_00640390; /* 0x640390 */
extern unsigned int DAT_00640394; /* 0x640394 */

/* Supplied declaration required: FUN_00137ee0. */
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);


unsigned int FUN_002e10f0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  for (temp_v0 = DAT_00640390; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
  }
  temp_v1 = FUN_001656a0(0);
  if (temp_v1 != 0) {
    FUN_00137ee0(*(unsigned int *)(DAT_0064038c + DAT_00640394 * 8 + 4),0);
    return 0xffffffff;
  }
  temp_v1 = FUN_00164af0(5);
  if (temp_v1 != 0) {
    DAT_00640394 = DAT_00640394 - 1;
  }
  temp_v1 = FUN_00164af0(6);
  if (temp_v1 != 0) {
    DAT_00640394 = DAT_00640394 + 1;
  }
  if ((int)DAT_00640394 < 0) {
    DAT_00640394 = DAT_00640390 - 1;
  }
  if (DAT_00640390 <= DAT_00640394) {
    DAT_00640394 = 0;
  }
  temp_v1 = FUN_001656a0(4);
  if (temp_v1 != 0) {
    DAT_00640394 = DAT_00640394 - 0x19;
  }
  temp_v1 = FUN_001656a0(3);
  if (temp_v1 != 0) {
    DAT_00640394 = DAT_00640394 + 0x19;
  }
  if ((int)DAT_00640394 < 1) {
    DAT_00640394 = 0;
  }
  if (DAT_00640390 <= DAT_00640394) {
    DAT_00640394 = DAT_00640390 - 1;
  }
  return 0;
}
