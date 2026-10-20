/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a3a0` (_code @ 0x31a3a0, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0036fad8(int);

extern int FUN_002deb84(void);
extern int FUN_002e58d8(void);
extern int FUN_0031cb5c(void);
/* Supplied declaration required: FUN_0036fad8. */


unsigned int FUN_0031a3a0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e58d8();
    if (temp_v0 == 0) {
      return 0;
    }
  }
  else {
    temp_v0 = FUN_0031cb5c();
    if (temp_v0 == 0) {
      FUN_0036fad8(1);
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
