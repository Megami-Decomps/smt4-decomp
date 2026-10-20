/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002005a0` (_code @ 0x2005a0, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003bbb54(unsigned int, int);

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbb54. */
extern int FUN_003bbca0(unsigned int);


unsigned int FUN_002005a0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0043de68;
  temp_v2 = 0;
  if ((DAT_0043de68 != 0 && param_1 != 0) &&
     (temp_v1 = FUN_003bbca0(*(unsigned int *)(DAT_0043de68 + 4)), temp_v1 != 0)) {
    FUN_003bbb54(*(unsigned int *)(temp_v0 + 4),param_1);
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
