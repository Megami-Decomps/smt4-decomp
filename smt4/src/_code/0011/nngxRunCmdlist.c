/* NON_MATCHING: romwright 0.5.0 decompilation of `nngxRunCmdlist` (_code @ 0x113150, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern int DAT_004c632c; /* 0x4c632c */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


void nngxRunCmdlist(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_004c632c == 0) {
    return;
  }
  if (DAT_004c62a1 != '\0') {
    return;
  }
  DAT_004c6330 = DAT_004c632c;
  DAT_004c62a2 = 1;
  if (*(int *)(DAT_004c632c + 0x20) <= *(int *)(DAT_004c632c + 0x28)) {
    return;
  }
  DAT_004c62a1 = 1;
  if (*(int *)(DAT_004c632c + 0x2c) != 0x300) {
    return;
  }
  FUN_0013b608();
  FUN_002ba2b8();
  FUN_0013b618();
  return;
}
