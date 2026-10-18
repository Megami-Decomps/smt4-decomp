/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae868` (_code @ 0x3ae868, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002251d4. */
/* Supplied declaration required: FUN_0028be40. */
/* Supplied declaration required: FUN_0028be50. */
/* Supplied declaration required: FUN_0028be84. */
extern int FUN_0028bebc(int);
/* Supplied declaration required: FUN_0033c6f8. */


void FUN_003ae868(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v0 = DAT_00439ca8;
  piVar3 = (int *)(DAT_00439ca8 + 0x7e38);
  if (*piVar3 == 9) {
    FUN_0033c6f8(*(unsigned int *)(DAT_00439ca8 + 0x7e20));
    FUN_002251d4(temp_v0 + 0x2460);
    *piVar3 = 7;
    temp_v0 = DAT_00439ca8;
    temp_v1 = FUN_0028bebc(DAT_00439ca8 + 8);
    if (temp_v1 != 0) {
      temp_v1 = temp_v0 + 0x2200;
      FUN_0028be84();
      if (temp_v1 != 0) {
        FUN_0028be50(temp_v0 + 8);
        FUN_0028be40(temp_v0 + 0x2200);
        return;
      }
    }
  }
  return;
}
