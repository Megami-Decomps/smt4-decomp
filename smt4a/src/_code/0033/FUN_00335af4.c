/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335af4` (_code @ 0x335af4, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */
extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003ee0c0. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fbc30. */
/* Supplied declaration required: FUN_004fc094. */


unsigned int FUN_00335af4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_0014aa78();
  FUN_003ee0c0();
  temp_v2 = FUN_004ee568(DAT_0057113c);
  temp_v4 = 0;
  temp_v3 = 0;
  do {
    puVar4 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v3 * 0x408);
    if (((*puVar4 & DAT_00570d78) != 0 || (puVar4[1] & DAT_00570d7c) != 0) &&
       ((puVar4[1] & DAT_00570d94) == 0 && (DAT_00570d90 & *puVar4) == 0)) {
      temp_v0 = temp_v4 * 0x14;
      temp_v5 = *(int *)(temp_v1 + 0x1ed4) + temp_v3 * 0x1d0;
      FUN_004fc094(temp_v0,temp_v2,0,temp_v5,0,puVar4[0x97],0xffffffff,0xffffffff,puVar4[0x96],
                   puVar4[0x97],0,0,1,0,0,0,0,0,0,0,1,0,1,1,0,1);
      FUN_004fb43c(temp_v0,temp_v2,0x10000cd,1,0,0,0);
      FUN_004fbc30(temp_v0 + 0x19,temp_v2,temp_v5,0);
      temp_v4 = temp_v4 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  return 1;
}
