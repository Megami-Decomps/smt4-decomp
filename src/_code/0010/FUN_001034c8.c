/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001034c8` (_code @ 0x1034c8, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_00465000; /* 0x465000 */
extern unsigned int DAT_00465018; /* 0x465018 */
extern int DAT_0046501c; /* 0x46501c */
extern unsigned char DAT_00465020; /* 0x465020 */
extern unsigned int DAT_00465024; /* 0x465024 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0010fa24. */
/* Supplied declaration required: FUN_002c4000. */
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c4244. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_001034c8(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  int iStack_18;
  unsigned char temp_v0 [4];
  
  if (DAT_0046501c != 0) {
    puVar1 = temp_v0;
    iStack_18 = DAT_0046501c;
    FUN_002c42fc(puVar1,&iStack_18,1,0,0,0);
    if ((int)puVar1 < 0) {
      FUN_002c5468();
    }
    if (((unsigned int)puVar1 & 0x3ff) == 0x3fe) {
      FUN_0010fa24(0x10);
      software_interrupt(0xc);
      if (DAT_0046501c < 0) {
        FUN_002c5468();
      }
      DAT_00465000 = 1;
      FUN_002c4244(&DAT_00465024);
      iStack_18 = DAT_0046501c;
      puVar1 = temp_v0;
      FUN_002c42fc(puVar1,&iStack_18,1,0,0xffffffff,0xffffffff);
      if ((int)puVar1 < 0) {
        FUN_002c5468();
      }
      DAT_00465020 = 1;
      FUN_002c41e8(&DAT_0046501c);
      if (DAT_0046501c != 0) {
        software_interrupt(0x23);
        DAT_0046501c = 0;
      }
      FUN_002c4160(DAT_00465018);
    }
  }
  FUN_002c4000(0x1035cc);
  return;
}
