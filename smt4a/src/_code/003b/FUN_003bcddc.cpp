/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcddc` (_code @ 0x3bcddc, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_003ee0c0(void);
int FUN_004fc094(int, unsigned int, int, unsigned int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

/* stack frame of void: 19 slot(s), 76 byte(s) */
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
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003ee0c0. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fc094. */


unsigned int FUN_003bcddc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_004ee568(DAT_0057113c);
  FUN_0014aa78();
  FUN_003ee0c0();
  temp_v2 = FUN_0014aa78();
  if (*(int *)(*(int *)(temp_v2 + 0x1ffc) + 600) <= temp_v0) {
    temp_v0 = FUN_0014aa78();
    temp_v0 = *(int *)(*(int *)(temp_v0 + 0x1ffc) + 600) - 1;
  }
  temp_v2 = FUN_0014aa78();
  temp_v3 = *(unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + 0x25c);
  temp_v2 = FUN_0014aa78();
  temp_v4 = *(unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + 600);
  temp_v2 = FUN_0014aa78();
  FUN_004fc094(0,temp_v1,0,*(unsigned int *)(temp_v2 + 0x1ed4),0,temp_v0,0xffffffff,0xffffffff,temp_v4,temp_v3,0
               ,0,0,0,1,0,0,0,0,0,1,0,1,1,0,1);
  return 1;
}

} /* extern "C" */
