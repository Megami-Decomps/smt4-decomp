/* NON_MATCHING: only eye-norm/relative-vector VFP scheduling and result registers differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/S1Mover.h"
#include "util/CalleeContracts.h"

extern "C" {
void idSetFindSubjectIndex(BtlMainStateA *, BattleRosterRecordA *);
void *FUN_001568f8(BtlMainStateA *, s32);
Vec3f FUN_003ecab8(BtlMainStateA *, s32, s32);
f32 sqrtf(f32);

/* Scale an eligible combatant's camera effect by its relative eye distance. */
u8 FUN_00320b44(f32 *output, s32 unitIndex, s32 mode)
{
    if (unitIndex != 0 && (mode < 0 || mode == 1 || mode == 4)) {
        BattleRosterRecordA *unit = &btlGetMainState()->roster[unitIndex];
        if (unit != NULL) {
            idSetFindSubjectIndex(btlGetMainState(), unit);
            FUN_001568f8(btlGetMainState(), unitIndex);
            u32 flags = unit->liveFlags.unk50;
            u8 flagged = 0;
            if (flags & 0x10)
                flagged = 1;
            if (flags & 0x8000)
                flagged = 1;
            if (((flags & 0x10) == 0 && unit->marker.group == 1) || flagged) {
                /* The opaque ManagedCamera storage is byte-aligned; keep its
                   float eye-position view local rather than raising alignment. */
                struct CameraEyeView { u32 flags; Vec3f eye; };
                const CameraEyeView *camera = (const CameraEyeView *)FUN_00152f54();
                Vec3f eye = camera->eye;
                Vec3f position = FUN_003ecab8(btlGetMainState(), unitIndex, 0);
                f32 eyeDistance = sqrtf(eye.x * eye.x + eye.y * eye.y + eye.z * eye.z);
                f32 x = eye.x - position.x;
                f32 y = eye.y - position.y;
                f32 z = eye.z - position.z;
                f32 relativeDistance = sqrtf(x * x + y * y + z * z);
                *output = relativeDistance / eyeDistance * 5.6f;
                flagged = 1;
            }
            return flagged;
        }
    }
    return 0;
}
}
