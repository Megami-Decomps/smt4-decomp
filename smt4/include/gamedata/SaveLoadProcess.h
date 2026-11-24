#pragma once
#include "common.h"
#include "gamedata/GameSaveData.h"
#include <stddef.h>

/* The eight setting bytes configGetSettings returns, copied into and out of a save image as one record. */
struct ConfigSettingsImage {
    u8 bytes[8];
};

/* The save image: the table block, the settings and the save data block. */
struct SaveFilePayloadIV {
    /* 0x00 */ u32 table[32];
    /* 0x80 */ ConfigSettingsImage settings;
    /* 0x88 */ u32 save[0x24d28 / 4];
};
typedef char SaveFilePayloadIVLayoutCheck[
    offsetof(SaveFilePayloadIV, settings) == 0x80 && offsetof(SaveFilePayloadIV, save) == 0x88 &&
    sizeof(SaveFilePayloadIV) == 0x24DB0 ? 1 : -1];

/* Records the active option in the save header on both the read and write paths. */
static void saveLoadWriteMetadataOption(GameSaveData *save, u8 option)
{
    save->metadata.option = option;
}

extern "C" {

void comWinSetText(const u8* text);

} /* extern "C" */

extern "C" {
u8 byte1IsZero(void);
}

extern "C" {
void FUN_001ecb54(s16 value);
}

extern "C" {
void FUN_00211868(s16 value, u8 flag);
}
