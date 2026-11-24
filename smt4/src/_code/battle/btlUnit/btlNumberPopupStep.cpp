#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlMarkerStep.h"
#include "battle/BtlPositionedRequests.h"

enum {
    MARKER_WORLD_SPACE = 0x10,
    MARKER_SCREEN_SPACE_MASK = 0x2A,
    MARKER_SPECIAL_SLOT = 0x20,
    MARKER_ALTERNATE_DRIFT = 0x100,
    MARKER_NUMBER_QUEUED = 4,

    MARKER_START = 0,
    MARKER_WAIT = 1,

    MARKER_FIRST = 0,
    MARKER_SECOND = 1,
    MARKER_FIRST_ALT = 2,
    MARKER_SECOND_ALT = 3,
    MARKER_PAIR = 4,
    MARKER_PAIR_ALT = 5,
};

/* Adds the unit's drift or the fixed popup offset to its battle anchor. */
static __inline BattleVector3 &operator+=(BattleVector3 &position, const BattleVector3 &offset)
{
    position.x += offset.x;
    position.y += offset.y;
    position.z += offset.z;
    return position;
}

extern "C" {
extern s16 DAT_00439a50[];        /* Random drift ranges, two endpoints for each axis. */
extern BattleVector3 DAT_00493560; /* Offset from the unit's anchor to its popup. */
s32 randBetween(s32 minimum, s32 maximum);

/* Starts the battle number popup(s) for a member and waits for the UI to retire them. */
void btlNumberPopupStep(u32 unused, BtlMarkerStep *step)
{
    BtlMainState *main = btlGetMainState();
    BtlEntry *side = btlMainFindEntryByListedId(main, step->unit->id);
    if (side == NULL) {
        step->result = 0;
        return;
    }
    if (step->phase == MARKER_START) {
        if ((side->flags & MARKER_WORLD_SPACE) != 0) {
            BattleVector3 position = FUN_0023cd08(main, step->unit->id, 0);
            if (step->count > 0) {
                if ((side->flags & MARKER_ALTERNATE_DRIFT) != 0) {
                    step->unit->offset.x = (f32)randBetween(DAT_00439a50[4], DAT_00439a50[5]) * 0.01f;
                    step->unit->offset.y = (f32)randBetween(DAT_00439a50[6], DAT_00439a50[7]) * 0.01f;
                    step->unit->offset.z = 0.0f;
                } else {
                    step->unit->offset.x = (f32)randBetween(DAT_00439a50[0], DAT_00439a50[1]) * 0.01f;
                    step->unit->offset.y = (f32)randBetween(DAT_00439a50[2], DAT_00439a50[3]) * 0.01f;
                    step->unit->offset.z = 0.0f;
                }
                position += step->unit->offset;
            }
            position += DAT_00493560;
            s32 kind = step->kind;
            if (kind == MARKER_FIRST || kind == MARKER_FIRST_ALT) {
                u8 alternate = kind == MARKER_FIRST_ALT;
                step->handle = FUN_0028a0d0(g_btlUiBlock, step->firstId,
                    position.x, position.y, position.z, alternate, 0, step->emphasised != 0, 1);
            } else if (kind == MARKER_SECOND || kind == MARKER_SECOND_ALT) {
                u8 alternate = kind == MARKER_SECOND_ALT;
                step->handle = FUN_0028a0d0(g_btlUiBlock, step->firstId,
                    position.x, position.y, position.z, alternate, 1, step->emphasised != 0, 1);
            } else if (kind == MARKER_PAIR || kind == MARKER_PAIR_ALT) {
                u8 alternate = kind == MARKER_PAIR_ALT;
                step->handle = FUN_0028a0d0(g_btlUiBlock, step->firstId,
                    position.x, position.y, position.z, alternate, 0, step->emphasised != 0, 1);
                step->handle = FUN_0028a0d0(g_btlUiBlock, step->secondId,
                    position.x, position.y, position.z, alternate, 1, step->emphasised != 0, 1);
            } else {
                step->result = 0;
                return;
            }
        } else {
            if ((side->flags & MARKER_SCREEN_SPACE_MASK) == 0) {
                step->result = 0;
                return;
            }
            s32 category = side->selectionIndex;
            if ((side->flags & MARKER_SPECIAL_SLOT) != 0) {
                category = 4;
            }
            s32 x = 0;
            s32 y = 0;
            if (step->count > 0) {
                if (category == 4) {
                    x = (s16)randBetween(DAT_00439a50[12], DAT_00439a50[13]);
                    y = (s16)randBetween(DAT_00439a50[14], DAT_00439a50[15]);
                } else {
                    x = (s16)randBetween(DAT_00439a50[8], DAT_00439a50[9]);
                    y = (s16)randBetween(DAT_00439a50[10], DAT_00439a50[11]);
                }
                step->unit->offset.x = (f32)x;
                step->unit->offset.y = (f32)y;
            }
            s32 kind = step->kind;
            if (kind == MARKER_FIRST || kind == MARKER_FIRST_ALT) {
                u8 alternate = kind == MARKER_FIRST_ALT;
                step->handle = FUN_0023cc00(g_btlUiBlock, category, step->firstId, alternate, 0, step->emphasised != 0, x, y);
            } else if (kind == MARKER_SECOND || kind == MARKER_SECOND_ALT) {
                u8 alternate = kind == MARKER_SECOND_ALT;
                step->handle = FUN_0023cc00(g_btlUiBlock, category, step->firstId, alternate, 1, step->emphasised != 0, x, y);
            } else if (kind == MARKER_PAIR || kind == MARKER_PAIR_ALT) {
                u8 alternate = kind == MARKER_PAIR_ALT;
                step->handle = FUN_0023cc00(g_btlUiBlock, category, step->firstId, alternate, 0, step->emphasised != 0, x, y);
                step->handle = FUN_0023cc00(g_btlUiBlock, category, step->secondId, alternate, 1, step->emphasised != 0, x, y);
            } else {
                step->result = 0;
                return;
            }
            if (step->compact == 0) {
                step->flags |= MARKER_NUMBER_QUEUED;
            }
        }
        step->phase = MARKER_WAIT;
    } else if (step->phase == MARKER_WAIT) {
        if (step->handle < 0 || FUN_003adb34((u32)g_btlUiBlock, step->handle) == 0) {
            step->result = 0;
            return;
        }
    }
    step->result = 1;
}

} /* extern "C" */
