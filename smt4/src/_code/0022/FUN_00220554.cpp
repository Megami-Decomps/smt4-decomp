/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220554` (_code @ 0x220554, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7160(unsigned int, int);

extern int DAT_0043dfc0; /* 0x43dfc0 */

/* Supplied declaration required: FUN_002b7160. */
extern int FUN_002bf244(unsigned int);


void FUN_00220554(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0043dfc0;
  if (DAT_0043dfc0 != 0) {
    temp_v2 = 1;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v3 + 0x630));
      if (temp_v1 != 0) {
        FUN_002b7160(*(unsigned int *)(temp_v3 + 0x630),1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return;
}

} /* extern "C" */
