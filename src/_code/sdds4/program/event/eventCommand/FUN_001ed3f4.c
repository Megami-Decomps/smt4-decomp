/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed3f4` (_code @ 0x1ed3f4, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e090; /* 0x43e090 */

/* Supplied declaration required: FUN_002899c4. */
extern int FUN_00296f60(unsigned int);
extern int FUN_002bf41c(int);
extern unsigned int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_002cd7c8. */
/* Supplied declaration required: FUN_002d65e8. */
/* Supplied declaration required: FUN_002ef664. */


unsigned char FUN_001ed3f4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  if (DAT_0043e090 == 0) {
    FUN_002d65e8(0);
    FUN_002cd7c8();
    temp_v1 = temp_v0 + 0x800;
    temp_v2 = FUN_002c0ba8();
    FUN_002ef664(temp_v0,temp_v2);
    DAT_0043e090 = temp_v0;
    FUN_002899c4(temp_v1,1);
  }
  temp_v0 = FUN_002bf41c(DAT_0043e090);
  if (temp_v0 == 0) {
    DAT_0043e090 = 0;
  }
  return temp_v0 == 0;
}
