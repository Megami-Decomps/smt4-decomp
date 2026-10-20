/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ca58` (_code @ 0x13ca58, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e444(...);

extern int FUN_0014f308(...); /* 0x14f308 */
extern int FUN_001522a0(...); /* 0x1522a0 */
extern int DAT_005b4030; /* 0x5b4030 */
extern int DAT_005b4040; /* 0x5b4040 */

/* Supplied declaration required: FUN_0014e444. */
extern int padButtonIsPressed(unsigned int);


unsigned int FUN_0013ca58(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_005b4040 != 0) && (temp_v0 = padButtonIsPressed(9), temp_v0 != 0)) {
    if (*(int *)(DAT_005b4030 + 0x24) == 0x8800000) {
      temp_v1 = 0x14000000;
    }
    else {
      temp_v1 = 0x8800000;
    }
    *(unsigned int *)(DAT_005b4030 + 0x24) = temp_v1;
  }
  FUN_0014e444(0,FUN_001522a0,FUN_0014f308);
  return 0;
}

} /* extern "C" */
