/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380628` (_code @ 0x380628, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003ee0c0(void);
int FUN_004fb43c(...);
int FUN_004fc094(int, unsigned int, int, unsigned int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

/* stack frame of void: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */

/* Supplied declaration required: btlGetMainState. */
extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_003ee0c0. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fc094. */


unsigned int FUN_00380628(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  btlGetMainState();
  FUN_003ee0c0();
  temp_v2 = btlGetMainState();
  if (*(int *)(*(int *)(temp_v2 + 0x1ffc) + 600) <= temp_v0) {
    temp_v0 = btlGetMainState();
    temp_v0 = *(int *)(*(int *)(temp_v0 + 0x1ffc) + 600) - 1;
  }
  temp_v2 = btlGetMainState();
  temp_v4 = *(unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + 0x25c);
  temp_v2 = btlGetMainState();
  temp_v3 = *(unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + 600);
  temp_v2 = btlGetMainState();
  FUN_004fc094(0,temp_v1,0,*(unsigned int *)(temp_v2 + 0x1ed4),0,temp_v0,0xffffffff,0xffffffff,temp_v3,temp_v4,0
               ,0,0,0,1,0,0,0,0,0,1,0,1,1,0,1);
  FUN_004fb43c(0,temp_v1,0x1000223,0,0,0,0);
  return 1;
}

} /* extern "C" */
