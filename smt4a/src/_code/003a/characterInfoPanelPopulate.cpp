/* NON_MATCHING: equipment-label zero caching, panel register lifetimes, and portrait-release guard/loop layout differ from retail. */
#include "common.h"

struct CharacterInfoPanelA {
    void *title, *name;
    void *equipmentLabels[7];
    u16 equipmentIds[7];
    u16 unk32;
    void *description;
    void *demonName;
    s32 demonNameWidth;
    void *race;
    s32 raceWidth;
    void *specialItemName;
    s32 specialItemWidth;
    void *skillLabels[8];
    s32 skillWidths[8];
    s16 previewId;
    u16 unk92;
    u32 textureStates[9];
};
struct CharacterInfoRecordA {
    /* 0x00 */ u16 equipment[7];
    /* 0x0E */ char name[18];
    /* 0x20 */ u8 flags;
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 portrait;
    /* 0x23 */ u8 title;
    /* 0x24 */ u32 message;
    /* 0x28 */ u8 unk28[0xc];
    /* 0x34 */ u16 owner;
    /* 0x36 */ u16 unk36;
    /* 0x38 */ u16 specialItem;
    /* 0x3A */ u8 unk3a[0x16];
    /* 0x50 */ u16 skills[8];
    /* 0x60 */ u16 demon;
};
typedef char CharacterInfoPanelASizeCheck[sizeof(CharacterInfoPanelA) == 0xb8 ? 1 : -1];
typedef char CharacterInfoRecordASizeCheck[sizeof(CharacterInfoRecordA) == 0x64 ? 1 : -1];

extern "C" {
void FUN_001654f8(const char *source, char *destination, u32 flags);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void rt_aeabi_memclr(void *destination, u32 size);
void FUN_0023723c(void *label, u32 font, u32 color, s32 x, s32 y, const char *format, ...);
const char *dataTable4AGetEntry2C(u32 id);
const char *fileSectionGetData(void *file, u32 entry, u32 table);
const char *FUN_0015f858(u32 equipment, u32 flags);
const char *FUN_00180118(u32 demon);
void ARM_common_memcpy4_7(char *destination, const char *source);
const char *FUN_0014bf3c(u32 demon, u32 flags);
void FUN_001a90f0(char *destination, const char *source);
const char *FUN_0014bd84(u32 skill);
void textFormatBuffer(char *destination, const char *format, ...);
f32 FUN_00168594(const char *text, u32 font, f32 spacing);
s32 devilIsTextureLoaded(s32 id, u32 kind);
void FUN_0038b3f8(s32 id, u32 kind);
void FUN_00371c3c(s32 id, u32 kind);
void *FUN_0019acdc(u32 item, u32 flags);
u16 FUN_0036fcd0(void *item, u32 flags);
u32 FUN_0019e52c(u16 id);
u32 requestIdToCode(u32 id);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 code);
void asdTMTexTableReleaseNode(u32 table, u32 code);
}

