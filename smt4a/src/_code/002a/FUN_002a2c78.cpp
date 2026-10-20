/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2c78` (_code @ 0x2a2c7c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00227048(unsigned int, int);

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00227048. */


unsigned char FUN_002a2c78(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(char *)(temp_v0 + 0x13d) != '\0') {
    FUN_00227048(*(unsigned int *)(temp_v0 + 0xc),temp_v0 + 0x8c);
    efctSetSpeed();
  }
  return 0;
}

} /* extern "C" */
