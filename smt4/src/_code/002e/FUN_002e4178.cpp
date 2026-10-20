/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4178` (_code @ 0x2e4178, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002505c0(...);
int FUN_00250720(int);
int FUN_002551ac(int, unsigned int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned int g_btlScriptUnit; /* 0x43427c */

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00250720. */
/* Supplied declaration required: FUN_002551ac. */
extern unsigned int btlUnitGet(unsigned int);
extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);


unsigned int FUN_002e4178(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = btlGetMainState();
  temp_v3 = FUN_002499b4();
  temp_v0 = *(short *)(temp_v3 + 0x1b6);
  temp_v4 = btlUnitGet(g_btlScriptUnit);
  if (-1 < *(short *)(temp_v3 + 8)) {
    FUN_00250720(temp_v2);
    FUN_002551ac(0,temp_v4,*(int *)(temp_v2 + 0x1e98) + *(short *)(temp_v3 + 8) * 0x114,0,
                 (temp_v0 * temp_v1) / 100,0xffffffff,0xffffffff,(int)*(short *)(temp_v3 + 0x1b4),
                 (int)*(short *)(temp_v3 + 0x1b6),0,0,0,0,1,0,0,0,0,0,1,0,1,1,0,1);
    FUN_002505c0(0,temp_v4,0x10001b5,0,0,0,0);
  }
  return 1;
}

} /* extern "C" */
