/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowFromQuestStateWaitLock` (_code @ 0x39a68c, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_002c76c0(int);
int scrGetCommandFrame(void);
int QuestCenter_GetActiveEntry(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_messageMain; /* 0x57f588 */

/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: scrGetCommandFrame. */
extern unsigned char FUN_00468858(void);
/* Supplied declaration required: QuestCenter_GetActiveEntry. */


void scrComm_Message_ShowFromQuestStateWaitLock(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  QuestCenter_GetActiveEntry();
  temp_v1 = FUN_00468858();
  FUN_002c76c0(0);
  temp_v2 = scrGetCommandFrame();
  temp_v0 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  if (temp_v2 == 0) {
    if ((*(int *)((unsigned char *)&g_messageMain + 0x8)) != 0) {
      *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x30) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x31) = 1;
  }
  temp_v3 = FUN_002ba85c();
  temp_v4 = scrGetArg(0);
  temp_v5 = scrGetCommandFrame();
  FUN_0021bdac(temp_v3,temp_v4,temp_v5,temp_v1,1,0);
  return;
}

} /* extern "C" */
