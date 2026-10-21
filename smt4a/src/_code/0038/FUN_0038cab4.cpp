/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038cab4` (_code @ 0x38cab4, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_00301a08(unsigned int, int [8], int *);
int scrSetResult(int);
int FUN_003eaf20(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned int g_btlCandidateMasks; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0038cab4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  int temp_v7;
  int aiStack_34 [8];
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  scrGetArg(2);
  temp_v2 = FUN_00232388();
  FUN_00301a08(temp_v2,aiStack_34,&temp_v7);
  temp_v6 = aiStack_34[0];
  if (aiStack_34[0] < temp_v7 + aiStack_34[0]) {
    do {
      temp_v3 = btlGetMainState();
      puVar7 = (unsigned int *)(*(int *)(temp_v3 + 0x1ffc) + temp_v6 * 0x408);
      temp_v4 = *puVar7;
      temp_v5 = puVar7[1];
      if (((((DAT_005702a0 & temp_v4) == 0 && (DAT_005702a4 & temp_v5) == 0) &&
           ((g_btlCandidateMasks & temp_v4) != 0 || (DAT_0057028c & temp_v5) != 0)) &&
          ((temp_v4 & DAT_005702b0) == 0 && (temp_v5 & DAT_005702b4) == 0)) &&
         ((*(unsigned short *)((int)puVar7 + 0x166) == temp_v0 &&
          (temp_v1 <= (int)(unsigned int)*(unsigned short *)((int)puVar7 + 0x27a))))) {
        scrSetResult(1);
        return 1;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v7 + aiStack_34[0]);
  }
  temp_v6 = btlGetMainState();
  if (*(char *)(temp_v6 + 0x4cd1) != '\0') {
    temp_v6 = btlGetMainState();
    FUN_003eaf20();
    if (((temp_v6 != 0) && (*(unsigned short *)(temp_v6 + 0x166) == temp_v0)) &&
       (temp_v1 <= (int)(unsigned int)*(unsigned short *)(temp_v6 + 0x27a))) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
