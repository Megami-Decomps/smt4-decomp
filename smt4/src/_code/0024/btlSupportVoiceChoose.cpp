/* NON_MATCHING: the record search keeps retail's found-index exit; retail lays the default-progress loop after the alternate one, keeps a zero in r9 from the second table lookup to the candidate clears (category in sl, one more saved register, 104-byte frame) where armcc here rematerialises it. */
#include "shard/GameOptions.h"
#include "util/Random.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

namespace {
struct SupportVoiceRecord {
    u32 progress;
    u32 alternateProgress;
    u32 voices[3][6];
};
}
extern "C" {
GameOptions *gameGetSupportUnitData();
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
u8 messageVoiceBankGet();
u32 voiceRequestPlayFile(u32 channel, u32 voice, s32 enabled, u8 kind, f32 left, f32 right);

// Choose a voice for the current story progress, excluding the previously played choice.
u32 btlSupportVoiceChoose(s32 category, u32 excludedVoice)
{
    const SupportVoiceRecord *entries = static_cast<const SupportVoiceRecord *>(
        dataTableGetEntries(dataTableGet(0x3E, 0)));
    s32 count = dataTableGetCount(dataTableGet(0x3E, 0));
    u16 progress = gameGetSupportUnitData()->unk604;
    SupportVoiceRecord record;
    s32 index = -1;
    s32 i;
    if (gameGetOptionProgressStatus() != 2) {
        for (i = 0; i < count; ++i) {
            __aeabi_memcpy4(&record, &entries[i], sizeof(record));
            if (record.progress == progress) {
                index = i;
                break;
            }
        }
    } else {
        progress = gameGetSupportUnitData()->unk46;
        for (i = 0; i < count; ++i) {
            __aeabi_memcpy4(&record, &entries[i], sizeof(record));
            if (record.alternateProgress == progress) {
                index = i;
                break;
            }
        }
    }
    if (index < 0)
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
    u8 enabled = messageVoiceBankGet();
    voiceRequestPlayFile(0, candidates[selected], enabled, 4, 0.707f, 0.707f);
    return candidates[selected];
}
}
