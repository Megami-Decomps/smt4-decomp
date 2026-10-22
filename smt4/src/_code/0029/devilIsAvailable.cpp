#include "common.h"

/* The devil record fields the availability check reads. */
struct DevilAvailabilityRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[4];
    /* 0x06 */ u16 attributes;   /* bit 0: available */
    /* 0x08 */ u8 unk08[0x24];
    /* 0x2C */ u32 flags;        /* 0x200000: never available */
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u16 recordLink;   /* bit 0: needs a game record; the rest: record id << 1, 0 = own id */
    /* 0x36 */ u16 requiredFlag; /* game flag that must be set, 0 = none */
};

/* A copied game record; only the state halfword is read. */
struct GameRecordCopy {
    /* 0x00 */ u8 unk00[0x2e];
    /* 0x2E */ u16 state;        /* bits 0xFC: registered */
    /* 0x30 */ u8 unk30[8];
};

extern "C" {

DevilAvailabilityRecord *devilGetRecord(u16 id);
s32 gameFlagIsSet(u16 flag);
s32 gameRecordCopy(u16 id, GameRecordCopy *out);

/* Whether the game record id exists and is registered. */
static __inline bool gameRecordRegistered(u16 id)
{
    GameRecordCopy record;
    return gameRecordCopy(id, &record) && (record.state & 0xfc) != 0;
}

/* Whether the devil id is available: not excluded, its flag set and its linked game record registered. */
u32 devilIsAvailable(u32 unused, u16 id)
{
    DevilAvailabilityRecord *devil = devilGetRecord(id);
    if (devil != NULL && (devil->flags & 0x200000) == 0 &&
        (devil->requiredFlag == 0 || gameFlagIsSet(devil->requiredFlag))) {
        if (devil->recordLink & 1) {
            if (devil->recordLink & ~1) {
                if (!gameRecordRegistered(devil->recordLink >> 1)) {
                    return 0;
                }
            } else if (!gameRecordRegistered(devil->id)) {
                return 0;
            }
        }
        if (devil->attributes & 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
