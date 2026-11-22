#include "runtime/Stdio.h"
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"

namespace {
struct BattleCameraDefinition {
    u8 unk00[3];
    u8 flags;
    u8 unk04[0x30];
    u32 resource;
};
// Both fields extend beyond their shared prefix; keep their larger views local.
struct BattleCameraAuxCamera {
    u8 unk00[0x70];
    u32 resource;
};
struct BattleCameraAuxView {
    BtlAuxA prefix;
    u8 unk3054[0x6BAC];
    BattleCameraAuxCamera camera;
};
struct BattleCameraCandidateView {
    BattleCandidateRecord prefix;
    u8 unk18[0x74];
    s16 cameraId;
};
typedef char BattleCameraViewOffsetsCheck[
    offsetof(BattleCameraAuxView, camera) == 0x9C00 &&
    offsetof(BattleCameraAuxView, camera.resource) == 0x9C70 &&
    offsetof(BattleCameraCandidateView, cameraId) == 0x8C ? 1 : -1];
}

extern "C" {
extern BtlAuxA *g_btlAux;
extern const char DAT_00528568[];
BattleCameraDefinition *btlMotionFindSelection(BtlMainStateA *battle, u16 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_004f2abc(BtlCameraA *camera, const char *path);
s32 FUN_004f2294(BtlCameraA *camera);
void btlCameraObjectCreate(BtlCameraA *camera);
void FUN_003e1068(BtlStep *step, BtlMainStateA *battle);

// Load the marked reserve combatant's camera if its definition enables one.
void FUN_003e025c(BtlStep *step, BtlMainStateA *battle)
{
    BattleRosterRecordA *record = btlFindMarkedReserveRecord(battle);
    if (record != NULL) {
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(battle, record->combatant.parameterIndex);
        if (entry != NULL) {
            BattleCameraDefinition *definition = btlMotionFindSelection(battle, entry->data.id);
            BattleCameraAuxCamera *auxCamera = &reinterpret_cast<BattleCameraAuxView *>(g_btlAux)->camera;
            auxCamera->resource = definition->resource;
            if (definition != NULL && (definition->flags & 1) != 0) {
                char path[64] = {0};
                const BattleCameraCandidateView *candidate =
                    reinterpret_cast<const BattleCameraCandidateView *>(entry->data.candidate);
                __2sprintf(path, DAT_00528568, candidate->cameraId);
                FUN_004f2abc(g_btlCamera, path);
                step->state = 14;
                step->counters.unk10 = 0;
                step->counters.unk0C = 0;
                if (FUN_004f2294(g_btlCamera) != 0) {
                    btlCameraObjectCreate(g_btlCamera);
                    step->state = 15;
                    step->counters.unk10 = 0;
                    step->counters.unk0C = 0;
                    FUN_003e1068(step, battle);
                }
                return;
            }
        }
    }
    btlStepEnter(step, 15);
    FUN_003e1068(step, battle);
}
}
