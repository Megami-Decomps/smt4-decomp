/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001082b0` (_code @ 0x1082b0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00115cd0(...);

extern int FUN_00116968(...); /* 0x116968 */
extern int FUN_00118c38(...); /* 0x118c38 */
extern int DAT_00465128; /* 0x465128 */
extern int DAT_00465138; /* 0x465138 */

/* Supplied declaration required: FUN_00115cd0. */
extern int padIsButtonPressed(unsigned int);


unsigned int FUN_001082b0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_00465138 != 0) && (temp_v0 = padIsButtonPressed(9), temp_v0 != 0)) {
    if (*(int *)(DAT_00465128 + 0x24) == 0x8800000) {
      temp_v1 = 0x14000000;
    }
    else {
      temp_v1 = 0x8800000;
    }
    *(unsigned int *)(DAT_00465128 + 0x24) = temp_v1;
  }
  FUN_00115cd0(0,FUN_00118c38,FUN_00116968);
  return 0;
}

} /* extern "C" */
