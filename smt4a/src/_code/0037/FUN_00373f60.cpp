/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373f60` (_code @ 0x373f60, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fb43c(int, unsigned int, int, int, int, int, int);
int FUN_004fb798(int, unsigned int, int, unsigned int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fb798. */


unsigned int FUN_00373f60(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  temp_v3 = btlUnitGet(g_btlScriptUnit);
  temp_v4 = 0;
  if (0 < temp_v2) {
    temp_v4 = 0x3be0;
  }
  temp_v2 = btlGetMainState();
  temp_v2 = *(int *)(temp_v2 + 0x1ffc);
  temp_v0 = (*(int *)(temp_v2 + 0x25c) * temp_v0) / 100;
  if (!((*(unsigned short *)(temp_v2 + 0x274) & 8) == 0 || temp_v0 < 2)) {
    temp_v0 = 1;
  }
  else if (temp_v0 == 0) {
    temp_v0 = -1;
  }
  temp_v1 = (*(int *)(temp_v2 + 0x264) * temp_v1) / 100;
  if (!((*(unsigned short *)(temp_v2 + 0x274) & 8) == 0 || temp_v1 < 2)) {
    temp_v1 = 1;
  }
  else if (temp_v1 == 0) {
    temp_v1 = -1;
  }
  temp_v2 = btlGetMainState();
  FUN_004fb798(0,temp_v3,0,*(unsigned int *)(temp_v2 + 0x1ed4),0,temp_v0,temp_v1,0xffffffff,temp_v4,0,0,9,0,0,1)
  ;
  FUN_004fb43c(0,temp_v3,0x1000263,0,0,0,0);
  return 1;
}

} /* extern "C" */
