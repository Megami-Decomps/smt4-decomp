/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a33c` (_code @ 0x31a33c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e5864. */
extern int FUN_002e589c(void);
extern int FUN_00348c00(void);
/* Supplied declaration required: FUN_0036f8bc. */


unsigned char FUN_0031a33c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e589c();
    if (temp_v0 == 0) {
      temp_v0 = FUN_00348c00();
      return temp_v0 != 0;
    }
    FUN_00236038(1);
    FUN_002e5864();
  }
  else {
    FUN_00236038(0);
    FUN_0036f8bc();
  }
  return 0;
}
