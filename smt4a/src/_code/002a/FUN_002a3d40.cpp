/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3d40` (_code @ 0x2a3d40, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0038a1d4(unsigned int, unsigned int, unsigned int);

extern int FUN_00162ea4(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0038a1d4. */


unsigned int FUN_002a3d40(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    return 1;
  }
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002deb84();
    if (temp_v0 != 9) {
      temp_v0 = FUN_002deb84();
      if (temp_v0 != 0x15) {
        return 0;
      }
      return 1;
    }
    temp_v1 = 0xc;
    temp_v2 = 0;
  }
  else {
    temp_v1 = 10;
    temp_v2 = 1;
  }
  FUN_0038a1d4(0xffffffff,temp_v1,temp_v2);
  return 0;
}

} /* extern "C" */
