/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1484` (_code @ 0x2c1484, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2138(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0031cb24. */
extern int FUN_0031cb5c(void);
/* Supplied declaration required: FUN_0039b8ac. */


unsigned int FUN_002c1484(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002c2138();
    temp_v1 = 0;
    if (temp_v0 != 0) {
      FUN_0039b8ac();
      temp_v1 = 1;
    }
  }
  else {
    temp_v0 = FUN_0031cb5c();
    if (temp_v0 != 0) {
      FUN_0031cb24(temp_v0);
      return 0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
