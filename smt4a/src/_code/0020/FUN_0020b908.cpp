/* NON_MATCHING: retail keeps a zero in r9 for the whole switch (the default help text and the frame reset share it) and the remember flag in sl; the build keeps the zero in r5 and rematerialises it, so the help-table pointers shift one register and the frame is 4 bytes smaller. */
#include "common.h"
#include <stddef.h>
#include "gamedata/DataTable.h"
#include "shard/Shard0032.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

/* A fusion pair as the unite screen reads it: one 64-bit word of bit fields. */
struct UnitePairBits {
    u64 firstId : 15;
    u64 secondId : 15;
    u64 firstType : 2;
    u64 secondType : 2;
    u64 resultId : 15;
    u64 unknown : 15;
};

/* The unite screen's work past UniteWork's modelled prefix (only the fields used here). */
struct UniteMenuWork {
    /* 0x0000 */ u8 unk0000[0x3FC];
    /* 0x03FC */ u32 frame;
    /* 0x0400 */ s32 state;
    /* 0x0404 */ s32 previous;
    /* 0x0408 */ s32 saved;
    /* 0x040C */ u8 unk040C[0x434 - 0x40C];
    /* 0x0434 */ s32 request;
    /* 0x0438 */ u8 unk0438[0x488 - 0x438];
    /* 0x0488 */ s32 pendingRequest;
    /* 0x048C */ u8 unk048C[0x13B8 - 0x48C];
    /* 0x13B8 */ UnitePairBits pairs[2690];
    /* 0x67C8 */ u8 unk67C8[4];
    /* 0x67CC */ ScrollSelection pairList;
    /* 0x6830 */ s8 pairKind;
    /* 0x6831 */ u8 unk6831;
    /* 0x6832 */ u16 sortedPairs[1501];
    /* 0x73EC */ u8 unk73EC[0x8B70 - 0x73EC];
    /* 0x8B70 */ u16 skills[24];
    /* 0x8BA0 */ u8 unk8BA0[0x8E14 - 0x8BA0];
    /* 0x8E14 */ ScrollSelection skillList;
    /* 0x8E78 */ u8 unk8E78[0x9070 - 0x8E78];
    /* 0x9070 */ u8 helpShown;
    /* 0x9071 */ u8 helpAvailable;
};

typedef char UniteMenuWorkOffsetCheck[
    offsetof(UniteMenuWork, pairs) == 0x13B8 && offsetof(UniteMenuWork, pairList) == 0x67CC &&
    offsetof(UniteMenuWork, sortedPairs) == 0x6832 && offsetof(UniteMenuWork, skills) == 0x8B70 &&
    offsetof(UniteMenuWork, skillList) == 0x8E14 && offsetof(UniteMenuWork, helpAvailable) == 0x9071 ? 1 : -1];

