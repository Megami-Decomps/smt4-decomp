#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/S1Mover.h"
#include "code/Code0015.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <math.h>
#include "battle/BtlGlobals.h"

namespace {
/* The camera's eye position (the opaque ManagedCamera storage is byte-aligned). */
struct CameraEyeView {
    u32 flags;
    BattleVector3 eye;
};
}
extern "C" {
void idSetFindSubjectIndex(BtlMainStateA *, BattleRosterRecordA *);
BattleVector3 btlGetCombatantOverridePosition(BtlMainStateA *, s32, s32);

static __inline f32 vectorLength(f32 x, f32 y, f32 z)
{
    return sqrtf(x * x + y * y + z * z);
}

/* Scale an eligible combatant's camera effect by its relative eye distance. */
bool FUN_00320b44(f32 *scale, s32 index, s32 mode)
{
    if (!index || !(mode < 0 || mode == 1 || mode == 4))
        return false;
    BattleRosterRecordA *unit = &btlGetMainState()->roster[index];
    if (!unit)
        return false;
    idSetFindSubjectIndex(btlGetMainState(), unit);
    btlFindEntryBlockByMemberId(btlGetMainState(), index);
    bool enabled = false;
    if (unit->liveFlags.unk50 & 0x10)
        enabled = true;
    if (unit->liveFlags.unk50 & 0x8000)
        enabled = true;
    if ((!(unit->liveFlags.unk50 & 0x10) && unit->marker.group == 1) || enabled) {
        BattleVector3 eye = reinterpret_cast<CameraEyeView *>(asdCameraGetSavedRenderPairs())->eye;
        BattleVector3 position = btlGetCombatantOverridePosition(btlGetMainState(), index, 0);
        f32 eyeDistance = vectorLength(eye.x, eye.y, eye.z);
        f32 distance = vectorLength(eye.x - position.x, eye.y - position.y, eye.z - position.z);
        *scale = distance / eyeDistance * 5.6f;
        enabled = true;
    }
    return enabled;
}
}
