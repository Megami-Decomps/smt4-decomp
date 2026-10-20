/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00203d04` (_code @ 0x203d04, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);
int FUN_00184c00(int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f574; /* 0x57f574 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_00203d04(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f574;
  if (*(int *)(DAT_0057f574 + 8) != 0) {
    *(unsigned int *)(DAT_0057f574 + 8) = 5;
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
    FUN_00184758(temp_v0 + 0x54,1,0);
    FUN_00184c00(temp_v0 + 0x54,1,0);
    if (*(int *)(temp_v0 + 0x20) == 2) {
      FUN_00184758(temp_v0 + 0xe0,4,0);
      return;
    }
  }
  return;
}

} /* extern "C" */
