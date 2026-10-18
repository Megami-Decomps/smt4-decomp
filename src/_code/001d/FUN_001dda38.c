/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dda38` (_code @ 0x1dda38, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001f61f4; /* 0x1f61f4 */
extern signed char DAT_0043dd21; /* 0x43dd21 */

/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_002b7f0a. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_001dda38(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0043dd21 < '\x01') {
    FUN_002c4e28(0x1e);
    FUN_002c5ab8(0x1e,0);
    FUN_002976ac(0x38);
    temp_v0 = FUN_002c0ec4(0x38,0);
    temp_v1 = FUN_002c0e9c();
    temp_v0 = FUN_002c0e4c(temp_v0);
    FUN_002b7f0a(temp_v1,temp_v0,0x72,&LAB_001f61f4);
  }
  DAT_0043dd21 = DAT_0043dd21 + '\x01';
  return;
}
