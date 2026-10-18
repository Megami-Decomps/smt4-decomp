/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed4e0` (_code @ 0x1ed4e0, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e090; /* 0x43e090 */

/* Supplied declaration required: FUN_0028975c. */
extern int FUN_00296cc8(unsigned int);
extern int FUN_002bf244(int);
extern unsigned int FUN_002c09d0(void);
/* Supplied declaration required: FUN_002cd878. */
/* Supplied declaration required: FUN_002d6658. */
/* Supplied declaration required: FUN_002ef6b8. */


unsigned char FUN_001ed4e0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  if (DAT_0043e090 == 0) {
    FUN_002d6658(0);
    FUN_002cd878();
    temp_v1 = temp_v0 + 0x800;
    temp_v2 = FUN_002c09d0();
    FUN_002ef6b8(temp_v0,temp_v2);
    DAT_0043e090 = temp_v0;
    FUN_0028975c(temp_v1,1);
  }
  temp_v0 = FUN_002bf244(DAT_0043e090);
  if (temp_v0 == 0) {
    DAT_0043e090 = 0;
  }
  return temp_v0 == 0;
}
