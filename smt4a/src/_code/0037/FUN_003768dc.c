/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003768dc` (_code @ 0x3768dc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_005e1f4c; /* 0x5e1f4c */
extern unsigned int DAT_005e1f50; /* 0x5e1f50 */
extern unsigned int DAT_005e1f54; /* 0x5e1f54 */
extern unsigned int DAT_005e1f58; /* 0x5e1f58 */
extern unsigned int DAT_005e1f5c; /* 0x5e1f5c */
extern unsigned int DAT_005e1f60; /* 0x5e1f60 */
extern unsigned int DAT_005e1f64; /* 0x5e1f64 */
extern unsigned int DAT_005e1f68; /* 0x5e1f68 */
extern unsigned int DAT_005e1f6c; /* 0x5e1f6c */

/* Supplied declaration required: FUN_00137ee0. */


void FUN_003768dc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  temp_v0 = DAT_005e1f50;
  temp_v1 = DAT_005e1f54;
  temp_v2 = DAT_005e1f58;
  uStack_1c = DAT_005e1f5c;
  uStack_18 = DAT_005e1f60;
  uStack_14 = DAT_005e1f64;
  uStack_10 = DAT_005e1f68;
  uStack_c = DAT_005e1f6c;
  DAT_005e1f4c = 0;
  FUN_00137ee0(4,&temp_v0,0x20);
                    /* WARNING: Treating indirect jump as return */
  return;
}
