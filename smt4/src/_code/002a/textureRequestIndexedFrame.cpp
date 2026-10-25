#include "shard/W6_W6Match8_TextureSwap.h"

struct ContentRecord;
struct TextureFrameRecord {
    u16 unk00;
    u16 frames[3][3];
};

extern "C" {
TextureSwap *jobGetWork(u32 job);
ContentRecord *aocContentGetIndexedRecord(const ContentRecordKey *key, u32 index);
void uiSpriteReplaceTextureEntry(TextureSwap *work, s32 entry, s32 transition);

void textureRequestIndexedFrame(u32 job, s32 index, s32 row, s32 column, s32 transition)
{
    TextureSwap *work = jobGetWork(job);
    if (index <= 0) {
        index = 1;
    }
    s32 entry = 0;
    if (row > 0 && column > 0) {
        const TextureFrameRecord *record =
            (const TextureFrameRecord *)aocContentGetIndexedRecord(work->content.key, index);
        entry = record->frames[row - 1][column - 1];
    }
    uiSpriteReplaceTextureEntry(work, entry, transition);
}
}
