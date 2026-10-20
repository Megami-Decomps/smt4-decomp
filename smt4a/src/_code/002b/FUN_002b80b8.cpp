/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b80b8` (_code @ 0x2b80b8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d8c90(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int *DAT_0058104c; /* 0x58104c */

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_002d8c90. */


void FUN_002b80b8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*DAT_0058104c == 0 || *DAT_0058104c == 0x12) {
    return;
  }
  temp_v0 = FUN_0014bef4(99);
  if (temp_v0 + 1 < 0xb) {
    FUN_002d8c90(0x12);
    return;
  }
  return;
}

} /* extern "C" */
