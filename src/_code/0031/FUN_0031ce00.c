/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ce00` (_code @ 0x31ce00, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00297688(void);


unsigned int FUN_0031ce00(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xffffffff;
  temp_v0 = FUN_00297688();
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 1;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 2;
  }
  FUN_0028df54(temp_v1);
  return 1;
}
