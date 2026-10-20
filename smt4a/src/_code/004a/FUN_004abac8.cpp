/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004abac8` (_code @ 0x4abac8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00280030(void);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00280030. */
extern int menu32ModeIsNot5(int);


void FUN_004abac8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = menu32ModeIsNot5((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  if (temp_v0 != 0) {
    FUN_00280030();
  }
  return;
}

} /* extern "C" */
