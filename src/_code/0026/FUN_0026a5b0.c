/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a5b0` (_code @ 0x26a5b0, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_002bf030. */
extern int FUN_002c0b94(void);


unsigned int FUN_0026a5b0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043e190;
  temp_v1 = FUN_002c0b94();
  if (*(int *)(temp_v1 + 0x1f454) != 0) {
    FUN_002bf030(temp_v0 + 0x754,7);
  }
  return 1;
}
