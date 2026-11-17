#ifndef QUEST_CENTER_QUESTTEXT_H
#define QUEST_CENTER_QUESTTEXT_H
#include "common.h"
extern "C" {
/* Existing quest title when description is zero, otherwise its description; NULL for a missing id. */
const char *FUN_002bcddc(u32 id, s32 description);
}
#endif
