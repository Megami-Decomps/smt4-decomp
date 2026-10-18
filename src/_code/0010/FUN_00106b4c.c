/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106b4c` (_code @ 0x106b4c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00106bac; /* 0x106bac */
extern unsigned int DAT_00433dc0; /* 0x433dc0 */
extern unsigned int DAT_0047e550; /* 0x47e550 */
extern unsigned char DAT_0047e554; /* 0x47e554 */
extern unsigned char DAT_00490e3c; /* 0x490e3c */

/* Supplied declaration required: FUN_0011bb60. */
/* Supplied declaration required: FUN_002c15d8. */
extern unsigned int FUN_002c32f0(unsigned int, unsigned int, unsigned int);


void FUN_00106b4c(void)

{
/* irregular: 2 native warning(s); review required */
  DAT_0047e550 = FUN_002c32f0(DAT_00433dc0,0,1);
  FUN_0011bb60(&DAT_0047e554,DAT_0047e550,0,0xffffffff);
  FUN_002c15d8(&DAT_0047e554,&DAT_00490e3c,&LAB_00106bac);
  FUN_002c15d8(&DAT_0047e554,0x490e44,0x106bb8);
  return;
}
