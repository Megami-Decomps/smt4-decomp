/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010db6c` (_code @ 0x10db6c, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned short DAT_004eaae0; /* 0x4eaae0 */
extern unsigned short DAT_004eaae2; /* 0x4eaae2 */
extern unsigned char DAT_004eaae4; /* 0x4eaae4 */
extern unsigned int DAT_004eaae8; /* 0x4eaae8 */

/* Supplied declaration required: FUN_0010a1d4. */
/* Supplied declaration required: FUN_0010a70c. */
/* Supplied declaration required: FUN_0010fbe8. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_0010db6c(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_0010fbe8();
  FUN_0010a1d4();
  FUN_0010a70c();
  FUN_002c4b30(&DAT_004eaae0,0x70);
  DAT_004eaae0 = 0;
  DAT_004eaae2 = 0x40;
  DAT_004eaae4 = 1;
  DAT_004eaae8 = 1;
  return 1;
}
