/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014fce8` (_code @ 0x14fce8, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 13 slot(s), 46 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern unsigned int DAT_0044e440; /* 0x44e440 */
extern unsigned int DAT_0044e444; /* 0x44e444 */
extern unsigned int DAT_004c642c; /* 0x4c642c */
extern unsigned char DAT_004c6430; /* 0x4c6430 */
extern unsigned int DAT_004c643c; /* 0x4c643c */
extern unsigned int DAT_004c6448; /* 0x4c6448 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00147cf8. */
/* Supplied declaration required: FUN_00147d5c. */
/* Supplied declaration required: FUN_00147ee8. */
/* Supplied declaration required: FUN_0014809c. */
/* Supplied declaration required: FUN_001481e4. */
/* Supplied declaration required: FUN_00153990. */
/* Supplied declaration required: FUN_002a2afc. */
/* Supplied declaration required: FUN_002a3438. */
/* Supplied declaration required: FUN_002b5820. */


unsigned int FUN_0014fce8(unsigned int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_5c;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  int iStack_34;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  FUN_00147cf8(&temp_v10);
  FUN_00147d5c(param_1,temp_v0,DAT_0044e440,DAT_0044e444);
  DAT_004c643c = temp_v11;
  DAT_004c6448 = temp_v12;
  DAT_004c6430 = temp_v10 != iStack_34;
  FUN_0014809c(&DAT_004c642c);
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v2 = DAT_0044e440;
  uStack_5c = DAT_0044e444;
  FUN_002b5820(param_1,2,&DAT_004c642c,0x20,DAT_0044e368);
  temp_v1 = 0;
  FUN_00147ee8(param_1,&temp_v1);
  FUN_00153990(&temp_v3,temp_v1,DAT_004c642c,3);
  FUN_002a2afc(temp_v5,&temp_v10,&DAT_004c642c);
  FUN_002a3438(&temp_v3);
  FUN_001481e4(&DAT_004c642c,0x20);
  FUN_002a3438(&temp_v3);
  if (temp_v8 != 0) {
    software_interrupt(0x23);
  }
  return 0;
}
