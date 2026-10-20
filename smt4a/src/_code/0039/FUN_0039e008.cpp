/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e008` (_code @ 0x39e008, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_002419c4(...);
int FUN_002980e4(int, int);
int btlUnitGet(unsigned int);
int FUN_004f5a78(void);
int FUN_004fb6f4(int, int, int, unsigned int, int, int, unsigned int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int g_btlEvent; /* 0x573898 */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002419c4. */
/* Supplied declaration required: FUN_002980e4. */
extern int chainCountIdUnflagged(unsigned int, unsigned int);
extern int isEntryUsable(unsigned int);
/* Supplied declaration required: btlUnitGet. */
/* Supplied declaration required: FUN_004f5a78. */
/* Supplied declaration required: FUN_004fb6f4. */


unsigned char FUN_0039e008(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = isEntryUsable(g_btlEvent);
  if ((temp_v2 != 0) && (temp_v2 = DAT_00573808, FUN_004f5a78(), temp_v2 == 0)) {
    return 0;
  }
  btlUnitGet(g_btlScriptUnit);
  temp_v2 = btlGetMainState();
  if (!(*(int *)(temp_v2 + 0xf0) == 0x167 || *(int *)(temp_v2 + 0xf0) == 0x168)) {
    if (temp_v1 != 0) {
      FUN_002980e4(temp_v1,1);
      temp_v3 = btlUnitGet(g_btlScriptUnit);
      temp_v2 = btlGetMainState();
      temp_v2 = *(int *)(temp_v2 + 0x1ed4);
      FUN_004fb6f4(0,0,temp_v2,temp_v0,temp_v1,0,0xffffffff);
      temp_v2 = (int)*(short *)(temp_v2 + 0x6a);
      FUN_002419c4(temp_v1,temp_v3,*(unsigned int *)(DAT_00573808 + 0x1f54),0,temp_v2,temp_v2);
    }
  }
  else if (temp_v1 != 0) {
    temp_v2 = btlUnitGet(g_btlScriptUnit);
    if (*(int *)(temp_v2 + 0x1250) != 0) {
      temp_v1 = chainCountIdUnflagged(g_btlActionReflect,0);
      if (temp_v1 < 1) {
        *(unsigned int *)(temp_v2 + 0x1250) = 0;
      }
      return temp_v1 < 1;
    }
    FUN_002980e4(temp_v1,1);
    temp_v2 = btlUnitGet(g_btlScriptUnit);
    temp_v4 = btlGetMainState();
    temp_v4 = *(int *)(temp_v4 + 0x1ed4);
    FUN_004fb6f4(0,0,temp_v4,temp_v0,temp_v1,0,0xffffffff);
    temp_v4 = (int)*(short *)(temp_v4 + 0x6a);
    FUN_002419c4(temp_v1,temp_v2,*(unsigned int *)(DAT_00573808 + 0x1f54),0,temp_v4,temp_v4);
    *(int *)(temp_v2 + 0x1250) = *(int *)(temp_v2 + 0x1250) + 1;
    return 0;
  }
  return 1;
}

} /* extern "C" */
