/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b0b8` (_code @ 0x37b0b8, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bda30. */
/* Supplied declaration required: FUN_0037aeb0. */


void FUN_0037b0b8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  if (*(char *)(param_1 + 0x554) != '\x02') {
    if (*(char *)(param_1 + 0x554) != '\x04') {
      return;
    }
    FUN_002bda30(param_1,0);
    temp_v0 = 0;
  }
  else {
    FUN_0037aeb0(param_1,param_1 + 0x52c,param_1 + 0x25c);
    temp_v0 = 3;
  }
  *(unsigned char *)(param_1 + 0x554) = temp_v0;
  return;
}
