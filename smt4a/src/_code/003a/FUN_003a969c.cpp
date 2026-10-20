/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a969c` (_code @ 0x3a969c, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_002419c4(int, unsigned int, unsigned int, int, int, int);
int FUN_002980e4(int, int);
int FUN_004f5a78(void);
int FUN_004fb6f4(int, int, int, unsigned int, int, int, unsigned int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */
extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int g_btlEvent; /* 0x573898 */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002419c4. */
/* Supplied declaration required: FUN_002980e4. */
extern int isEntryUsable(unsigned int);
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004f5a78. */
/* Supplied declaration required: FUN_004fb6f4. */


void FUN_003a969c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = isEntryUsable(g_btlEvent);
  if (((temp_v2 == 0) || (temp_v2 = DAT_00573808, FUN_004f5a78(), temp_v2 != 0)) && (temp_v1 != 0)) {
    FUN_002980e4(temp_v1,1);
    temp_v2 = btlGetMainState();
    temp_v3 = btlUnitGet(g_btlScriptUnit);
    temp_v6 = 0;
    temp_v7 = *(unsigned int *)(DAT_00573808 + 0x1f54);
    temp_v5 = 0;
    do {
      temp_v4 = btlGetMainState();
      puVar6 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v5 * 0x408);
      if ((((puVar6[1] & DAT_005710ec) != 0 || (DAT_005710e8 & *puVar6) != 0) &&
          ((puVar6[1] & DAT_0057110c) == 0 && (DAT_00571108 & *puVar6) == 0)) &&
         (-1 < (short)puVar6[2])) {
        temp_v4 = *(int *)(temp_v2 + 0x1ed4) + (short)puVar6[2] * 0x1d0;
        FUN_004fb6f4(temp_v6 << 3,0,temp_v4,temp_v0,temp_v1,temp_v5 << 3,0xffffffff);
        temp_v4 = (int)*(short *)(temp_v4 + 0x6a);
        FUN_002419c4(temp_v1,temp_v3,temp_v7,temp_v6,temp_v4,temp_v4);
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
  }
  return;
}

} /* extern "C" */
