/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a3010` (_code @ 0x1a3010, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00170390. */
/* Supplied declaration required: FUN_001703b0. */
/* Supplied declaration required: FUN_00170474. */
extern int FUN_0018b63c(void);
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_001b04d0(unsigned int);
/* Supplied declaration required: FUN_001bcd48. */


int FUN_001a3010(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_00170474(2);
  temp_v0 = FUN_0018b63c();
  if (temp_v0 != 0) {
    FUN_001703b0(1);
  }
  while( 1 ) {
    FUN_0018b868();
    temp_v1 = FUN_001b04d0(param_1);
    FUN_0018b964();
    if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
    FUN_001bcd48(10000000,0);
  }
  if (temp_v0 != 0) {
    temp_v0 = FUN_0018b63c();
    if (temp_v0 == 0) {
      FUN_00170390(1);
    }
  }
  else {
    temp_v0 = FUN_0018b63c();
    if (temp_v0 != 0) {
      FUN_001703b0(1);
    }
  }
  return temp_v1;
}
