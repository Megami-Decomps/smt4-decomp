/* NON_MATCHING: lookup exit control flow and persistent zero register differ; native stereo gains and six-choice compaction are restored. */
#include "shard/GameOptions.h"
#include "gamedata/DataTable.h"

namespace {
struct SupportVoiceRecord {
    u32 progress;
    u32 alternateProgress;
    u32 voices[3][6];
};
}
extern "C" {
GameOptions *gameGetSupportUnitData();
s32 gameGetOptionProgressStatus();
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
u32 randRange(u32 maximum);
u8 FUN_002bfdc4();
u32 FUN_002bfc24(u32 channel, u32 voice, s32 enabled, u8 kind, f32 left, f32 right);

// Choose a voice for the current story progress, excluding the previously played choice.
u32 FUN_00245a7c(s32 category, u32 excludedVoice)
{
    const SupportVoiceRecord *entries = static_cast<const SupportVoiceRecord *>(
        dataTableGetEntries(dataTableGet(0x3E, 0)));
    s32 count = dataTableGetCount(dataTableGet(0x3E, 0));
    u16 progress = gameGetSupportUnitData()->unk604;
    SupportVoiceRecord record;
    s32 index = 0;
    if (gameGetOptionProgressStatus() != 2) {
        for (; index < count; ++index) {
            __aeabi_memcpy4(&record, &entries[index], sizeof(record));
            if (record.progress == progress)
                break;
        }
    } else {
        progress = gameGetSupportUnitData()->unk46;
        for (; index < count; ++index) {
            __aeabi_memcpy4(&record, &entries[index], sizeof(record));
            if (record.alternateProgress == progress)
                break;
        }
    }
    if (index >= count)
        return 0;
    __aeabi_memcpy4(&record, &entries[index], sizeof(record));
    u32 candidates[6] = {};
    s32 excludedPosition = -1;
    s8 lastCandidate = -1;
    for (s32 i = 0; i < 6; ++i) {
        u32 voice = record.voices[category][i];
        if (voice == 0)
            break;
        if (voice != excludedVoice) {
            candidates[i] = voice;
            ++lastCandidate;
        } else {
            excludedPosition = i;
        }
    }
    if (lastCandidate < 0)
        return 0;
    if (excludedPosition >= 0) {
        for (s32 i = excludedPosition; i < 5; ++i)
            candidates[i] = candidates[i + 1];
        candidates[5] = 0;
    }
    s8 selected = static_cast<s8>(randRange(static_cast<u16>(lastCandidate)));
    u8 enabled = FUN_002bfdc4();
    FUN_002bfc24(0, candidates[selected], enabled, 4, 0.707f, 0.707f);
    return candidates[selected];
}
}
