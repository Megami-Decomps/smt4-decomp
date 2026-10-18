/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a8190` (_code @ 0x2a8190, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014fefc(unsigned int);
extern int FUN_002bb410(void);
/* Supplied declaration required: FUN_002bb480. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c5624. */
/* Supplied declaration required: FUN_002c57c4. */


int FUN_002a8190(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002bb480(2);
  temp_v0 = FUN_002bb410();
  if (temp_v0 != 0) {
    FUN_002c57c4(1);
  }
  while( 1 ) {
    FUN_002bb6b8();
    temp_v1 = FUN_0014fefc(param_1);
    FUN_002bb648();
    if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
    FUN_002bb490(10000000,0);
  }
  if (temp_v0 != 0) {
    temp_v0 = FUN_002bb410();
    if (temp_v0 == 0) {
      FUN_002c5624(1);
    }
  }
  else {
    temp_v0 = FUN_002bb410();
    if (temp_v0 != 0) {
      FUN_002c57c4(1);
    }
  }
  return temp_v1;
}
