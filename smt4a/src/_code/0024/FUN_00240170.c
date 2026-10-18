/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240170` (_code @ 0x240170, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002efd90. */


void FUN_00240170(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  temp_v1 = *(int *)(DAT_00588fd4 + 0x2054);
  if (0 < temp_v1) {
    temp_v0 = *(char *)(DAT_00588fd4 + 0x2058);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 == '\x02') {
          VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
      else {
        VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
    }
    else {
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
  }
  FUN_002efd90();
  return;
}
