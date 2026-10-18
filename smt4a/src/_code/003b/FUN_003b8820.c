/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8820` (_code @ 0x3b8820, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00213b5c(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b8820(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xffffffff;
  temp_v0 = FUN_00213b5c();
  switch(temp_v0) {
  case 0:
    temp_v1 = 0;
    break;
  case 1:
    temp_v1 = 1;
    break;
  case 2:
    temp_v1 = 2;
    break;
  case 3:
    temp_v1 = 3;
    break;
  case 4:
    temp_v1 = 4;
  }
  FUN_003283ac(temp_v1);
  return 1;
}
