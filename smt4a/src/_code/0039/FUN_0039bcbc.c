/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bcbc` (_code @ 0x39bcbc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a34(void);
/* Supplied declaration required: FUN_00272f54. */
/* Supplied declaration required: FUN_00338ba4. */
extern unsigned int FUN_00357ad8(void);
extern unsigned int FUN_00368390(void);
extern int MapMode_IsBusy(unsigned int);


unsigned int FUN_0039bcbc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00368390();
  temp_v1 = MapMode_IsBusy(temp_v0);
  if (temp_v1 != 0) {
    temp_v0 = FUN_00357ad8();
    FUN_00272f54(temp_v0);
  }
  else {
    temp_v1 = FUN_00164a34();
    if (temp_v1 != 0) {
      temp_v0 = FUN_00357ad8();
      FUN_00338ba4(temp_v0);
    }
  }
  return 1;
}
