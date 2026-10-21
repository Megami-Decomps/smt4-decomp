#include "common.h"
extern "C" {
struct QuestActiveEntry { u8 unk00[0xDAC]; char text[0x214]; u32 value; };
QuestActiveEntry *QuestCenter_GetActiveEntry(void);
void FUN_0029ee6c(u32 index,u32 color);
u32 FUN_0025921c(char *text,u32 value);
/* Select the quest text color and format the current entry's value. */
u32 scrComm_QuestCenter_FormatEntryText(void) { char *text=QuestCenter_GetActiveEntry()->text; FUN_0029ee6c(0,0x323232FF); return FUN_0025921c(text,QuestCenter_GetActiveEntry()->value); }
}
