#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BtlMarkerStep.h"
#include "battle/BtlPositionedRequests.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
extern BattleVector3 DAT_00493560;

s32 btlUiPositionMarkerIsBusy(BtlUi *block, s32 handle);

static inline BattleVector3 vectorAdd(BattleVector3 left, BattleVector3 right)
{
    BattleVector3 sum = {left.x + right.x, left.y + right.y, left.z + right.z};
    return sum;
}

// One step of the marker request: when the unit's entry is shown the marker is started (as a world marker for a
// hidden unit, or a screen marker otherwise) and the step then waits for it to appear.
void FUN_00344cf4(void *unused, BtlMarkerStep *request)
{
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), request->unit->id);
    if (entry == NULL) {
        request->result = 0;
        return;
    }
    if (request->phase == 0) {
        u32 flags = entry->flags;
        if ((flags & 0x10) != 0) {
            BattleVector3 position = vectorAdd(FUN_0023cd08(btlGetMainState(), request->unit->id, 0),
                                               request->unit->offset);
            switch (request->kind) {
            case 1: {
                BattleVector3 offset = vectorAdd(position, DAT_00493560);
                request->handle = btlUiPositionRequestAdd(g_btlUiBlock, 1, 1, offset.x, offset.y, offset.z);
                break;
            }
            case 2: {
                BattleVector3 offset = vectorAdd(position, DAT_00493560);
                request->handle = btlUiPositionRequestAdd(g_btlUiBlock, 0, 1, offset.x, offset.y, offset.z);
                break;
            }
            case 3:
                request->handle = btlUiPositionRequestAdd(g_btlUiBlock, 3, 1, position.x, position.y, position.z);
                break;
            case 4:
                request->handle = btlUiPositionRequestAdd(g_btlUiBlock, 2, 1, position.x, position.y, position.z);
                break;
            default:
                request->result = 0;
                return;
            }
        } else {
            if ((flags & 0x2a) == 0) {
                request->result = 0;
                return;
            }
            s32 style = entry->selectionIndex;
            if ((flags & 0x20) != 0) {
                style = 4;
            }
            s32 x = (s16)(s32)request->unit->offset.x;
            s32 y = (s16)(s32)request->unit->offset.y;
            switch (request->kind) {
            case 1:
                request->handle = btlUiAddPositionedMarker(g_btlUiBlock, style, 1, x, y);
                break;
            case 2:
                request->handle = btlUiAddPositionedMarker(g_btlUiBlock, style, 0, x, y);
                break;
            case 3:
                request->handle = btlUiAddPositionedMarker(g_btlUiBlock, style, 3, x, y);
                break;
            case 4:
                request->handle = btlUiAddPositionedMarker(g_btlUiBlock, style, 2, x, y);
                break;
            default:
                request->result = 0;
                return;
            }
        }
        request->phase = 1;
    } else if (request->phase == 1) {
        if (btlUiPositionMarkerIsBusy(g_btlUiBlock, request->handle) == 0) {
            request->result = 0;
            return;
        }
    }
    request->result = 1;
}
}
