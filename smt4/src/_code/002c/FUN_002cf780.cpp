/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf780` (_code @ 0x2cf780, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiQuestLoadResources(void);
int FUN_0028fe0c(int, int);
int timerStart(int, int);

extern int g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: uiQuestLoadResources. */
/* Supplied declaration required: FUN_0028fe0c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(void);
/* Supplied declaration required: timerStart. */


void FUN_002cf780(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x5c4) = 1;
  uiQuestLoadResources();
  temp_v1 = FUN_0029efc0();
  temp_v2 = FUN_0029efa8(temp_v0 + 0x5fc);
  FUN_0028fe0c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x6c4),1);
  timerStart(temp_v0 + 0x34,0);
  temp_v0 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v0 + 4) = 1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  return;
}

} /* extern "C" */
