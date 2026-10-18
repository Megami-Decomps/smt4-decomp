/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108254` (_code @ 0x108254, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00116868(); /* 0x116868 */
extern int FUN_00118b64(); /* 0x118b64 */
extern int DAT_00465128; /* 0x465128 */
extern int DAT_00465138; /* 0x465138 */

/* Supplied declaration required: FUN_00115bd0. */
extern int FUN_002bffbc(unsigned int);


unsigned int FUN_00108254(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_00465138 != 0) && (temp_v0 = FUN_002bffbc(9), temp_v0 != 0)) {
    if (*(int *)(DAT_00465128 + 0x24) == 0x8800000) {
      temp_v1 = 0x14000000;
    }
    else {
      temp_v1 = 0x8800000;
    }
    *(unsigned int *)(DAT_00465128 + 0x24) = temp_v1;
  }
  FUN_00115bd0(0,FUN_00118b64,FUN_00116868);
  return 0;
}