static __forceinline void setCharacterEquipmentLabelA(CharacterInfoPanelA *panel, const CharacterInfoRecordA *record, u32 slot, char *buffer)
{
    if (record->equipment[slot]) {
        FUN_001654f8(FUN_0015f858(record->equipment[slot], 0), buffer, 0);
        FUN_0023723c(panel->equipmentLabels[slot], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[slot] = record->equipment[slot];
    } else {
        panel->equipmentIds[slot] = 0;
    }
}

static inline void clearCharacterPreviewA(CharacterInfoPanelA *panel)
{
    if (panel->previewId && devilIsTextureLoaded(panel->previewId, 1))
        FUN_0038b3f8(panel->previewId, 1);
    panel->previewId = 0;
}

extern "C" void characterInfoPanelPopulate(CharacterInfoPanelA *panel, const CharacterInfoRecordA *record, void *messages)
{
    if (panel == NULL || record == NULL)
        return;
    char buffer[128];
    FUN_001654f8(record->name, buffer, 0);
    FUN_0023723c(panel->name, 3, -1u, 0, 0, buffer);
    const char *title = dataTable4AGetEntry2C(record->title);
    if (record->flags & 2)
        __aeabi_memcpy4(buffer, "\x82\x63\x82\x85\x82\x96\x82\x85\x82\x8c\x82\x8f\x82\x90\x82\x85\x82\x92", 19);
    else if (title)
        FUN_001654f8(title, buffer, 0);
    else
        rt_aeabi_memclr(buffer, sizeof(buffer));
    FUN_0023723c(panel->title, 2, -1u, 0, 0, buffer);
    if (messages)
        FUN_0023723c(panel->description, 2, -1u, 0, 0, "%s", fileSectionGetData(messages, record->message, 0));
    else {
        buffer[0] = '\x81';
        buffer[1] = '\x40';
        buffer[2] = '\0';
        FUN_0023723c(panel->description, 2, -1u, 0, 0, buffer);
    }
    setCharacterEquipmentLabelA(panel, record, 0, buffer);
    setCharacterEquipmentLabelA(panel, record, 1, buffer);
    setCharacterEquipmentLabelA(panel, record, 2, buffer);
    setCharacterEquipmentLabelA(panel, record, 3, buffer);
    setCharacterEquipmentLabelA(panel, record, 4, buffer);
    setCharacterEquipmentLabelA(panel, record, 5, buffer);
    setCharacterEquipmentLabelA(panel, record, 6, buffer);

    if (record->owner)
        FUN_001654f8(FUN_00180118(record->demon), buffer, 0);
    else
        ARM_common_memcpy4_7(buffer, "\x81\x7c\x81\x7c\x81\x7c");
    FUN_0023723c(panel->demonName, 1, -1u, 0, 0, buffer);
    panel->demonNameWidth = (s32)FUN_00168594(buffer, 1, 0.0f);
    if (record->owner)
        FUN_001654f8(FUN_0014bf3c(record->demon, 0), buffer, 0);
    else
        FUN_001a90f0(buffer, "\x81\x7c\x81\x7c");
    FUN_0023723c(panel->race, 2, -1u, 0, 0, buffer);
    panel->raceWidth = (s32)FUN_00168594(buffer, 2, 0.0f);
    for (s32 slot = 0; slot < 8; ++slot) {
        if (record->skills[slot] && record->owner) {
            FUN_001654f8(FUN_0014bd84(record->skills[slot]), buffer, 0);
            FUN_0023723c(panel->skillLabels[slot], 1, -1u, 0, 0, buffer);
            panel->skillWidths[slot] = (s32)FUN_00168594(buffer, 1, 0.0f);
        } else {
            textFormatBuffer(buffer, "\x81\x7c\x81\x7c\x81\x7c");
            FUN_0023723c(panel->skillLabels[slot], 2, -1u, 0, 0, buffer);
            panel->skillWidths[slot] = (s32)FUN_00168594(buffer, 2, 0.0f);
        }
    }
    if (panel->previewId != record->demon) {
        if (record->demon) {
            if (record->owner) {
                if (panel->previewId && devilIsTextureLoaded(panel->previewId, 1))
                    FUN_0038b3f8(panel->previewId, 1);
                panel->previewId = record->demon;
                FUN_00371c3c(panel->previewId, 1);
            }
        } else {
            clearCharacterPreviewA(panel);
        }
    } else if (record->demon == 0) {
        clearCharacterPreviewA(panel);
    }
    if (record->specialItem) {
        void *item = FUN_0019acdc(record->specialItem, 0);
        u16 id = FUN_0036fcd0(item, 0);
        FUN_001654f8(FUN_00180118(FUN_0019e52c(id)), buffer, 0);
        FUN_0023723c(panel->specialItemName, 2, -1u, 0, 0, buffer);
        panel->specialItemWidth = (s32)FUN_00168594(buffer, 2, 0.0f);
    } else {
        rt_aeabi_memclr(buffer, sizeof(buffer));
        FUN_0023723c(panel->specialItemName, 2, -1u, 0, 0, buffer);
        panel->specialItemWidth = 0;
    }

    u32 defaultPortrait = 0;
    for (u32 portrait = 0; portrait < 9; ++portrait) {
        if (asdTMTexTableNodeIsLoaded(0x2e, requestIdToCode(portrait))) {
            defaultPortrait = portrait;
            break;
        }
    }
    if (!asdTMTexTableNodeIsLoaded(0x2e, requestIdToCode(record->portrait))) {
        if (asdTMTexTableNodeIsLoaded(0x2e, requestIdToCode(defaultPortrait)) && panel->textureStates[defaultPortrait] != 2) {
            asdTMTexTableReleaseNode(0x2e, requestIdToCode(defaultPortrait));
            panel->textureStates[defaultPortrait] = 0;
        }
        u32 portrait = record->portrait;
        if (!asdTMTexTableNodeIsLoaded(0x2e, requestIdToCode(portrait)) &&
            panel->textureStates[portrait] != 3 && panel->textureStates[portrait] != 2)
            panel->textureStates[portrait] = 1;
    }
}
