#include "addon/AocContentEnumeration.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern AocMain *g_aocMain;
AocHandleJob *_ZN21WindowOperationResultC1Eh(u32 job, u32 kind);
WindowStatusResult FUN_005004a8(u32 *parameters, AocEnumerationResult *enumeration,
                              AocContentRecord *records, s32 capacity, s32 offset);
u32 legacyResourceIdRemap(WindowStatusResult *result);
s32 objGetFlagBit1(const AocContentRecord *record);
s32 objGetFlagBit0(const AocContentRecord *record);

// Schedules the retry: wait `delay` ticks, then continue in `state`.
static void aocJobSetRetry(AocHandleJob *request, s32 delay, s32 state)
{
    request->delay = delay;
    request->state = state;
}

// Enumerate installed content, retaining enabled entries and counting flagged ones.
void aocEnumerateContentRecords(u32 job, AocContentEnumeration *content)
{
    AocHandleJob *request = _ZN21WindowOperationResultC1Eh(job, 0);
    AocContentRecord records[32];
    AocEnumerationResult enumeration;
    enumeration.count = 0;
    request->result = FUN_005004a8(content->parameters, &enumeration, records, 32, 0);
    if (nnResultIsFailure(legacyResourceIdRemap(&request->result))) {
        request->state = 100;
        if (legacyResourceIdRemap(&request->result) == 0xC9413915) {
            jyoucyuGetTableEntry(0);
            return;
        }
        aocJobSetRetry(request, (g_aocMain->flags & 0x100) == 0 ? 150 : 50, 106);
        return;
    }
    content->count = 0;
    content->flaggedCount = 0;
    s32 index = 0;
    if (enumeration.count > 0) {
        do {
            if (objGetFlagBit1(&records[index])) {
                content->entries[content->count++] = records[index];
                if (objGetFlagBit0(&records[index]))
                    ++content->flaggedCount;
            }
        } while (++index < enumeration.count);
    }
}
}
