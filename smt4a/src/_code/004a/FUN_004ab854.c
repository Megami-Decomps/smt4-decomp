/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab854` (_code @ 0x4ab854, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00280030. */
/* Supplied declaration required: FUN_00336da0. */
/* Supplied declaration required: FUN_0034f018. */
extern int FUN_00381198(int);


void FUN_004ab854(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057a9c8;
  temp_v1 = FUN_00381198(DAT_0057a9c8 + 8);
  if (temp_v1 != 0) {
    temp_v1 = temp_v0 + 0x24bc;
    FUN_00280030();
    if (temp_v1 != 0) {
      FUN_00336da0(temp_v0 + 8);
      FUN_0034f018(temp_v0 + 0x24bc);
      return;
    }
  }
  return;
}
