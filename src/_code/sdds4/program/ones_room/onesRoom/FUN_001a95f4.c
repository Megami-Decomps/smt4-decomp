/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a95f4` (_code @ 0x1a95f4, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044d1c8; /* 0x44d1c8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00287990. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_002a755c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_001a95f4(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  temp_v1 = FUN_0019dfbc(*(unsigned int *)(temp_v0 + 8));
  if (temp_v1 != 2) {
    temp_v2 = 0;
  }
  else {
    FUN_00291be8(2);
    FUN_00291a5c();
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_002a755c();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 4) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 4) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(char *)(temp_v0 + 0x10) != '\0') {
      FUN_00287990(0);
      FUN_00287990(1);
      FUN_002c45b8(*DAT_0044d1c8,0);
    }
    temp_v2 = 0xffffffff;
  }
  return temp_v2;
}
