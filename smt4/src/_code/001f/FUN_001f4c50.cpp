/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4c50` (_code @ 0x1f4c50, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1c34(void);
int FUN_002c5c04(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001f4cd0; /* 0x1f4cd0 */
extern unsigned char LAB_001f4cf0; /* 0x1f4cf0 */
extern unsigned char LAB_001f4d14; /* 0x1f4d14 */
extern unsigned char LAB_001f4d30; /* 0x1f4d30 */
extern unsigned char LAB_001f4d4c; /* 0x1f4d4c */
extern unsigned char LAB_001f4d68; /* 0x1f4d68 */
extern unsigned char LAB_001f4d88; /* 0x1f4d88 */
extern unsigned char LAB_001f4da0; /* 0x1f4da0 */
extern unsigned char LAB_001f4dc0; /* 0x1f4dc0 */
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

/* Supplied declaration required: FUN_001d1c34. */
/* Supplied declaration required: FUN_002c5c04. */


void FUN_001f4c50(void)

{
/* irregular: 2 native warning(s); review required */
  DAT_00435d9c = FUN_002c5c04(&LAB_001f4cd0);
  DAT_00435da0 = FUN_002c5c04(&LAB_001f4cf0);
  DAT_00435da4 = FUN_002c5c04(&LAB_001f4d14);
  DAT_00435da8 = FUN_002c5c04(&LAB_001f4d30);
  DAT_00435dac = FUN_002c5c04(&LAB_001f4d4c);
  DAT_00435db0 = FUN_002c5c04(&LAB_001f4d68);
  DAT_00435db4 = FUN_002c5c04(&LAB_001f4d88);
  DAT_00435db8 = FUN_002c5c04(&LAB_001f4da0);
  DAT_00435dbc = FUN_002c5c04(&LAB_001f4dc0);
  FUN_001d1c34();
  DAT_004341f8 = FUN_002c5c04(0x206248);
  return;
}

} /* extern "C" */
