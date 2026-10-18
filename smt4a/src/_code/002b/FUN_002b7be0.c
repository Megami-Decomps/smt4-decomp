/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7be0` (_code @ 0x2b7be0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00580ca0; /* 0x580ca0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_002b7be0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0x22;
  do {
    temp_v0 = *(int *)(DAT_00580ca0 + temp_v2 * 0x3c + 0xa8);
    temp_v1 = DAT_00580ca0;
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 4);
    }
    if (temp_v0 != 0 && temp_v1 != 0) {
      FUN_001aea28(DAT_0056fcc0);
    }
    temp_v2 = temp_v2 - 1;
  } while (-1 < temp_v2);
  return;
}
