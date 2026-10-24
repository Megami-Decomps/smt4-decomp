/* NON_MATCHING: needs the renames in rename_S2.tsv (Obj55aff4 char* constructor, OnlineResultRecord members, Obj557c90 members) to link; with them only register assignment differs (retail walks the entry vector through its address in r6 and keeps `this` in r5) and the final state selection is laid out the other way round. */
#include "classes/Obj557c90.h"

extern "C" s32 gameFlagIsSet(u32 flag);
extern "C" const char g_textNotCheck[];   /* "not check" */

typedef std::vector<Obj55a800Element, AsdAllocator<Obj55a800Element> > Entries;

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
        u64 id = entry->id;
        if (id != 0) {
            selectedId = id;
            break;
        }
    }
    if (!gameFlagIsSet(0x580) && selectedId != 0) {
        setState(5);
    } else {
        setState(1);
    }
}
