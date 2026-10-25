/* NON_MATCHING: the minimal live flag arrays/spills use a 44-byte frame instead of retail's 76-byte frame; preserved-value address formation also differs. */
#include "gamedata/GameData.h"

struct RestoreSavePayload {
    /* 0x00000 */ u32 unk00000;
    /* 0x00004 */ f32 primaryValue;
    /* 0x00008 */ u8 unk00008[0x1f44c];
    /* 0x1f454 */ f32 preservedValue;
    /* 0x1f458 */ u8 unk1f458[0x56d1];
    /* 0x24b29 */ u8 preservedByte;
    /* 0x24b2a */ u8 unk24b2a[0x1fe];
};

struct RestoreSaveImage {
    u8 header[0x88];
    RestoreSavePayload data;
};

struct RestoreFlagIds {
    u32 ids[5];
};

extern "C" {
extern GameDataBlocks g_gameDataBlocks;
extern const RestoreFlagIds DAT_00404204;
s32 gameFlagIsSet(u32 flag);
void gameFlagSetValue(u32 flag, s32 value, s32 update);
void *FUN_0033f6d8(void);
void flagBlockCopyRecord(void *snapshot);
void asdMemFree(void *);
void __aeabi_memcpy4(void *, const void *, u32 bytes);

// Restore the work save while preserving the requested mode's flags and selected state.
void gameRestoreWorkSave(s32 mode)
{
    RestoreSaveImage *image = reinterpret_cast<RestoreSaveImage  *>(g_gameDataBlocks.saveBlock);
    RestoreSavePayload *data = &image->data;
    u8 preservedByte = data->preservedByte;
    f32 primaryValue = data->primaryValue;
    s32 flag556 = gameFlagIsSet(0x556);
    s32 flag557 = gameFlagIsSet(0x557);
    s32 flag421 = gameFlagIsSet(0x421);
    f32 preservedValue = data->preservedValue;
    void *snapshot = FUN_0033f6d8();
    RestoreFlagIds flags = DAT_00404204;
    u8 values[5];
    for (u32 index = 0; index < 5; ++index) {
        values[index] = gameFlagIsSet(flags.ids[index]);
    }
    __aeabi_memcpy4(data, g_gameDataBlocks.workBlock, sizeof(RestoreSavePayload));
    data->preservedValue = preservedValue;
    flagBlockCopyRecord(snapshot);
    if (mode == 1) {
        reinterpret_cast<RestoreSaveImage  *>(g_gameDataBlocks.saveBlock)->data.primaryValue = primaryValue;
        data->preservedByte = preservedByte;
        if (flag556) {
            gameFlagSetValue(0x556, 1, 1);
        }
        if (flag557) {
            gameFlagSetValue(0x557, 1, 1);
        }
        if (flag421) {
            gameFlagSetValue(0x421, 1, 1);
        }
    } else if (mode == 2) {
        for (u32 index = 0; index < 5; ++index) {
            if (values[index]) {
                gameFlagSetValue(flags.ids[index], 1, 1);
            }
        }
    }
    asdMemFree(snapshot);
}
}
