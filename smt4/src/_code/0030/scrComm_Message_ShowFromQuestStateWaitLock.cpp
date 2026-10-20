/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowFromQuestStateWaitLock` (_code @ 0x30a014, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_002893d8(void);
int FUN_0028dc98(int);
int QuestCenter_GetActiveEntry(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */

extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
/* Supplied declaration required: FUN_002893d8. */
/* Supplied declaration required: FUN_0028dc98. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned char FUN_003821b8(void);
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
  temp_v1 = FUN_003821b8();
  FUN_0028dc98(0);
  temp_v2 = FUN_002893d8();
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  if (temp_v2 == 0) {
    if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) != 0) {
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x30) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x31) = 1;
  }
  temp_v3 = FUN_002865f8();
  temp_v4 = scrGetArg(0);
  temp_v5 = FUN_002893d8();
  FUN_002866b4(temp_v3,temp_v4,temp_v5,temp_v1,1,0);
  return;
}

} /* extern "C" */
