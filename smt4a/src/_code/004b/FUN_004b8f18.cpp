/* NON_MATCHING: g_aocMain and g_mapSelection trade r8/r7, and the cancel-bit test keeps the AocMain pointer in r1 and the flags in r0 (retail: r0/r2). */
#include "map/MapJumpTransition.h"
#include "game/GameStateA.h"
#include "shard/W4_Match3_AocMainA.h"
#include "map/mapDepart.h"
#include "map/MapSelection.h"
#include "code/Code0034.h"

extern "C" {
void infoWinSetValue(s32);
s32 FUN_0047e150(AocScriptHolder *);
void helpResourcesRelease(AocScriptHolder *);
void gameDataSaveSetValues(const MapJumpRequest *);
void gameDataCopySaveToWork();
/* armcc copy helper, called by an opaque name (config alias): the call keeps the dead store retail has */
void ARM_common_memcpy4_6_call(MapJumpDestination *, const MapJumpDestination *);
void FUN_004b7a08(MapJumpTransition *work);
void gameSaveBlockRebuild27E98();
void soundPlayCueForContextKind(MapJumpTransition *work); // declcheck: local (code/Code004b_Smt4a.h types the argument as a SoundCueContext view)

/* Moves the transition to `state`, restarting its substate. */
static __inline void mapJumpEnter(MapJumpTransition *work, u32 state)
{
    work->substate = 0;
    work->state = state;
}

/* Clears the add-on menu's request bits 4-6 and reports whether bit 4 (cancel) was set. */
static __inline u32 aocMainTakeCancel(void)
{
    u32 flags = g_aocMain->flags;
    g_aocMain->flags = flags & ~0x70U;
    return (flags & 0x10) >> 4;
}

/* Runs the add-on return script, then saves the return request and jumps to the selected map (or
 * back to the current one). */
void FUN_004b8f18(MapJumpTransition *work)
{
    if (work->substate == 0) {
        infoWinSetValue(0);
        FUN_00341fa4(&g_aocMain->scriptHolder, 1);
        work->substate = 1;
    } else if (work->substate == 1) {
        s32 result = FUN_0047e150(&g_aocMain->scriptHolder);
        if (result) {
            helpResourcesRelease(&g_aocMain->scriptHolder);
            if (g_mapSelection.id >= 0) {
                MapJumpRequest request;
                request.kind = 3;
                request.map = static_cast<u8>(work->returnMap);
                request.entrance = static_cast<u8>(work->returnEntrance);
                gameDataSaveSetValues(&request);
                gameDataCopySaveToWork();
                MapJumpDestination destination;
                destination.map = static_cast<u16>(g_mapSelection.id);
                destination.entrance = static_cast<u16>(g_mapSelection.kind);
                destination.object = static_cast<u16>(g_mapSelection.counter);
                ARM_common_memcpy4_6_call(&work->destination, &destination);
                work->flags |= 0x10;
                if (g_mapSelection.id < 200) {
                    work->flags |= 0x100000;
                    work->flags |= 0x100;
                }
                mapJumpEnter(work, 5);
            } else if (g_gameState.entryValue) {
                MapJumpRequest request;
                request.kind = 3;
                request.map = static_cast<u8>(work->returnMap);
                request.entrance = static_cast<u8>(work->returnEntrance);
                gameDataSaveSetValues(&request);
                gameDataCopySaveToWork();
                FUN_004b7a08(work);
                work->flags |= 0x40100;
                mapJumpEnter(work, 5);
            } else {
                gameSaveBlockRebuild27E98();
                infoWinSetValue(1);
                soundPlayCueForContextKind(work);
                mapJumpEnter(work, 5);
            }
        }
        if (result == 2 || aocMainTakeCancel()) {
            mapJumpEnter(work, 15);
        }
    }
}
}
