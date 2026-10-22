/* NON_MATCHING: retail fills a zeroed 20-byte stack copy and then copies 0x12 bytes to the result (likely a class value with a zeroing constructor); this source builds the result in place. */
#include "common.h"

/* The first record of data table 9: default settings bytes. */
struct DefaultSettingsRecord {
    /* 0x0 */ u8 unk0[5];
    /* 0x5 */ u8 values[5];
    /* 0xA */ u8 wideA;
    /* 0xB */ u8 wideB;
    /* 0xC */ u8 valueC;
    /* 0xD */ u8 valueD;
};

/* Settings as returned by value. */
struct DefaultSettings {
    /* 0x00 */ u8 values[5];
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 wideA;
    /* 0x08 */ u16 wideB;
    /* 0x0A */ u8 valueC;
    /* 0x0B */ u8 valueD;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 valid;
    /* 0x11 */ u8 unk11;
};

extern "C" {
void *dataTableGet(u32 table, u32 option);
u32 dataTableGetCount(void *table);
DefaultSettingsRecord *dataTableGetEntries(void *table);

/* Returns the default settings from the first record of data table 9. */
DefaultSettings FUN_004cceb8(void)
{
    void *table = dataTableGet(9, 0);
    DefaultSettingsRecord *record;
    DefaultSettings settings;

    dataTableGetCount(table);
    record = dataTableGetEntries(table);
    settings = DefaultSettings();
    settings.wideA = record->wideA;
    settings.wideB = record->wideB;
    settings.values[0] = record->values[0];
    settings.values[1] = record->values[1];
    settings.values[2] = record->values[2];
    settings.values[3] = record->values[3];
    settings.values[4] = record->values[4];
    settings.valueC = record->valueC;
    settings.valid = 1;
    settings.valueD = record->valueD;
    return settings;
}

} /* extern "C" */
