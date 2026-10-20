/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371100` (_code @ 0x371100, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001387c0(void);

extern unsigned char DAT_0057f6c8; /* 0x57f6c8 */

/* Supplied declaration required: FUN_001387c0. */
extern int FUN_00138ca4(void);
extern int FUN_002a1c04(unsigned int, unsigned int);
extern int FUN_002e0b5c(unsigned int, unsigned int);


void FUN_00371100(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  (*(unsigned char *)((unsigned char *)&DAT_0057f6c8 + 0x1)) = 1;
  if (*(char *)(param_1 + 1) == '\x01') {
    temp_v0 = FUN_00138ca4();
    if (temp_v0 != 0) {
      FUN_001387c0();
    }
    temp_v0 = FUN_002a1c04(6,0);
    if ((temp_v0 < 0) || (temp_v0 = FUN_002e0b5c(6,0), temp_v0 != 1 && temp_v0 != 2)) {
      (*(unsigned char *)((unsigned char *)&DAT_0057f6c8 + 0x1)) = 0;
    }
  }
  return;
}

} /* extern "C" */
