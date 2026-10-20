/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038af08` (_code @ 0x38af08, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249a08(void);
int FUN_00249ac4(unsigned int, unsigned int);
int FUN_002b9520(void);

extern unsigned int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_00249a08. */
/* Supplied declaration required: FUN_00249ac4. */
extern int FUN_002b950c(void);
/* Supplied declaration required: FUN_002b9520. */


unsigned int FUN_0038af08(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 != 0) {
    FUN_00249a08();
  }
  else {
    temp_v0 = FUN_002b950c();
    if (temp_v0 != 0) {
      FUN_002b9520();
    }
    else {
      FUN_00249ac4(DAT_005f15fc,DAT_005f1600);
    }
  }
  return 1;
}

} /* extern "C" */
