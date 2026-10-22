#include "common.h"

namespace {

struct CandidateListView {
    u8 unk00[0x14]; // 0x00
    u16 candidateIds[6]; // 0x14
};

struct Table00EntryView {
    u16 unk00; // 0x00
    u16 unk02; // 0x02: high-bit priority flag and low-15-bit ranking value
};

} // namespace

extern "C" {

CandidateListView* FUN_004bb80c(s32 index);
Table00EntryView* dataTable00FindById(u32 id);

// Select the first flagged candidate, otherwise the candidate with the highest ranking value.
u32 dataSelectPrioritizedCandidate(s32 index)
{
    CandidateListView* candidates = FUN_004bb80c(index);
    if (candidates == 0) {
        return 0;
    }

    u32 selectedId = 0;
    for (s32 candidateIndex = 0; candidateIndex < 6; ++candidateIndex) {
        u32 candidateId = candidates->candidateIds[candidateIndex];
        if (candidateId == 0) {
            continue;
        }

        Table00EntryView* candidate = dataTable00FindById(candidateId);
        if (candidate == 0) {
            continue;
        }

        if ((candidate->unk02 & 0x8000) != 0) {
            return candidateId;
        }

        if (selectedId == 0 ||
            (dataTable00FindById(selectedId)->unk02 & 0x7fff) <
                (candidate->unk02 & 0x7fff)) {
            selectedId = candidateId;
        }
    }

    return selectedId;
}

} // extern "C"
