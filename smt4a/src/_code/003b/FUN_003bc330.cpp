/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc330` (_code @ 0x3bc330, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00221754(...);
int scrSetResult(int);
int FUN_003eaf20(void);

extern unsigned int g_btlCandidateMasks; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702a8; /* 0x5702a8 */
extern unsigned int DAT_005702ac; /* 0x5702ac */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00221754. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003bc330(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  temp_v7 = 0;
  temp_v6 = 0;
  do {
    puVar7 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v6 * 0x408);
    if (puVar7 != (unsigned int *)0x0) {
      temp_v3 = *puVar7;
      temp_v5 = puVar7[1];
      if ((((DAT_0057028c & temp_v5) != 0 || (g_btlCandidateMasks & temp_v3) != 0) &&
          ((DAT_005702b0 & temp_v3) == 0 && (DAT_005702b4 & temp_v5) == 0)) &&
         ((DAT_005702a0 & temp_v3) == 0 && (DAT_005702a4 & temp_v5) == 0)) {
        if (((temp_v3 & DAT_005702a8) == 0 && (temp_v5 & DAT_005702ac) == 0) &&
           (temp_v4 = FUN_00221754(puVar7,temp_v0,temp_v1), temp_v4 != 0)) {
          temp_v7 = temp_v7 + 1;
        }
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x6d);
  temp_v2 = btlGetMainState();
  if (*(char *)(temp_v2 + 0x4cd1) != '\0') {
    temp_v2 = btlGetMainState();
    FUN_003eaf20();
    if ((temp_v2 != 0) && (temp_v2 = FUN_00221754(), temp_v2 != 0)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(temp_v7);
  return 1;
}

} /* extern "C" */
