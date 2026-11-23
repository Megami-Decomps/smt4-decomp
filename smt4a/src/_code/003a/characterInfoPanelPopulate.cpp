/* NON_MATCHING: 96 lines (58 by shape; raw counts the rows three missing moves shift). The flow, the frame and
 * the saved registers are retail's. What differs: the preview test keeps the panel's demon in r0 and the card's
 * in r1 (retail r2 and r0, with a `mov r0, r2` before each devilIsTextureLoaded); the two inlined portrait-state
 * helpers use the caller's registers where retail copies the index (`mov r5, r7`) and the set (`movs r5, r4`,
 * the index in r4; requestTextureIsLoaded fixed the same choice in the out-of-line textureRequestCacheGet and
 * stateTableMarkIfUnlocked, here it removed 11 lines but not the copies); and
 * the two-dash strcpy calls __ARM_common_memcpy4_5, which retail's symbols still name __ARM_common_memcpy4_5. */
#include <string.h>
#include "common.h"
#include <stdio.h>
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "code/Code0019.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantD.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/Shard003B.h"
#include "saveLoadUI/SaveLoadUIBase.h"
#include "cec/CecMessage.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {
void rt_aeabi_memclr(void *destination, u32 size);
void asdTextFormatStream(void *label, u32 font, u32 color, s32 x, s32 y, const char *format, ...);
const char *dataTable4AGetEntry2C(u32 id);
const char *fileSectionGetData(void *file, u32 entry, u32 table);
const char *dataFindKindRecordWithAocOverrides(u32 equipment, u32 flags);
const char *dataTable01GetRecordWithAocOverride(u32 demon);
const char *demonGetRaceLabel(u32 demon, u32 flags);
f32 fontMeasureTextWidth(const char *text, u32 font, f32 spacing);
void statusBustUpPortraitRelease(s32 id, u32 kind);
void statusBustUpPortraitAcquire(s32 id, u32 kind);
void asdTMTexTableReleaseNode(u32 table, u32 code);
}

/* Frees portrait texture `index` unless it is still loading (textureRequestCacheGet's counterpart). */
static __inline void resSetReleaseTexture(ResSet *set, u32 index)
{
    if (set == NULL) {
        return;
    }
    if (requestTextureIsLoaded(index) &&
        set->states[index] != RES_SET_TEXTURE_LOADING) {
        asdTMTexTableReleaseNode(RES_SET_TEXTURE_TABLE, requestIdToCode(index));
        set->states[index] = RES_SET_TEXTURE_IDLE;
    }
}

/* Marks portrait texture `index` as wanted: gfxAdvanceTextureRequestQueue loads it. */
static __inline void resSetRequestTexture(ResSet *set, u32 index)
{
    if (set == NULL) {
        return;
    }
    if (!requestTextureIsLoaded(index)) {
        if (set->states[index] != RES_SET_TEXTURE_LOADED && set->states[index] != RES_SET_TEXTURE_LOADING) {
            set->states[index] = RES_SET_TEXTURE_REQUESTED;
        }
    }
}

/* Fills the character info panel from a StreetPass card: the player's name, title, message and equipment, the
 * demon's name, race and skills, the special item, and the portrait texture to load. */
