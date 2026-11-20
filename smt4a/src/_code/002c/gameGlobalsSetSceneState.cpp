/* NON_MATCHING: the two session-pointer loads use one pool base in the build;
 * retail loads the pool base twice and uses an indexed store for the scene-state byte. */
#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Stores `value` (8 is stored as 3) and whether it was 8. */
void gameGlobalsSetSceneState(u32 value)
{
    ObjB *session = g_gameGlobals.instance;
    session->selectionWasEight = value == 8;
    session->unk2018 = value == 8 ? 3 : (u8)value;
}
} /* extern "C" */
