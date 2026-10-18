/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224d74` (_code @ 0x224d74, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_002508c0. */
/* Supplied declaration required: FUN_00250960. */
/* Supplied declaration required: FUN_002553ec. */
extern unsigned int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_00293c98. */


unsigned int FUN_00224d74(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00293c98();
  temp_v2 = *(unsigned int *)(temp_v0 + 0x1e98);
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,0);
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  FUN_00293c98();
  FUN_00250960();
  FUN_002553ec(0,temp_v1,temp_v2,0,(int)*(short *)(temp_v0 + 0x1b6),0xffffffff,0xffffffff,
               (int)*(short *)(temp_v0 + 0x1b4),(int)*(short *)(temp_v0 + 0x1b6),0,0,1,0,0,0,0,0,0,0,1,0
               ,1,1,0,1);
  FUN_00250800(0,temp_v1,0x1000178,0,0,0,0);
  FUN_002508c0(0x19,temp_v1,temp_v2,0);
  return 1;
}
