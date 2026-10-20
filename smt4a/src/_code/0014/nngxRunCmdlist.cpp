/* NON_MATCHING: romwright 0.5.0 decompilation of `nngxRunCmdlist` (_code @ 0x14a784, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b600(void);
int FUN_0018b610(void);
int FUN_001963e0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern unsigned char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */


void nngxRunCmdlist(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0061a50c == 0) {
    return;
  }
  if (DAT_0061a481 != '\0') {
    return;
  }
  DAT_0061a510 = DAT_0061a50c;
  DAT_0061a482 = 1;
  if (*(int *)(DAT_0061a50c + 0x20) <= *(int *)(DAT_0061a50c + 0x28)) {
    return;
  }
  DAT_0061a481 = 1;
  if (*(int *)(DAT_0061a50c + 0x2c) != 0x300) {
    return;
  }
  FUN_0018b600();
  FUN_001963e0();
  FUN_0018b610();
  return;
}

} /* extern "C" */
