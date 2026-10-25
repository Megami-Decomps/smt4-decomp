/* NON_MATCHING: small-slot address uses pre-index writeback; attachment search retains its candidate address instead of recomputing it. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/HandlePools.h"
#include "shard/Shard0032.h"
#include "status/StatusCamera.h"

extern "C" {
extern void *g_handleRegistry;
void FUN_003fd7b4(u32 controller, f32 x, f32 y, f32 z);
void FUN_003fe86c(u32 controller, u32 argument, s32 mode, f32 first, f32 second);
void handleRegistryRegisterObject(void *registry, u32 controller);
s32 idSetFindSubjectIndex(BtlMainStateA *battle, BattleRosterRecordA *record);
JobPool *FUN_001568f8(BtlMainStateA *battle, s32 group);
void FUN_004019c0(void *transform, Vec3 *value, f32 scale);
void tripleOwnerSetValue(u32 controller, const Vec3 *value);
void FUN_00401b50(void *transform, Vec3 *position, f32 scale);
void controllerSetDestination(u32 controller, const Vec3 *position);

// Attach a roster controller to its owning model's scaled transform and world position.
void FUN_004f5fb8(HandlePools *work, s32 index)
{
    SmallPoolSlot *slot = &work->small[index];
    if (slot->controller != NULL) {
        u32 controller = slot->controller->handle;
        FUN_003fd7b4(controller, 0.0f, 0.0f, 0.0f);
        FUN_003fe86c(controller, 0, 2, 0.0f, 0.0f);
        handleRegistryRegisterObject(g_handleRegistry, controller);
        BattleRosterRecordA *record = &btlGetMainState()->roster[index];
        s32 subject = idSetFindSubjectIndex(btlGetMainState(), record);
        if (subject < 0) {
            subject = 0;
        }
        // The attachment array follows the published HandlePools extent, so retain a local tail view.
        struct Attachment {
            u32 job;
            u32 unk04;
            u8 transform[0x34];
        };
        struct AttachmentPoolView {
            u8 unk0000[0x1398];
            Attachment attachments[50];
        };
        typedef char AttachmentPoolOffsetCheck[sizeof(Attachment) == 0x3C &&
            offsetof(Attachment, transform) == 8 &&
            offsetof(AttachmentPoolView, attachments) == 0x1398 ? 1 : -1];
        Attachment *attachment = NULL;
        JobPool *jobs = FUN_001568f8(btlGetMainState(), record->motion.group);
        u32 job = jobs->jobs[subject];
        for (s32 i = 0; i < 50; ++i) {
            Attachment *candidate = &((AttachmentPoolView *)work)->attachments[i];
            if (candidate->job == job) {
                attachment = candidate;
                break;
            }
        }
        Vec3 value;
        FUN_004019c0(attachment->transform, &value, record->motion.scale);
        tripleOwnerSetValue(slot->controller->handle, &value);
        Vec3 position;
        FUN_00401b50(attachment->transform, &position, record->motion.scale);
        position.x += record->motion.position[0];
        position.y += record->motion.position[1];
        position.z += record->motion.position[2];
        controllerSetDestination(slot->controller->handle, &position);
    }
}
}
