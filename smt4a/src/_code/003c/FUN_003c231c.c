/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c231c` (_code @ 0x3c231c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_0014aa78. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003ee0c0. */
/* Supplied declaration required: FUN_003f0e20. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fc094. */


unsigned int FUN_003c231c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_004ee568(DAT_0057113c);
  temp_v3 = FUN_0014aa78();
  FUN_003f0e20(temp_v3,temp_v0);
  FUN_0014aa78();
  FUN_003ee0c0();
  temp_v4 = FUN_0014aa78();
  FUN_004fc094(0,temp_v2,0,*(int *)(temp_v4 + 0x1ed4) + *(short *)(temp_v3 + 8) * 0x1d0,0,temp_v1,0xffffffff
               ,0xffffffff,*(unsigned int *)(temp_v3 + 600),*(unsigned int *)(temp_v3 + 0x25c),0,0,0,0,1,0,0
               ,0,0,0,1,0,0,1,0,1);
  return 1;
}
