#include "common.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/GameDataAccess_VariantC.h"

/* A copied game record; only the state halfword is read. */
struct GameRecordCopy {
    /* 0x00 */ u8 unk00[0x2e];
    /* 0x2E */ u16 state;        /* bits 0xFC: registered */
    /* 0x30 */ u8 unk30[8];
};

extern "C" {

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
    DevilRecord *devil = devilGetRecord(id);
    if (devil != NULL && (devil->fusionRestrictions & 0x200000) == 0 &&
        (devil->requiredFlag == 0 || gameFlagIsSet(devil->requiredFlag))) {
        if (devil->prerequisite & 1) {
            if (devil->prerequisite & ~1) {
                if (!gameRecordRegistered(devil->prerequisite >> 1)) {
                    return 0;
                }
            } else if (!gameRecordRegistered(devil->id)) {
                return 0;
            }
        }
        if (devil->flags & 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
