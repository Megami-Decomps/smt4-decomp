/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4b68` (_code @ 0x1f4b68, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001f4be8; /* 0x1f4be8 */
extern unsigned char LAB_001f4c08; /* 0x1f4c08 */
extern unsigned char LAB_001f4c2c; /* 0x1f4c2c */
extern unsigned char LAB_001f4c48; /* 0x1f4c48 */
extern unsigned char LAB_001f4c64; /* 0x1f4c64 */
extern unsigned char LAB_001f4c80; /* 0x1f4c80 */
extern unsigned char LAB_001f4ca0; /* 0x1f4ca0 */
extern unsigned char LAB_001f4cb8; /* 0x1f4cb8 */
extern unsigned char LAB_001f4cd8; /* 0x1f4cd8 */
extern unsigned int DAT_004341f8; /* 0x4341f8 */
extern unsigned int DAT_00435d9c; /* 0x435d9c */
extern unsigned int DAT_00435da0; /* 0x435da0 */
extern unsigned int DAT_00435da4; /* 0x435da4 */
extern unsigned int DAT_00435da8; /* 0x435da8 */
extern unsigned int DAT_00435dac; /* 0x435dac */
extern unsigned int DAT_00435db0; /* 0x435db0 */
extern unsigned int DAT_00435db4; /* 0x435db4 */
extern unsigned int DAT_00435db8; /* 0x435db8 */
extern unsigned int DAT_00435dbc; /* 0x435dbc */

/* Supplied declaration required: FUN_001d1b34. */
/* Supplied declaration required: FUN_002c5e2c. */


void FUN_001f4b68(void)

{
/* irregular: 2 native warning(s); review required */
  DAT_00435d9c = FUN_002c5e2c(&LAB_001f4be8);
  DAT_00435da0 = FUN_002c5e2c(&LAB_001f4c08);
  DAT_00435da4 = FUN_002c5e2c(&LAB_001f4c2c);
  DAT_00435da8 = FUN_002c5e2c(&LAB_001f4c48);
  DAT_00435dac = FUN_002c5e2c(&LAB_001f4c64);
  DAT_00435db0 = FUN_002c5e2c(&LAB_001f4c80);
  DAT_00435db4 = FUN_002c5e2c(&LAB_001f4ca0);
  DAT_00435db8 = FUN_002c5e2c(&LAB_001f4cb8);
  DAT_00435dbc = FUN_002c5e2c(&LAB_001f4cd8);
  FUN_001d1b34();
  DAT_004341f8 = FUN_002c5e2c(0x2060e4);
  return;
}
