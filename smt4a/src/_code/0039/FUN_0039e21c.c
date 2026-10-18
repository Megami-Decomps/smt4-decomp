/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e21c` (_code @ 0x39e21c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003ee0c0. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fbc30. */
/* Supplied declaration required: FUN_004fc094. */


void FUN_0039e21c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = temp_v0;
  FUN_003eaf20();
  if (temp_v1 != 0) {
    temp_v3 = *(int *)(temp_v0 + 0x1ed4) + *(short *)(temp_v1 + 8) * 0x1d0;
    temp_v2 = FUN_004ee568(DAT_0057113c);
    FUN_003ee0c0(temp_v0);
    FUN_004fc094(0,temp_v2,0,temp_v3,0,*(unsigned int *)(temp_v1 + 0x25c),0xffffffff,0xffffffff,
                 *(unsigned int *)(temp_v1 + 600),*(unsigned int *)(temp_v1 + 0x25c),0,0,1,0,0,0,0,0,0,0,1,0
                 ,1,1,0,1);
    FUN_004fbc30(0x19,temp_v2,temp_v3,0);
  }
  return;
}
