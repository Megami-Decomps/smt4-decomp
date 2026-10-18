/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aea88` (_code @ 0x3aea88, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002250e8. */
/* Supplied declaration required: FUN_0028c0a8. */
/* Supplied declaration required: FUN_0028c0b8. */
/* Supplied declaration required: FUN_0028c0ec. */
extern int FUN_0028c124(int);
/* Supplied declaration required: FUN_0033c92c. */


void FUN_003aea88(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v0 = DAT_00439ca8;
  piVar3 = (int *)(DAT_00439ca8 + 0x7e38);
  if (*piVar3 == 9) {
    FUN_0033c92c(*(unsigned int *)(DAT_00439ca8 + 0x7e20));
    FUN_002250e8(temp_v0 + 0x2460);
    *piVar3 = 7;
    temp_v0 = DAT_00439ca8;
    temp_v1 = FUN_0028c124(DAT_00439ca8 + 8);
    if (temp_v1 != 0) {
      temp_v1 = temp_v0 + 0x2200;
      FUN_0028c0ec();
      if (temp_v1 != 0) {
        FUN_0028c0b8(temp_v0 + 8);
        FUN_0028c0a8(temp_v0 + 0x2200);
        return;
      }
    }
  }
  return;
}
