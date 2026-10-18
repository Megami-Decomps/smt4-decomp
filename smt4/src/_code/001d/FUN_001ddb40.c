/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ddb40` (_code @ 0x1ddb40, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001f62dc; /* 0x1f62dc */
extern signed char DAT_0043dd21; /* 0x43dd21 */

/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_002b7bca. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_001ddb40(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0043dd21 < '\x01') {
    FUN_002c4c2c(0x1e);
    FUN_002c58c8(0x1e,0);
    FUN_00297410(0x38);
    temp_v0 = FUN_002c0cec(0x38,0);
    temp_v1 = FUN_002c0cc4();
    temp_v0 = FUN_002c0c74(temp_v0);
    FUN_002b7bca(temp_v1,temp_v0,0x72,&LAB_001f62dc);
  }
  DAT_0043dd21 = DAT_0043dd21 + '\x01';
  return;
}
