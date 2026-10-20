/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002466a8` (_code @ 0x2466a8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d8c90(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int *DAT_0058104c; /* 0x58104c */

extern int FUN_002c2758(unsigned int);
extern int FUN_002d8b58(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d8c90. */


void FUN_002466a8(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = DAT_0058104c;
  if (*DAT_0058104c != 0) {
    if (*DAT_0058104c != 0x10) {
      FUN_002d8c90(0x10);
      return;
    }
  }
  else {
    *DAT_0058104c = 0x10;
    piVar1[1] = 0;
    temp_v0 = FUN_002c2758(6);
    if (temp_v0 == 1) {
      temp_v0 = FUN_002d8b58(0x18,0);
      DAT_0058104c[5] = temp_v0;
      return;
    }
    temp_v0 = FUN_002d8b58(0x11,0);
    DAT_0058104c[5] = temp_v0;
  }
  return;
}

} /* extern "C" */