extern "C" void characterInfoPanelPopulate(ResSet *panel, const CecProcessSlotA *card, void *messages)
{
    if (panel == NULL || card == NULL) {
        return;
    }
    const CecCardDemon *demon = &card->demon;
    char buffer[128];

    textExpandGlyphsToBuffer(card->playerName, buffer, 0);
    asdTextFormatStream(panel->name, 3, -1u, 0, 0, buffer);

    const char *title = dataTable4AGetEntry2C(card->title);
    if (card->flags & 2) {
        strcpy(buffer, "\x82\x63\x82\x85\x82\x96\x82\x85\x82\x8c\x82\x8f\x82\x90\x82\x85\x82\x92"); /* "Developer" in wide letters */
    } else if (title == NULL) {
        rt_aeabi_memclr(buffer, sizeof(buffer));
    } else {
        textExpandGlyphsToBuffer(title, buffer, 0);
    }
    asdTextFormatStream(panel->title, 2, -1u, 0, 0, buffer);

    if (messages == NULL) {
        strcpy(buffer, "\x81\x40"); /* a wide space */
        asdTextFormatStream(panel->description, 2, -1u, 0, 0, buffer);
    } else {
        asdTextFormatStream(panel->description, 2, -1u, 0, 0, "%s", fileSectionGetData(messages, card->selection, 0));
    }

    /* The seven equipment slots: an empty one keeps its label. */
    if (card->equipment[0] == 0) {
        panel->equipmentIds[0] = 0;
    } else {
        textExpandGlyphsToBuffer(dataFindKindRecordWithAocOverrides(card->equipment[0], 0), buffer, 0);
        asdTextFormatStream(panel->equipmentLabels[0], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[0] = card->equipment[0];
    }
    if (card->equipment[1] == 0) {
        panel->equipmentIds[1] = 0;
    } else {
        textExpandGlyphsToBuffer(dataFindKindRecordWithAocOverrides(card->equipment[1], 0), buffer, 0);
        asdTextFormatStream(panel->equipmentLabels[1], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[1] = card->equipment[1];
    }
    if (card->equipment[2] == 0) {
        panel->equipmentIds[2] = 0;
    } else {
        textExpandGlyphsToBuffer(dataFindKindRecordWithAocOverrides(card->equipment[2], 0), buffer, 0);
        asdTextFormatStream(panel->equipmentLabels[2], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[2] = card->equipment[2];
    }
    if (card->equipment[3] == 0) {
        panel->equipmentIds[3] = 0;
    } else {
        textExpandGlyphsToBuffer(dataFindKindRecordWithAocOverrides(card->equipment[3], 0), buffer, 0);
        asdTextFormatStream(panel->equipmentLabels[3], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[3] = card->equipment[3];
    }
    if (card->equipment[4] == 0) {
        panel->equipmentIds[4] = 0;
    } else {
        textExpandGlyphsToBuffer(dataFindKindRecordWithAocOverrides(card->equipment[4], 0), buffer, 0);
        asdTextFormatStream(panel->equipmentLabels[4], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[4] = card->equipment[4];
    }
    if (card->equipment[5] == 0) {
        panel->equipmentIds[5] = 0;
    } else {
        textExpandGlyphsToBuffer(dataFindKindRecordWithAocOverrides(card->equipment[5], 0), buffer, 0);
        asdTextFormatStream(panel->equipmentLabels[5], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[5] = card->equipment[5];
    }
    if (card->equipment[6] == 0) {
        panel->equipmentIds[6] = 0;
    } else {
        textExpandGlyphsToBuffer(dataFindKindRecordWithAocOverrides(card->equipment[6], 0), buffer, 0);
        asdTextFormatStream(panel->equipmentLabels[6], 2, -1u, 0, 0, buffer);
        panel->equipmentIds[6] = card->equipment[6];
    }

    if (card->selectedDemon) {
        textExpandGlyphsToBuffer(dataTable01GetRecordWithAocOverride(demon->id), buffer, 0);
    } else {
        strcpy(buffer, "\x81\x7c\x81\x7c\x81\x7c"); /* three dashes */
    }
    asdTextFormatStream(panel->demonName, 1, -1u, 0, 0, buffer);
    panel->demonNameWidth = (s32)fontMeasureTextWidth(buffer, 1, 0.0f);

    if (card->selectedDemon) {
        textExpandGlyphsToBuffer(demonGetRaceLabel(demon->id, 0), buffer, 0);
    } else {
        strcpy(buffer, "\x81\x7c\x81\x7c");
    }
    asdTextFormatStream(panel->race, 2, -1u, 0, 0, buffer);
    panel->raceWidth = (s32)fontMeasureTextWidth(buffer, 2, 0.0f);

    for (s32 slot = 0; slot < 8; ++slot) {
        if (demon->skills[slot] && card->selectedDemon) {
            textExpandGlyphsToBuffer((const char *)aocIndexValueOrDefault(demon->skills[slot]), buffer, 0);
            asdTextFormatStream(panel->skillLabels[slot], 1, -1u, 0, 0, buffer);
            panel->skillWidths[slot] = (s32)fontMeasureTextWidth(buffer, 1, 0.0f);
        } else {
            sprintf(buffer, "\x81\x7c\x81\x7c\x81\x7c");
            asdTextFormatStream(panel->skillLabels[slot], 2, -1u, 0, 0, buffer);
            panel->skillWidths[slot] = (s32)fontMeasureTextWidth(buffer, 2, 0.0f);
        }
    }

    /* The demon preview follows the card's demon. */
    if (panel->previewId != demon->id && demon->id != 0) {
        if (card->selectedDemon) {
            if (panel->previewId && devilIsTextureLoaded(panel->previewId, 1)) {
                statusBustUpPortraitRelease(panel->previewId, 1);
            }
            panel->previewId = demon->id;
            statusBustUpPortraitAcquire(panel->previewId, 1);
        }
    } else if (demon->id == 0) {
        if (panel->previewId && devilIsTextureLoaded(panel->previewId, 1)) {
            statusBustUpPortraitRelease(panel->previewId, 1);
        }
        panel->previewId = 0;
    }

    if (card->specialItem) {
        u16 id = FUN_0036fcd0(unitMapIdToCategory(card->specialItem, 0), 0);
        textExpandGlyphsToBuffer(dataTable01GetRecordWithAocOverride(dataTable10FindValue(id)), buffer, 0);
        asdTextFormatStream(panel->specialItemName, 2, -1u, 0, 0, buffer);
        panel->specialItemWidth = (s32)fontMeasureTextWidth(buffer, 2, 0.0f);
    } else {
        rt_aeabi_memclr(buffer, sizeof(buffer));
        asdTextFormatStream(panel->specialItemName, 2, -1u, 0, 0, buffer);
        panel->specialItemWidth = 0;
    }

    /* The card's portrait replaces the first one loaded. */
    s32 loaded = 0;
    for (s32 index = 0; index < RES_SET_TEXTURE_COUNT; ++index) {
        if (requestTextureIsLoaded(index)) {
            loaded = index;
            break;
        }
    }
    if (!requestTextureIsLoaded(card->portrait)) {
        resSetReleaseTexture(panel, loaded);
        resSetRequestTexture(panel, card->portrait);
    }
}
