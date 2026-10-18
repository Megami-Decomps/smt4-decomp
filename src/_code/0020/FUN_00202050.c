/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202050` (_code @ 0x202050, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002544e4(void);
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_00343c3c. */
/* Supplied declaration required: FUN_00343c64. */
/* Supplied declaration required: FUN_00343cac. */
/* Supplied declaration required: FUN_00343dd8. */


unsigned int FUN_00202050(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v0 = temp_v0 & 0xff;
  temp_v2 = FUN_002544e4();
  puVar5 = (unsigned int *)(temp_v2 + temp_v0 * 4);
  temp_v3 = *puVar5;
  if (temp_v1 < ~temp_v3) {
    temp_v3 = temp_v3 + temp_v1;
  }
  else {
    temp_v3 = 0xffffffff;
  }
  *puVar5 = temp_v3;
  if (temp_v0 != 2) {
    if (temp_v0 != 9) {
      if (temp_v0 != 0x13) {
        if (temp_v0 == 0x26) {
          FUN_00343c64(temp_v1);
        }
      }
      else {
        FUN_00343c3c(temp_v1);
      }
    }
    else {
      FUN_00343dd8(temp_v1);
    }
  }
  else {
    FUN_00343cac(temp_v1);
  }
  return 1;
}
