/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373684` (_code @ 0x373684, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_00301a08(unsigned int, int [7], int [3]);
int scrSetResult(int);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
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
extern int __aeabi_idivmod(int, int);


unsigned int FUN_00373684(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8 [3];
  int temp_v9 [7];
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  temp_v1 = btlResolveEntryChoice();
  temp_v6 = 0;
  temp_v7 = 0;
  FUN_00301a08(temp_v1,temp_v9,temp_v8);
  temp_v5 = temp_v9[0];
  if (temp_v9[0] < temp_v8[0] + temp_v9[0]) {
    do {
      temp_v2 = btlGetMainState();
      puVar6 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408);
      temp_v3 = *puVar6;
      temp_v4 = puVar6[1];
      if ((((DAT_005702a0 & temp_v3) == 0 && (DAT_005702a4 & temp_v4) == 0) &&
          ((g_btlCandidateMasks & temp_v3) != 0 || (DAT_0057028c & temp_v4) != 0)) &&
         ((temp_v3 & DAT_005702b0) == 0 && (temp_v4 & DAT_005702b4) == 0)) {
        temp_v7 = temp_v7 + 1;
        temp_v6 = temp_v6 + (unsigned int)*(unsigned short *)((int)puVar6 + 0x27a);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v9[0] + temp_v8[0]);
  }
  temp_v5 = btlGetMainState();
  if (*(char *)(temp_v5 + 0x4cd1) != '\0') {
    temp_v5 = btlGetMainState();
    FUN_003eaf20();
    if (temp_v5 != 0) {
      temp_v7 = temp_v7 + 1;
      temp_v6 = temp_v6 + (unsigned int)*(unsigned short *)(temp_v5 + 0x27a);
    }
  }
  temp_v5 = __aeabi_idivmod(temp_v6,temp_v7);
  scrSetResult(temp_v0 <= temp_v5);
  return 1;
}

} /* extern "C" */
