/* NON_MATCHING: retry delay/state registers, record-pointer registers and loop comparison operands differ. */
#include "addon/AocContentEnumeration.h"
#include "addon/aocMain.h"
#include "nn/Result.h"

extern "C" {
extern AocMain *g_aocMain;
AocHandleJob *_ZN21WindowOperationResultC1Eh(u32 job, u32 kind);
WindowStatusResult FUN_003df5d0(u32 *parameters, AocEnumerationResult *enumeration,
                              AocContentRecord *records, s32 capacity, s32 offset);
u32 legacyResourceIdRemap(WindowStatusResult *result);
void *jyoucyuGetTableEntry(s32 index);
s32 objGetFlagBit1(const AocContentRecord *record);
s32 objGetFlagBit0(const AocContentRecord *record);

// Enumerate installed content, retaining enabled entries and counting flagged ones.
void FUN_00388f3c(u32 job, AocContentEnumeration *content)
{
    AocHandleJob *request = _ZN21WindowOperationResultC1Eh(job, 0);
    AocContentRecord records[32];
    AocEnumerationResult enumeration;
    enumeration.count = 0;
    request->result = FUN_003df5d0(content->parameters, &enumeration, records, 32, 0);
    if (nnResultIsFailure(legacyResourceIdRemap(&request->result))) {
        request->state = 100;
        if (legacyResourceIdRemap(&request->result) == 0xC9413915) {
            jyoucyuGetTableEntry(0);
            return;
        }
        request->delay = (g_aocMain->flags & 0x100) == 0 ? 150 : 50;
        request->state = 106;
        return;
    }
    content->count = 0;
    content->flaggedCount = 0;
    for (s32 index = 0; index < enumeration.count; ++index) {
        const AocContentRecord *record = &records[index];
        if (objGetFlagBit1(record)) {
            content->entries[content->count++] = *record;
            if (objGetFlagBit0(record))
                ++content->flaggedCount;
        }
    }
}
}
