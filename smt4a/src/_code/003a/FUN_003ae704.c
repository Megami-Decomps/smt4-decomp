/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae704` (_code @ 0x3ae704, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_003bb210. */


unsigned char FUN_003ae704(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_003bb210();
    FUN_002e5924(3);
    return 0;
  }
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 1) {
    FUN_00169ddc(0x1000222);
    FUN_002e5924(1);
    return 0;
  }
  temp_v0 = FUN_002deb84();
  return temp_v0 >= 3;
}
