/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_QuestCenter_FormatEntryText` (_code @ 0x223010, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0025921c. */
/* Supplied declaration required: FUN_0029ee6c. */
extern int QuestCenter_GetActiveEntry(void);


void scrComm_QuestCenter_FormatEntryText(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = QuestCenter_GetActiveEntry();
  FUN_0029ee6c(0,0x323232ff);
  temp_v1 = QuestCenter_GetActiveEntry();
  FUN_0025921c(temp_v0 + 0xdac,*(unsigned int *)(temp_v1 + 0xfc0));
  return;
}
