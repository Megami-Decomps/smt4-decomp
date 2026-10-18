/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d40c` (_code @ 0x10d40c, 0x1bc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 9 slot(s), 27 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp1E; /* 0x1e: local_1e */
    unsigned char sp1F; /* 0x1f: local_1f */
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int DAT_004e23cc; /* 0x4e23cc */
extern unsigned int DAT_004e246c; /* 0x4e246c */
extern unsigned int DAT_004e24bc; /* 0x4e24bc */
extern unsigned int DAT_004e250c; /* 0x4e250c */
extern unsigned int DAT_004e255c; /* 0x4e255c */
extern unsigned int DAT_004e2598; /* 0x4e2598 */
extern unsigned char DAT_004e259c; /* 0x4e259c */
extern unsigned char DAT_004e259d; /* 0x4e259d */
extern unsigned int DAT_004e25d4; /* 0x4e25d4 */
extern unsigned char DAT_004e25d8; /* 0x4e25d8 */
extern unsigned char DAT_004e25d9; /* 0x4e25d9 */
extern unsigned int DAT_004e25e4; /* 0x4e25e4 */
extern unsigned char DAT_004e25e8; /* 0x4e25e8 */
extern unsigned char DAT_004e25e9; /* 0x4e25e9 */
extern unsigned char DAT_004e25ea; /* 0x4e25ea */
extern unsigned int DAT_004e25f4; /* 0x4e25f4 */
extern unsigned char DAT_004e25f8; /* 0x4e25f8 */
extern unsigned char DAT_004e25f9; /* 0x4e25f9 */
extern unsigned char DAT_004e25fa; /* 0x4e25fa */
extern unsigned char DAT_004e2634; /* 0x4e2634 */
extern unsigned char DAT_004e2636; /* 0x4e2636 */
extern unsigned char DAT_004e2637; /* 0x4e2637 */
extern unsigned char DAT_004e2670; /* 0x4e2670 */
extern unsigned char DAT_004e2672; /* 0x4e2672 */
extern unsigned char DAT_004e2673; /* 0x4e2673 */
extern unsigned char DAT_004e26ac; /* 0x4e26ac */
extern unsigned char DAT_004e26ae; /* 0x4e26ae */
extern unsigned char DAT_004e26af; /* 0x4e26af */
extern unsigned char DAT_004e26e8; /* 0x4e26e8 */
extern unsigned char DAT_004e26ea; /* 0x4e26ea */
extern unsigned char DAT_004e26eb; /* 0x4e26eb */
extern unsigned char DAT_004e3134; /* 0x4e3134 */
extern unsigned char DAT_004e3135; /* 0x4e3135 */
extern unsigned int DAT_004e3138; /* 0x4e3138 */
extern unsigned int DAT_004e313c; /* 0x4e313c */
extern unsigned int DAT_004e3140; /* 0x4e3140 */
extern unsigned int DAT_004e3144; /* 0x4e3144 */
extern unsigned int DAT_004e3148; /* 0x4e3148 */
extern unsigned int DAT_004e314c; /* 0x4e314c */
extern unsigned char DAT_004e3150; /* 0x4e3150 */
extern unsigned char DAT_004e3151; /* 0x4e3151 */
extern unsigned char DAT_004e3152; /* 0x4e3152 */
extern unsigned int DAT_004e3154; /* 0x4e3154 */
extern unsigned int DAT_004e3158; /* 0x4e3158 */
extern unsigned char DAT_004e3169; /* 0x4e3169 */
extern unsigned char DAT_004e316b; /* 0x4e316b */
extern unsigned char DAT_004e3184; /* 0x4e3184 */

extern int FUN_0011bd78(void);
/* Supplied declaration required: FUN_0011be44. */
extern int FUN_0011cb3c(void);
/* Supplied declaration required: FUN_0011cc34. */
/* Supplied declaration required: FUN_00120ac8. */
extern unsigned int FUN_00120d44(unsigned int *);
/* Supplied declaration required: FUN_0012a664. */
/* Supplied declaration required: FUN_002bce38. */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_002c54f0. */


void FUN_0010d40c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v7;
  unsigned int uStack_24;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  
  temp_v0 = FUN_0011bd78();
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = FUN_002bce48();
  }
  FUN_0011be44();
  if (temp_v1 < 0) {
    FUN_002bce48();
  }
  temp_v1 = FUN_0011cb3c();
  if (temp_v1 < 0) {
    FUN_002bce48();
  }
  FUN_002bce38();
  if (0 < param_1) {
    FUN_0012a664(0x1e);
    FUN_0011cc34(3);
  }
  temp_v6 = 0x4000;
  uStack_30 = 0x20000;
  uStack_2c = 3;
  temp_v7 = 0x4000;
  uStack_24 = 0x2000;
  temp_v4 = 4;
  temp_v8 = 1;
  temp_v9 = 0;
  temp_v10 = 1;
  temp_v11 = 0xffffffff;
  temp_v5 = (unsigned int)(0 < param_1);
  temp_v2 = FUN_00120d44((unsigned int *)&temp_v4);
  temp_v3 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,temp_v2,1);
  DAT_004e23cc = temp_v3;
  FUN_00120ac8(&temp_v4,temp_v3,temp_v2);
  DAT_004e246c = 0x40;
  DAT_004e24bc = 0x40;
  DAT_004e250c = 0x40;
  DAT_004e255c = 0x40;
  DAT_004e2598 = 0;
  DAT_004e259c = 0;
  DAT_004e259d = 0x40;
  DAT_004e25d4 = 0;
  DAT_004e25d8 = 0;
  DAT_004e25d9 = 0x40;
  DAT_004e25e4 = 0;
  DAT_004e25e8 = 0;
  DAT_004e25e9 = 0x40;
  DAT_004e25ea = 0;
  DAT_004e25f4 = 0;
  DAT_004e25f8 = 0;
  DAT_004e25f9 = 0x40;
  DAT_004e25fa = 0;
  DAT_004e2634 = 0x40;
  DAT_004e2636 = 0;
  DAT_004e2637 = 0;
  DAT_004e2670 = 0x40;
  DAT_004e2672 = 0;
  DAT_004e2673 = 0;
  DAT_004e26ac = 0x40;
  DAT_004e26ae = 0;
  DAT_004e26af = 0;
  DAT_004e26e8 = 0x40;
  DAT_004e26ea = 0;
  DAT_004e26eb = 0;
  DAT_004e3134 = 0;
  DAT_004e3135 = 0x40;
  DAT_004e313c = 0;
  DAT_004e3138 = 0;
  DAT_004e3144 = 0;
  DAT_004e3148 = 0;
  DAT_004e3140 = 0;
  DAT_004e314c = 0;
  DAT_004e3151 = 0;
  DAT_004e3150 = 0;
  DAT_004e3152 = 0;
  DAT_004e3169 = 0;
  DAT_004e316b = 0;
  DAT_004e3154 = 0;
  DAT_004e3158 = 0;
  DAT_004e3184 = 0;
  return;
}
