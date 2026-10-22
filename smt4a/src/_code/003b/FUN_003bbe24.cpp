/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbe24` (_code @ 0x3bbe24, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_00301a08(unsigned int, int [5], int *);
int scrSetResult(int);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int g_btlCandidateMasks; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
extern unsigned int btlResolveEntryChoice(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003bbe24(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6 [5];
  
  scrGetArg(0);
  temp_v0 = btlResolveEntryChoice();
  FUN_00301a08(temp_v0,temp_v6,&temp_v5);
  temp_v4 = temp_v6[0];
  if (temp_v6[0] < temp_v5 + temp_v6[0]) {
    do {
      temp_v1 = btlGetMainState();
      puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
      temp_v2 = *puVar5;
      temp_v3 = puVar5[1];
      if ((((DAT_005702a0 & temp_v2) == 0 && (DAT_005702a4 & temp_v3) == 0) &&
          ((temp_v3 & DAT_0057028c) != 0 || (temp_v2 & g_btlCandidateMasks) != 0)) &&
         ((temp_v2 & DAT_005702b0) == 0 && (temp_v3 & DAT_005702b4) == 0)) {
        temp_v2 = puVar5[0x2b];
        if ((int)temp_v2 < 1) {
          temp_v2 = puVar5[0x2d];
        }
        if (0 < (int)temp_v2) {
          scrSetResult(1);
          return 1;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v6[0] + temp_v5);
  }
  temp_v4 = btlGetMainState();
  if (*(char *)(temp_v4 + 0x4cd1) != '\0') {
    temp_v4 = btlGetMainState();
    FUN_003eaf20();
    if ((temp_v4 != 0) && ((0 < *(int *)(temp_v4 + 0xac) || (0 < *(int *)(temp_v4 + 0xb4))))) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
