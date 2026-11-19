/* NON_MATCHING: panel/record register allocation, equipment-label zero caching, and preview-reset branch sharing differ from retail. */
#include <string.h>
#include "common.h"
#include "runtime/Stdio.h"
#include "code/Code0029.h"
#include "addon/LookupRecord.h"

struct CharacterInfoPanel {
    void *title, *name;
    void *equipmentLabels[7];
    u16 equipmentIds[7];
    u16 unk32;
    void *description;
    void *demonName;
    s32 demonNameWidth;
    void *race;
    s32 raceWidth;
    void *skillLabels[8];
    s32 skillWidths[8];
    s16 previewId;
    u16 unk8a;
    void *previewDescription;
    s32 previewDescriptionWidth;
};
struct CharacterInfoRecord {
    /* 0x00 */ u16 equipment[7];
    /* 0x0E */ char name[18];
    /* 0x20 */ u8 flags;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ u32 message;
    /* 0x28 */ u8 unk28[0x10];
    /* 0x38 */ u16 skills[8];
    /* 0x48 */ u16 demon;
};
typedef char CharacterInfoPanelSizeCheck[sizeof(CharacterInfoPanel) == 0x94 ? 1 : -1];
typedef char CharacterInfoRecordSizeCheck[sizeof(CharacterInfoRecord) == 0x4c ? 1 : -1];

extern "C" {
char *libc_strcpy(char *destination, const char *source);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void asdTextDrawFormatted(void *label, u32 font, u32 color, s32 x, s32 y, const char *format, ...);
const char *fileSectionGetData(void *file, u32 entry, u32 table);
const char *dataFindKindRecordWithAocOverrides(u32 id, u32 flags);
void textConvertToGlyphPairs(const char *source, char *destination);
const char *demonGetRaceLabel(u32 demon, u32 flags);
void FUN_002a7c80(char *destination, const char *source);
const char *aocIndexValueOrDefault(u32 skill);
f32 fontMeasureTextWidth(const char *text, u32 font, f32 spacing); // declcheck: local (the shared declaration in ui/AnimatedMessage.h does not compile here: cannot overload functions distinguished by return type alone)
void statusBustUpPortraitRelease(s32 id, u32 kind);
void statusBustUpPortraitAcquire(s32 id, u32 kind);
extern const char DAT_00402898[];
}

static __forceinline void setCharacterEquipmentLabel(CharacterInfoPanel *panel, const CharacterInfoRecord *record, u32 slot, char *buffer)
{
    if (record->equipment[slot]) {
        textConvertToGlyphPairs(dataFindKindRecordWithAocOverrides(record->equipment[slot], 0), buffer);
        asdTextDrawFormatted(panel->equipmentLabels[slot], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[slot] = record->equipment[slot];
    } else {
        panel->equipmentIds[slot] = 0;
    }
}

static inline void clearCharacterPreview(CharacterInfoPanel *panel)
{
    if (panel->previewId && FUN_00293f10(panel->previewId, 1))
        statusBustUpPortraitRelease(panel->previewId, 1);
    panel->previewId = 0;
}

extern "C" void characterInfoPanelPopulate(CharacterInfoPanel *panel, const CharacterInfoRecord *record, void *messages)
{
    if (panel == NULL || record == NULL)
        return;
    char buffer[128];
    libc_strcpy(buffer, record->name);
    asdTextDrawFormatted(panel->name, 4, -1u, 0, 0, buffer);
    if (record->flags & 2)
        __aeabi_memcpy4(buffer, "\x82\x63\x82\x85\x82\x96\x82\x85\x82\x8c\x82\x8f\x82\x90\x82\x85\x82\x92", 19);
    else
        __aeabi_memcpy4(buffer, "\x82\x72\x82\x81\x82\x8d\x82\x95\x82\x92\x82\x81\x82\x89", 15);
    asdTextDrawFormatted(panel->title, 4, -1u, 0, 0, buffer);
    if (messages)
        asdTextDrawFormatted(panel->description, 2, -1u, 0, 0, "%s", fileSectionGetData(messages, record->message, 0));
    else {
        buffer[0] = '\x81';
        buffer[1] = '\x40';
        buffer[2] = '\0';
        asdTextDrawFormatted(panel->description, 2, -1u, 0, 0, buffer);
    }

    setCharacterEquipmentLabel(panel, record, 0, buffer);
    setCharacterEquipmentLabel(panel, record, 1, buffer);
    setCharacterEquipmentLabel(panel, record, 2, buffer);
    setCharacterEquipmentLabel(panel, record, 3, buffer);
    setCharacterEquipmentLabel(panel, record, 4, buffer);
    setCharacterEquipmentLabel(panel, record, 5, buffer);
    setCharacterEquipmentLabel(panel, record, 6, buffer);

    if (record->demon)
        textConvertToGlyphPairs(reinterpret_cast<const char *>(dataTable01FindByIdWithAoc(record->demon)), buffer);
    else
        strcpy(buffer, "\x81\x7c\x81\x7c\x81\x7c");
    asdTextDrawFormatted(panel->demonName, 1, -1u, 0, 0, buffer);
    panel->demonNameWidth = (s32)fontMeasureTextWidth(buffer, 1, 0.0f);
    if (record->demon)
        textConvertToGlyphPairs(demonGetRaceLabel(record->demon, 0), buffer);
    else
        FUN_002a7c80(buffer, "\x81\x7c\x81\x7c");
    asdTextDrawFormatted(panel->race, 2, -1u, 0, 0, buffer);
    panel->raceWidth = (s32)fontMeasureTextWidth(buffer, 2, 0.0f);

    for (s32 slot = 0; slot < 8; ++slot) {
        if (record->skills[slot]) {
            textConvertToGlyphPairs(aocIndexValueOrDefault(record->skills[slot]), buffer);
            asdTextDrawFormatted(panel->skillLabels[slot], 1, -1u, 0, 0, buffer);
            panel->skillWidths[slot] = (s32)fontMeasureTextWidth(buffer, 1, 0.0f);
        } else {
            __2sprintf(buffer, "\x81\x7c\x81\x7c\x81\x7c");
            asdTextDrawFormatted(panel->skillLabels[slot], 2, -1u, 0, 0, buffer);
            panel->skillWidths[slot] = (s32)fontMeasureTextWidth(buffer, 2, 0.0f);
        }
    }
    if (panel->previewId != record->demon) {
        if (record->demon) {
            if (panel->previewId && FUN_00293f10(panel->previewId, 1))
                statusBustUpPortraitRelease(panel->previewId, 1);
            panel->previewId = record->demon;
            statusBustUpPortraitAcquire(panel->previewId, 1);
        } else {
            clearCharacterPreview(panel);
        }
    } else if (record->demon == 0) {
        clearCharacterPreview(panel);
    }
    __2sprintf(buffer, DAT_00402898);
    asdTextDrawFormatted(panel->previewDescription, 2, -1u, 0, 0, buffer);
    panel->previewDescriptionWidth = (s32)fontMeasureTextWidth(buffer, 2, 0.0f);
}
