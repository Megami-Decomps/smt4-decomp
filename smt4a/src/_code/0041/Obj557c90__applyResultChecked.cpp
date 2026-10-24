/* NON_MATCHING: needs the renames in rename_S2.tsv (Obj55aff4 char* constructor, OnlineResultRecord members, __rw_throw, Obj557c90 members) to link; with them only register assignment differs (retail keeps `this` in r5 and walks the vectors through their addresses in r4/r6). */
#include "classes/Obj557c90.h"

extern "C" s32 gameFlagIsSet(u32 flag);
extern "C" const char g_textNotCheck[];   /* "not check" */

typedef std::vector<Obj55a800Element, AsdAllocator<Obj55a800Element> > Entries;

/* Takes the result record of a message, checks the stored results and moves the job to state 6. */
void Obj557c90::applyResultChecked(const OnlineResultSource &source)
{
    record = OnlineResultRecord(source.record);
    if (!record.isValid()) {
        failed = 1;
        return;
    }
    for (u32 i = 0; unkA0.size() != 0; ++i) {
        if (!results.at(i).isValid()) {
            results.at(i);
        }
    }
    for (Entries::iterator entry = entries.begin(); entry != entries.end(); ++entry) {
        u64 id = entry->id;
        if (id != 0) {
            Obj55aff4 text(g_textNotCheck);
            if (entry->texts.size() != 0) {
                text = entry->texts[0];
            }
        }
    }
    setState(6);
}
