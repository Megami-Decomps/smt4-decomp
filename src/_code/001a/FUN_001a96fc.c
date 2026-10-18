/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a96fc` (_code @ 0x1a96fc, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044d1c8; /* 0x44d1c8 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_00287728. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_002a7218. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


unsigned int FUN_001a96fc(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = FUN_0019e0c0(*(unsigned int *)(temp_v0 + 8));
  if (temp_v1 != 2) {
    temp_v2 = 0;
  }
  else {
    FUN_00291944(2);
    FUN_002917b8();
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_002a7218();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 4) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 4) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(char *)(temp_v0 + 0x10) != '\0') {
      FUN_00287728(0);
      FUN_00287728(1);
      FUN_002c43b4(*DAT_0044d1c8,0);
    }
    temp_v2 = 0xffffffff;
  }
  return temp_v2;
}
