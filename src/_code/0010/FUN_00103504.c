/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103504` (_code @ 0x103504, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00103634; /* 0x103634 */
extern unsigned char LAB_0010363c; /* 0x10363c */
extern unsigned char DAT_00465000; /* 0x465000 */
extern unsigned int DAT_0046501c; /* 0x46501c */
extern int DAT_00465020; /* 0x465020 */
extern unsigned char DAT_00465024; /* 0x465024 */
extern unsigned int DAT_00465028; /* 0x465028 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0010fb18. */
/* Supplied declaration required: FUN_002c3dfc. */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c3fe4. */
/* Supplied declaration required: FUN_002c4040. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_002c52f8. */


void FUN_00103504(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int iStack_18;
  unsigned char temp_v1 [4];
  
  if (DAT_00465020 != 0) {
    puVar1 = temp_v1;
    iStack_18 = DAT_00465020;
    FUN_002c40f8(puVar1,&iStack_18,1,0,0,0);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    if (((unsigned int)puVar1 & 0x3ff) == 0x3fe) {
      FUN_0010fb18(0x10);
      software_interrupt(0xc);
      if (DAT_00465020 < 0) {
        FUN_002c526c();
      }
      DAT_00465000 = 1;
      FUN_002c4040(&DAT_00465028);
      iStack_18 = DAT_00465020;
      puVar1 = temp_v1;
      FUN_002c40f8(puVar1,&iStack_18,1,0,0xffffffff,0xffffffff);
      if ((int)puVar1 < 0) {
        FUN_002c526c();
      }
      DAT_00465024 = 1;
      FUN_002c3fe4(&DAT_00465020);
      if (DAT_00465020 != 0) {
        software_interrupt(0x23);
        DAT_00465020 = 0;
      }
      FUN_002c3f5c(DAT_0046501c);
    }
  }
  FUN_002c3dfc(&LAB_00103634);
  temp_v0 = FUN_002c3dfc(&LAB_0010363c);
  if (-1 < temp_v0) {
    return;
  }
  FUN_002c52f8();
  return;
}
