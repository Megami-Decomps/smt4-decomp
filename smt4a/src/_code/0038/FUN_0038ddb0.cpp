/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ddb0` (_code @ 0x38ddb0, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_004c8340(unsigned int, int, unsigned int, int, unsigned int);
int FUN_004fb43c(...);
int FUN_004fcffc(...);
int FUN_004fda78(int, int, unsigned int, unsigned int, int, int);
int FUN_004fdb18(int, unsigned int, unsigned int, int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
extern unsigned int FUN_004bf9a0(unsigned int);
/* Supplied declaration required: FUN_004c8340. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fcffc. */
/* Supplied declaration required: FUN_004fda78. */
/* Supplied declaration required: FUN_004fdb18. */


unsigned int FUN_0038ddb0(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  temp_v3 = btlUnitGet(g_btlScriptUnit);
  temp_v4 = btlGetMainState();
  if (temp_v1 != 0) {
    if (temp_v2 != 0) {
      temp_v5 = FUN_004bf9a0(temp_v0);
      temp_v6 = 0xffffffff;
      FUN_004c8340(0xffffffff,0,temp_v5,2,0xffffffff);
      if ((temp_v6 & 0x10000) != 0) {
        FUN_004fda78(0,0,temp_v3,*(unsigned int *)(temp_v4 + 0x1ed4),4,0);
        FUN_004fb43c(0,temp_v3,0x100028c,0,1,0,0);
        return 1;
      }
    }
    FUN_004fdb18(0,temp_v3,*(unsigned int *)(temp_v4 + 0x1ed4),1 << (temp_v0 & 0xff),1);
    if (temp_v0 != 4) {
      FUN_004fb43c(0,temp_v3,0x100025f,0,0,0,0);
    }
    else {
      FUN_004fb43c(0,temp_v3,0x1000275,0,0,0,0);
    }
  }
  else {
    FUN_004fcffc(0,temp_v3,*(unsigned int *)(temp_v4 + 0x1ed4),1 << (temp_v0 & 0xff));
  }
  return 1;
}

} /* extern "C" */
