/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300050` (_code @ 0x300050, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002505c0(...);
int FUN_00250720(void);
int FUN_002551ac(int, unsigned int, int, int, unsigned int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_00282924(int, unsigned int);
int btlGetMainState(void);

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
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned int g_btlScriptUnit; /* 0x43427c */

/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00250720. */
/* Supplied declaration required: FUN_002551ac. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: btlGetMainState. */
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_00300050(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlUnitGet(g_btlScriptUnit);
  temp_v3 = btlGetMainState();
  FUN_00282924(temp_v3,temp_v0);
  btlGetMainState();
  FUN_00250720();
  temp_v4 = btlGetMainState();
  FUN_002551ac(0,temp_v2,*(int *)(temp_v4 + 0x1e98) + *(short *)(temp_v3 + 8) * 0x114,0,temp_v1,0xffffffff,
               0xffffffff,(int)*(short *)(temp_v3 + 0x1b4),(int)*(short *)(temp_v3 + 0x1b6),0,0,0,0,1,0,
               0,0,0,0,1,0,1,1,0,1);
  FUN_002505c0(0,temp_v2,0x1000185,0,0,0,0);
  return 1;
}

} /* extern "C" */
