/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c6dc` (_code @ 0x38c6dc, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_00301a08(unsigned int, int *, int *);
int scrSetResult(int);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
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


unsigned int FUN_0038c6dc(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  temp_v1 = btlResolveEntryChoice();
  temp_v2 = scrGetArg(2);
  temp_v7 = 0;
  if (temp_v2 == 0) {
    temp_v7 = 7;
  }
  else if (temp_v2 == 1) {
    temp_v7 = 8;
  }
  else if (temp_v2 == 2) {
    temp_v7 = 10;
  }
  else if (temp_v2 == 3) {
    temp_v7 = 0xb;
  }
  temp_v3 = scrGetArg(3);
  FUN_00301a08(temp_v1,&temp_v8,&temp_v9);
  temp_v2 = temp_v8;
  if (temp_v8 < temp_v9 + temp_v8) {
    do {
      temp_v4 = btlGetMainState();
      puVar8 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v2 * 0x408);
      temp_v5 = *puVar8;
      temp_v6 = puVar8[1];
      if (((((DAT_005702a0 & temp_v5) == 0 && (DAT_005702a4 & temp_v6) == 0) &&
           ((g_btlCandidateMasks & temp_v5) != 0 || (DAT_0057028c & temp_v6) != 0)) &&
          ((temp_v6 & DAT_005702b4) == 0 && (DAT_005702b0 & temp_v5) == 0)) &&
         ((*(unsigned short *)((int)puVar8 + 0x166) == temp_v0 && (puVar8[temp_v7 + 0x1d] == temp_v3)))) {
        scrSetResult(1);
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v8 + temp_v9);
  }
  temp_v2 = btlGetMainState();
  if (*(char *)(temp_v2 + 0x4cd1) != '\0') {
    temp_v2 = btlGetMainState();
    FUN_003eaf20();
    if (((temp_v2 != 0) && (*(unsigned short *)(temp_v2 + 0x166) == temp_v0)) &&
       (*(unsigned int *)(temp_v2 + temp_v7 * 4 + 0x74) == temp_v3)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
