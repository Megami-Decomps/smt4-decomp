/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc010` (_code @ 0x2dc010, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_002dc010(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_00296cc8(1);
  temp_v3 = FUN_00296cc8(2);
  temp_v4 = SBORROW4(temp_v2,temp_v1);
  temp_v0 = temp_v2 - temp_v1;
  if (temp_v2 <= temp_v1) {
    temp_v4 = SBORROW4(temp_v1,temp_v3);
    temp_v0 = temp_v1 - temp_v3;
    temp_v2 = temp_v3;
  }
  FUN_0028dcb0(temp_v2 == temp_v1 || temp_v0 < 0 != temp_v4);
  return 1;
}
