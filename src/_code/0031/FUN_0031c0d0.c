/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c0d0` (_code @ 0x31c0d0, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00244f38(unsigned int);
/* Supplied declaration required: FUN_00249da4. */
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_0031c0d0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00244f38(temp_v0);
  temp_v3 = FUN_00244f38(temp_v1);
  if (temp_v2 < 0) {
    if (temp_v3 < 0) {
      FUN_00249da4(temp_v0,2,0);
      FUN_00249da4(temp_v1,1,0);
      return 1;
    }
  }
  else if (0 < temp_v2) {
    if (0 < temp_v3) {
      FUN_00249da4(temp_v0,2,0);
      FUN_00249da4(temp_v1,1,0);
      return 1;
    }
    FUN_00249da4(temp_v0,2,0);
    temp_v4 = 1;
    FUN_00249da4(temp_v1,temp_v4,1);
    return 1;
  }
  FUN_00249da4(temp_v1,1,0);
  temp_v4 = 2;
  temp_v1 = temp_v0;
  FUN_00249da4(temp_v1,temp_v4,1);
  return 1;
}
