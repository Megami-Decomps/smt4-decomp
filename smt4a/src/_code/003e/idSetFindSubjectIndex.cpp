/* NON_MATCHING: result-set and requested-ID registers are swapped (retail r2/r1, compiled r1/r2); loop structure and operations otherwise match. */
#include "common.h"

struct ContentIdSubject {
    u8 unk00[0x6a]; // 0x00
    s16 id;          // 0x6a
};

struct ContentIdSet {
    u8 unk00[8]; // 0x00
    s16 ids[50];  // 0x08
};

extern "C" ContentIdSet* FUN_003f0e20(void* context, s32 id);

// Resolve the subject's ID set and return the matching slot, or -1.
extern "C" s32 idSetFindSubjectIndex(void* context, const ContentIdSubject* subject)
{
    ContentIdSet* set = FUN_003f0e20(context, subject->id);
    if (set != NULL) {
        for (s32 index = 0; index < 50; ++index) {
            if (subject->id == set->ids[index]) {
                return index;
            }
        }
    }
    return -1;
}
