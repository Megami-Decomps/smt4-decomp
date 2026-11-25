/* NON_MATCHING: 112 lines (170 vs 170 rows): direct u64 encounter masks and context->flags match; query/context register numbers and a few load/store schedules differ. */
#include "common.h"
#include "battle/BattleEncounter.h"
#include "battle/BtlGlobals.h"

/* The arrangement file: a four digit decimal version in the first bytes, then the record block. */
struct ArrangementFileA {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 version[4]; /* ASCII digits */
    /* 0x08 */ u16 dataOffset;
    /* 0x0A */ u8 kind;       /* 1: holds records */
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u32 size;
};

struct EncounterRecordA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u32 stateFlags;
    /* 0x5C */ u8 unk5C[4];
    /* 0x60 */ u16 loadFlags;
    /* 0x62 */ u8 unk62[8];
    /* 0x6A */ s16 entryId;
    /* 0x6C */ u8 unk6C[0x1d0 - 0x6c];
};

/* The block copied from the file's header; the first words are cleared first. */
struct EncounterHeaderA {
    /* 0x00 */ f32 values[6];
    /* 0x18 */ u32 flags;
    /* 0x1C */ u8 unk1C[0x118 - 0x1C];
};

struct EncounterContextA {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ EncounterRecordA *records;
    /* 0x1ED8 */ u8 unk1ED8;
    /* 0x1ED9 */ u8 activeCount;
    /* 0x1EDA */ u8 unk1EDA[6];
    /* 0x1EE0 */ EncounterHeaderA header;
    /* 0x1FF8 */ void *recordTable;
    /* 0x1FFC */ u8 unk1FFC[0x45A0 - 0x1FFC];
    /* 0x45A0 */ u64 flags;
};

typedef char EncounterContextAOffsets[offsetof(EncounterContextA, records) == 0x1ED4 &&
    offsetof(EncounterContextA, activeCount) == 0x1ED9 &&
    offsetof(EncounterContextA, header) == 0x1EE0 &&
    offsetof(EncounterContextA, recordTable) == 0x1FF8 &&
    offsetof(EncounterContextA, flags) == 0x45A0 ? 1 : -1];

/* Masks kept in the encounter global. */
struct BtlEncountMasks {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u64 resumeMask; /* flags that stop the records being read from the file */
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ u64 startedMask; /* flags set once the encounter starts */
};

extern "C" {

extern BtlEncountMasks g_btlEncount; /* 0x573828 */

void __aeabi_memcpy4(void *dest, const void *src, u32 bytes);
void FUN_003f0c78(EncounterContextA *context);
void battleRestoreCameraVectors(EncounterContextA *context);
void words10CopyHighToLow(void *camera);
s32 FUN_003e0f94(BattleEncounterQuery *query, EncounterContextA *context);
void FUN_003e0bb8(BattleEncounterQuery *query, EncounterContextA *context);
s32 pairedEntryTableContains(EncounterContextA *context, u16 id);
void btlQueueActionMessage(s32, s32, s32, s32, s32, s32, s32);
void frameTexApplyMode(s32 mode);

/* Encounter state 0x16: copies the file's records in, marks the unloaded ones and moves on to state 0x17. */
void btlEncountLoadArrangementStep(BattleEncounterQuery *query, EncounterContextA *context)
{
    ArrangementFileA *file = (ArrangementFileA *)query->arrangement;
    s32 i;
    s32 result;

    if (file == NULL) {
        return;
    }
    if (!(context->flags & g_btlEncount.resumeMask) && file->kind == 1) {
        EncounterHeaderA *header = &context->header;
        s32 version = 0;
        const u8 *data = (const u8 *)file + file->dataOffset;
        u32 size = file->size;
        s32 count;

        version += (file->version[0] - '0') * 1000;
        version += (file->version[1] - '0') * 100;
        version += (file->version[2] - '0') * 10;
        version += file->version[3] - '0';
        header->values[0] = 0.0f;
        header->values[1] = 0.0f;
        header->values[2] = 0.0f;
        header->values[3] = 0.0f;
        header->values[4] = 0.0f;
        header->values[5] = 0.0f;
        header->flags = 0;
        if (version == 1100) {
            __aeabi_memcpy4(header, data, 0x118);
            data += 0x118;
        }
        count = (u32)(size - 0x118) / 0x18;
        if (context->activeCount < count) {
            count = context->activeCount;
        }
        __aeabi_memcpy4(context->recordTable, data, count * 0x18);
    }
    FUN_003f0c78(context);
    battleRestoreCameraVectors(context);
    words10CopyHighToLow((void *)g_btlCamera);
    result = FUN_003e0f94(query, context);
    if (result == 1 || result == 2 || result == 5) {
        for (i = 4; i < BATTLE_ENCOUNTER_RECORD_COUNT; i++) {
            EncounterRecordA *record = &context->records[i];

            if ((record->flags & 1) && (record->flags & 2) && (record->stateFlags & 8)) {
                record->stateFlags &= ~8;
                if (!(record->loadFlags & 0x800)) {
                    u16 *entry = (u16 *)btlFindEntryBlockByMemberId((BtlMainStateA *)context, record->entryId);

                    if (!pairedEntryTableContains(context, entry[1])) {
                        record->loadFlags |= 0x800;
                    }
                }
            }
        }
        btlQueueActionMessage(0, 0, 0x100021b, 0, 0, 0, 0);
    }
    query->elapsed = 0;
    query->step = 0x17;
    query->pending = 0;
    result = FUN_003e0f94(query, context);
    if (result != 2 && result != 5 && !(context->flags & g_btlEncount.startedMask)) {
        frameTexApplyMode(2);
        context->flags |= g_btlEncount.startedMask;
    }
    FUN_003e0bb8(query, context);
}

} /* extern "C" */
