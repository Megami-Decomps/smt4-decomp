/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8590` (_code @ 0x3b8590, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3328(void);
int FUN_004d88cc(void);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_004d88cc. */


unsigned int FUN_003b8590(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  if (*(int *)(temp_v0 + 0x2298) != 0) {
    FUN_004d88cc();
    FUN_002e3328();
    *(unsigned int *)(temp_v0 + 0x2298) = 0;
  }
  *(unsigned char *)(temp_v0 + 0x22b4) = 0;
  return 1;
}

} /* extern "C" */
