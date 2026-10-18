/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235d1c` (_code @ 0x235d1c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00588134; /* 0x588134 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00212204. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */


unsigned int FUN_00235d1c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = FUN_00224880(*(unsigned int *)(temp_v0 + 8));
  if (temp_v1 != 2) {
    temp_v2 = 0;
  }
  else {
    FUN_0035b304(2);
    FUN_0037b450();
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_0019c364();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 4) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 4) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(char *)(temp_v0 + 0x10) != '\0') {
      FUN_00212204(0);
      FUN_00212204(1);
      FUN_001631d0(*DAT_00588134,0);
    }
    temp_v2 = 0xffffffff;
  }
  return temp_v2;
}
