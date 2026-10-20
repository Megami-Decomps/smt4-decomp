/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247f80` (_code @ 0x247f80, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bee58(int, int);
int FUN_002bf810(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf810. */


void FUN_00247f80(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e158;
  if (*(int *)(DAT_0043e158 + 8) == 2) {
    *(unsigned int *)(DAT_0043e158 + 8) = 3;
  }
  else {
    *(unsigned int *)(DAT_0043e158 + 0xc) = 3;
  }
  FUN_002bee58(temp_v0 + 0x38,1);
  FUN_002bf810(0x10001fe);
  return;
}

} /* extern "C" */
