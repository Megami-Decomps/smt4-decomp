/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fec80` (_code @ 0x2fec80, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiQuestLoadResources(void);
int FUN_0028fe0c(unsigned int, int);
int timerStart(int, int);

extern int g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: uiQuestLoadResources. */
/* Supplied declaration required: FUN_0028fe0c. */
extern unsigned char FUN_00298f88(unsigned int);
/* Supplied declaration required: timerStart. */


void FUN_002fec80(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x5f2) = 1;
  temp_v2 = FUN_00298f88(param_1);
  *(unsigned char *)(temp_v0 + 0x5c4) = temp_v2;
  *(short *)(temp_v0 + 0x97e) = (short)param_1;
  uiQuestLoadResources();
  FUN_0028fe0c(param_1,1);
  timerStart(temp_v0 + 0x34,0);
  temp_v1 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v1 + 4) = 1;
  *(unsigned int *)(temp_v1 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0x1c;
  return;
}

} /* extern "C" */
