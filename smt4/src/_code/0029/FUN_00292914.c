/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292914` (_code @ 0x292914, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00283e48. */


unsigned int FUN_00292914(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v2 * 2 + 0x34);
    if (temp_v1 != 0) {
      FUN_00283e48();
      temp_v0 = '\0';
      if (temp_v1 != 0) {
        temp_v0 = *(char *)(temp_v1 + 0x35);
      }
      if (temp_v1 != 0 && temp_v0 != '\0') {
        return 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 8) {
      return 0;
    }
  } while( 1 );
}
