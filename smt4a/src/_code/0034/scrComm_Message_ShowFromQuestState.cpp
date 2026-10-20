/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowFromQuestState` (_code @ 0x3456b4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int, unsigned int);
int QuestCenter_GetActiveEntry(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002ba85c(void);
extern unsigned int FUN_002deb84(void);
extern unsigned char FUN_00468858(void);
/* Supplied declaration required: QuestCenter_GetActiveEntry. */


void scrComm_Message_ShowFromQuestState(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  
  QuestCenter_GetActiveEntry();
  temp_v0 = FUN_00468858();
  temp_v1 = FUN_002ba85c();
  temp_v2 = FUN_00236038(0);
  temp_v3 = FUN_002deb84();
  FUN_0021bdac(temp_v1,temp_v2,temp_v3,temp_v0,0,0,unaff_r4);
  return;
}

} /* extern "C" */
