/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c4bc` (_code @ 0x31c4bc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a3cc8(void);
int FUN_0035c2b4(void);

extern int FUN_00239134(int);
extern int FUN_002835cc(void);
/* Supplied declaration required: FUN_002a3cc8. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0035c2b4. */


unsigned int FUN_0031c4bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002835cc();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00239134(temp_v0);
    if (temp_v0 == 0) {
      temp_v0 = FUN_002deb84();
      if (temp_v0 == 0) {
        FUN_002a3cc8();
      }
      return 0;
    }
    FUN_0035c2b4();
  }
  return 1;
}

} /* extern "C" */
