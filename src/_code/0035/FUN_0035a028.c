/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a028` (_code @ 0x35a028, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} void_stack;

extern int FUN_0013a170(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bbb2c. */


unsigned int FUN_0035a028(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [50];
  
  temp_v0 = FUN_0013a170(temp_v1,0xc0,0xc0000);
  if (temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x35a048);
  }
                    /* WARNING: Treating indirect jump as return */
  return (temp_v1[0] & 0x20) >> 5;
}
