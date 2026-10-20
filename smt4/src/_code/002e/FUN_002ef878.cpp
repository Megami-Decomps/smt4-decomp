/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef878` (_code @ 0x2ef878, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103d48(void);

extern unsigned char DAT_0043e310; /* 0x43e310 */

/* Supplied declaration required: FUN_00103d48. */
extern int FUN_001041c8(void);
extern int FUN_001eb4fc(unsigned int, unsigned int);
extern int FUN_002103dc(unsigned int, unsigned int);


void FUN_002ef878(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  (*(unsigned char *)((unsigned char *)&DAT_0043e310 + 0x1)) = 1;
  if (*(char *)(param_1 + 1) == '\x01') {
    temp_v0 = FUN_001041c8();
    if (temp_v0 != 0) {
      FUN_00103d48();
    }
    temp_v0 = FUN_001eb4fc(6,0);
    if ((temp_v0 < 0) || (temp_v0 = FUN_002103dc(6,0), temp_v0 != 1 && temp_v0 != 2)) {
      (*(unsigned char *)((unsigned char *)&DAT_0043e310 + 0x1)) = 0;
    }
  }
  return;
}

} /* extern "C" */
