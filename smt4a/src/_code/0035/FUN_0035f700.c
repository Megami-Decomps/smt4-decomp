/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f700` (_code @ 0x35f700, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern int FUN_00163e40(unsigned int);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003ee0c0. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fbc30. */
/* Supplied declaration required: FUN_004fc094. */


unsigned int FUN_0035f700(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0014aa78();
  temp_v2 = temp_v1;
  FUN_003eaf20();
  temp_v0 = (*(int *)(temp_v2 + 0x25c) * temp_v0) / 100;
  temp_v3 = FUN_004ee568(DAT_0057113c);
  temp_v6 = 0;
  temp_v4 = FUN_00163e40(*(unsigned int *)(temp_v1 + 0x40));
  temp_v5 = *(int *)(temp_v2 + 600);
  if (temp_v4 != 0) {
    temp_v6 = temp_v5 <= temp_v0;
  }
  else if (temp_v5 <= temp_v0) {
    temp_v0 = temp_v5 - 1;
  }
  if (-1 < *(short *)(temp_v2 + 8)) {
    FUN_003ee0c0(temp_v1);
    FUN_004fc094(0,temp_v3,0,*(int *)(temp_v1 + 0x1ed4) + *(short *)(temp_v2 + 8) * 0x1d0,0,temp_v0,
                 0xffffffff,0xffffffff,*(unsigned int *)(temp_v2 + 600),*(unsigned int *)(temp_v2 + 0x25c),0
                 ,0,temp_v6,0,1,0,0,0,0,0,1,0,1,1,0,1);
    FUN_004fb43c(0,temp_v3,0x1000257,0,0,0,0);
    if (temp_v6 != 0) {
      FUN_004fbc30(0x19,temp_v3,*(int *)(temp_v1 + 0x1ed4) + *(short *)(temp_v2 + 8) * 0x1d0,0);
    }
  }
  return 1;
}
