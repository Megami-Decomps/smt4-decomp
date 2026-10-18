/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381cf0` (_code @ 0x381cf0, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00240b9c(unsigned int);
extern int FUN_0029923c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_00348c20. */
/* Supplied declaration required: FUN_00349068. */


int FUN_00381cf0(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v0 = FUN_0029923c(temp_v2 & 0xffff,0);
    if ((temp_v0 == 0) && (temp_v0 = FUN_00240b9c(temp_v2 & 0xffff), temp_v0 != 0)) {
      temp_v1 = temp_v2;
      FUN_002b6700();
      if ((temp_v1 != 0) &&
         ((*(unsigned short *)(temp_v1 + 0x19c) != 0 && (*(unsigned short *)(temp_v1 + 0x19c) == param_1)))) {
        FUN_00348c20(temp_v2 & 0xffff);
        temp_v3 = 1;
        FUN_002c583c(0);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 400);
  if (temp_v3 != 0) {
    FUN_00349068();
  }
  return temp_v3;
}
