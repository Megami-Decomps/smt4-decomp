/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ff00` (_code @ 0x25ff00, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00208a34. */
/* Supplied declaration required: FUN_00236038. */
extern int FUN_0023a5d8(void);
extern int FUN_002deb84(void);


unsigned char FUN_0025ff00(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    temp_v0 = FUN_00236038(0);
    temp_v2 = FUN_00236038(1);
    FUN_00208a34((int)temp_v0,temp_v2);
  }
  temp_v1 = FUN_0023a5d8();
  return temp_v1 != 0;
}
