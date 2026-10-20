/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c060` (_code @ 0x31c060, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7160(int, int);

extern int DAT_0043dfc0; /* 0x43dfc0 */

extern int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002b7160. */


unsigned int FUN_0031c060(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = *(int *)(DAT_0043dfc0 + 0x630);
  if (temp_v1 != 0) {
    if (temp_v0 != 0) {
      FUN_002b7160(temp_v1,1);
    }
    else {
      FUN_002b7160(temp_v1,0);
    }
  }
  return 1;
}

} /* extern "C" */
