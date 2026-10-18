/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379ca0` (_code @ 0x379ca0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162ea4(void);
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: FUN_00212204. */
extern unsigned int FUN_00236038(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_00379ca0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00162ea4();
    if (temp_v0 != 0) {
      FUN_00212204();
      temp_v1 = 1;
    }
    else {
      temp_v0 = FUN_00163e84(0);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        return 1;
      }
    }
    return temp_v1;
  }
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    return 1;
  }
  temp_v1 = FUN_00236038(0);
  FUN_003d54f8(0,temp_v1);
  return 0;
}
