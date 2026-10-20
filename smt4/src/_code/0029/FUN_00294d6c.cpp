/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294d6c` (_code @ 0x294d6c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282c90(void);
int VectorSignedToFloat(int, int);

extern unsigned char DAT_0044e140; /* 0x44e140 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00282c90. */


void FUN_00294d6c(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  temp_v1 = *(int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1ea0);
  if (0 < temp_v1) {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1ea4);
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
  FUN_00282c90();
  return;
}

} /* extern "C" */
