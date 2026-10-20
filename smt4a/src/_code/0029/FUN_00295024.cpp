/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295024` (_code @ 0x295024, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d8c90(int);
int FUN_0039933c(void);
int FUN_003b5d1c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int *DAT_0058104c; /* 0x58104c */

extern int FUN_00164a34(void);
extern int FUN_002d8b58(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d8c90. */
/* Supplied declaration required: FUN_0039933c. */
/* Supplied declaration required: FUN_003b5d1c. */


void FUN_00295024(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  if (*DAT_0058104c != 0) {
    if (*DAT_0058104c != 0xd) {
      FUN_002d8c90(0xd);
      return;
    }
  }
  else {
    temp_v0 = FUN_00164a34();
    if (temp_v0 != 0) {
      FUN_0039933c();
    }
    else {
      FUN_003b5d1c();
    }
    piVar1 = DAT_0058104c;
    *DAT_0058104c = 0xd;
    piVar1[1] = 0;
    temp_v0 = FUN_002d8b58(0xf,0);
    DAT_0058104c[5] = temp_v0;
  }
  return;
}

} /* extern "C" */
