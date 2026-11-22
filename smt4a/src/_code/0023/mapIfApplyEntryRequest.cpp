/* NON_MATCHING: register allocation only in the head (retail: mul into ip, g_lmapView in r3) and in the record
 * branch (g_gameState in r1, 7 in r2); retail also keeps the destination -3 arm's store inline where the build keeps
 * the -2 arm's. */
#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "map/LmapViewGlobals.h"
#include "code/Code0050_Smt4a.h"

extern "C" {

s32 soundActorStartOnFreeChannel(u32 sound, MapVector position); // declcheck: local (the shared declaration takes an AsdSnd3dPosition; the record holds a MapVector, as in FUN_00245f70)

// Applies a state change to interface entry `index` (-1: none): `blocked` is stored in the interface head and cleared
// again when the entry does not lead to the map being viewed. With it clear, every active entry in a closing state
// (8, 10, 12, 14, 16) is sent to state 6; with it set, the entry in state 6 moves on to its follow-up state.
u32 mapIfApplyEntryRequest(u8 blocked, s32 index)
{
    MapIfStateA *state = g_mapIf.state;
    state->unk1C = blocked;
    if (index != -1 && state->records[index].active != 0 && g_lmapView->contextMode != state->records[index].destination) {
        state->unk1C = 0;
    }
    if (state->unk1C != 0) {
        if (index == -1)
            return 0;
        if (state->records[index].active != 0 && state->records[index].state == 6) {
            if (state->records[index].category >= 45) {
                state->records[index].state = 7;
                if (g_gameState.inputBlocked == 0) {
                    soundActorStartOnFreeChannel(0x10002ab, mapVectorScaled(&state->records[index].start, 1.0f / 3.0f));
                }
            } else {
                s32 destination = state->records[index].destination;
                if (destination == -1) {
                    state->records[index].state = 9;
                    soundActorStartOnFreeChannel(0x10002ab, state->records[index].start);
                } else if (destination == -2) {
                    state->records[index].state = 11;
                    soundActorStartOnFreeChannel(0x10002ab, state->records[index].start);
                } else if (destination == -3) {
                    state->records[index].state = 13;
                    soundActorStartOnFreeChannel(0x10002ab, state->records[index].start);
                } else if (state->records[index].values[2] != 0) {
                    state->records[index].state = 7;
                    if (g_gameState.inputBlocked == 0 || g_lmapView->mode != 0) {
                        if (g_gameState.mapId < 100)
                            soundActorStartOnFreeChannel(0x10002ab, state->records[index].start);
                        else
                            soundActorStartOnFreeChannel(0x10002ab, mapVectorScaled(&state->records[index].start, 1.0f / 3.0f));
                    }
                } else {
                    state->records[index].state = 15;
                    if (g_gameState.inputBlocked == 0) {
                        soundActorStartOnFreeChannel(0x10002ab, state->records[index].start);
                    }
                }
            }
            state->records[index].proximityTimer = 0;
        }
    } else {
        for (s32 i = 0; i < 128; i++) {
            if (state->records[i].active != 0) {
                s32 kind = state->records[i].category;
                if (kind != 0x1d && kind != 0x31 && kind != 0x1e && kind != 0x1f && kind != 0x30 && kind != 0x22 &&
                    kind != 0x23 && kind != 0x25 && kind != 0x28 &&
                    (state->records[i].state == 8 || state->records[i].state == 10 || state->records[i].state == 12 || state->records[i].state == 14 ||
                     state->records[i].state == 16)) {
                    state->records[i].state = 6;
                }
            }
        }
    }
    return 1;
}
}
