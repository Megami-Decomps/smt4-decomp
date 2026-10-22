#include "gamedata/DevilRecordA.h"

struct BaseTextureRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 flags;
    /* 0x04 */ u8 unk04[0x88];
    /* 0x8c */ s16 textureIndex;
};

extern "C" {
bool gameFlagIsSet(u32 flag);
const BaseTextureRecord *dataTable00FindById(u32 id);
bool asdTMTexTableNodeIsLoaded(u32 table, s32 index);

bool devilIsTextureLoaded(s32 id, s32 resolve)
{
    u32 table = 15;
    s32 index = id;
    if (resolve) {
        if (id < 0) {
            index = gameFlagIsSet(17) ? 0 : 0x25e;
        } else {
            const DevilTableRecordA *record =
                (const DevilTableRecordA *)FUN_00184310((u16)id);
            if (!record) {
                return false;
            }
            const BaseTextureRecord *base = dataTable00FindById((u16)id);
            if (base->flags & 0x8000) {
                table = 25;
                index = base->textureIndex;
                if (index >= 0x9a) {
                    return false;
                }
            } else {
                index = record->unk9C + 1;
                if (index >= 0x277) {
                    return false;
                }
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(table, index);
}
}