extern "C" {
extern UniteMenuWork *g_unite;
void sysPlaySe(u32 id);
void buttonHelpSetText(const s8 *text, u32 color);
s32 buttonHelpGetPanelMode(void);
s32 resourceRunOperationIfUnblocked(ScrollSelection *list);
s32 FUN_002a4894(const void *object);
void *slotRecordFindById(u32 id);
void unitRecordBuild(s32 id, UnitRecord *out);
void FUN_0035ad50(u32 id, UnitRecord *unit);
void FUN_0032d0c8(void *directory, u32 index, u16 id, void *record);
void skillHelpUpdateAttributeAndTarget(s32 id);
void FUN_002c8550(s32 mode);
void FUN_00183f58(u32 index, s32 kind, s32 value, s32 queue);
void FUN_00184b90(u8 *owner, s32 direction);
void FUN_003343f0(u8 value);
void FUN_00333dc8(u8 value);
void FUN_002bf4f4(u8 value);

/* Plays the sound of the unite state being entered, shows its help and switches to it. */
void FUN_0020b908(u32 state, s32 rememberPrevious)
{
    UniteMenuWork *unite = g_unite;
    const s8 *text = NULL;
    switch (state) {
    case 0x25:
    case 0x26:
    case 0x27:
        sysPlaySe(0x5A);
        break;
    case 0x16:
    case 0x1D:
    case 0x1F: {
        s32 panelMode = buttonHelpGetPanelMode();
        sysPlaySe(0xA0);
        FUN_003343f0(1);
        FUN_00333dc8(1);
        if (panelMode == 0)
            FUN_002bf4f4(0);
        break;
    }
    case 3:
        sysPlaySe(0x5E);
        break;
    case 0xB: {
        sysPlaySe(0x55);
        void *section = dataTableGet(0x24, 2);
        s8 *entries = static_cast<s8 *>(dataTableGetEntries(section));
        if (dataTableGetCount(section) > 1)
            text = entries + 0x55;
        buttonHelpSetText(text, 0xF4F4F4FF);
        break;
    }
    case 0xD: {
        sysPlaySe(0x56);
        u32 index = resourceRunOperationIfUnblocked(&unite->pairList) + FUN_002a4894(&unite->pairList);
        u16 pair = unite->sortedPairs[index];
        UnitRecord unit;
        if (unite->pairKind == 0) {
            unitRecordBuild(unite->pairs[pair].resultId, &unit);
            FUN_0032d0c8(NULL, 1, unite->pairs[pair].resultId, &unit);
        }
        if (unite->pairKind == 1) {
            void *record = slotRecordFindById(unite->pairs[pair].firstId);
            if (record == NULL) {
                FUN_0035ad50(unite->pairs[pair].firstId, &unit);
                record = &unit;
            }
            FUN_0032d0c8(NULL, 1, unite->pairs[pair].firstId, record);
        }
        if (unite->pairKind == 2) {
            void *record = slotRecordFindById(unite->pairs[pair].secondId);
            if (record == NULL) {
                FUN_0035ad50(unite->pairs[pair].secondId, &unit);
                record = &unit;
            }
            FUN_0032d0c8(NULL, 1, unite->pairs[pair].secondId, record);
        }
        break;
    }
    case 0xF:
        if (g_unite->state != 0x10 && g_unite->state != 0x11 && g_unite->state != 0x12) {
            sysPlaySe(0x57);
            u32 index = resourceRunOperationIfUnblocked(&unite->skillList) + FUN_002a4894(&unite->skillList);
            skillHelpUpdateAttributeAndTarget(unite->skills[index]);
            FUN_002c8550(0xF);
        }
        break;
    case 0x13:
        sysPlaySe(0x5F);
        if (unite->helpAvailable != 0) {
            FUN_00183f58(2, 9, 0x44, 1);
            FUN_00183f58(3, 0, 0, 1);
        }
        break;
    case 0x1B: {
        u32 sound = 0x5B;
        if (unite != NULL && (unite->request == 0x18 || unite->pendingRequest == 0x18))
            sound = 0xA0;
        sysPlaySe(sound);
        void *section = dataTableGet(0x24, 2);
        s8 *entries = static_cast<s8 *>(dataTableGetEntries(section));
        if (dataTableGetCount(section) > 1)
            text = entries + 0x55;
        buttonHelpSetText(text, 0xF4F4F4FF);
        break;
    }
    case 0x1C:
        sysPlaySe(0x5C);
        buttonHelpSetText(NULL, 0xF4F4F4FF);
        unite->helpShown = 1;
        break;
    case 0x24:
        unite->saved = g_unite->state;
        FUN_00184b90(reinterpret_cast<u8 *>(unite), 3);
        FUN_003343f0(1);
        break;
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 14:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 30:
    case 32:
    case 33:
    case 34:
    case 35:
        break;
    }
    if (rememberPrevious != 0)
        unite->previous = unite->state;
    unite->frame = 0;
    unite->state = state;
}
}
