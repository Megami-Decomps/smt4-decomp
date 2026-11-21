/* NON_MATCHING: loop-2 break and final state-selection block layout now match retail; remaining: retail walks the entry vector via its address in r6 and uses ldm on texts.size() and ldrd on selectedId. */
#include "classes/Obj557c90.h"

extern "C" s32 gameFlagIsSet(u32 flag);
extern "C" const char g_textNotCheck[];   /* "not check" */

/* Takes the result record of a message and moves the job on: to state 5 when something was selected and the flag is clear, else to state 1. */
void Obj557c90::applyResult(const OnlineResultSource &source)
{
    record = OnlineResultRecord(source.record);
    if (!record.isValid()) {
        failed = 1;
        return;
    }
    for (Obj55a800Elements::iterator entry = jobs.elements.begin(); entry != jobs.elements.end(); ++entry) {
        u64 id = entry->id;
        if (id != 0) {
            Obj55aff4 text(g_textNotCheck);
            if (entry->texts.size() != 0) {
                text = entry->texts[0];
            }
        }
    }
    for (Obj55a800Elements::iterator entry = jobs.elements.begin(); entry != jobs.elements.end(); ++entry) {
        if (entry->id != 0) {
            selectedId = entry->id;
            if (selectedId != 0) {
                break;
            }
        }
    }
    if (gameFlagIsSet(0x580) != 0) {
        setState(1);
    } else if (selectedId == 0) {
        setState(1);
    } else {
        setState(5);
    }
}
