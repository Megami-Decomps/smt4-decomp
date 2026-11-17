#include "common.h"
#include "gamedata/Table00Lookup.h"

namespace {

struct CandidateListView {
    u8 unk00[0x14]; // 0x00
    u16 candidateIds[6]; // 0x14
};

} // namespace

extern "C" {

CandidateListView* dataTable02GetRecordWithAocPackage(s32 index);

// Select the first flagged candidate, otherwise the candidate with the highest ranking value.
u32 dataSelectPrioritizedCandidate(s32 index)
{
    CandidateListView* candidates = dataTable02GetRecordWithAocPackage(index);
    if (candidates == 0) {
        return 0;
    }

    u16 selectedId = 0;
    for (s32 candidateIndex = 0; candidateIndex < 6; ++candidateIndex) {
        u16 candidateId = candidates->candidateIds[candidateIndex];
        if (candidateId == 0) {
            continue;
        }

        Table00RecordA* candidate = dataTable00FindById(candidateId);
        if (candidate == 0) {
            continue;
        }

        if ((candidate->level & 0x8000) != 0) {
            return candidateId;
        }

        if (selectedId == 0 ||
            (dataTable00FindById(selectedId)->level & 0x7fff) <
                (candidate->level & 0x7fff)) {
            selectedId = candidateId;
        }
    }

    return selectedId;
}

} // extern "C"
