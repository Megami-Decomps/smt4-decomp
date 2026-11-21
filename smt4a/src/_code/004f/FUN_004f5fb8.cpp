#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/HandlePools.h"
#include "shard/Shard0032.h"
#include "status/StatusCamera.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
extern void *g_handleRegistry;
void controllerSetPositionXyz(u32 controller, f32 x, f32 y, f32 z);
void modelPlayClip(u32 controller, u32 argument, s32 mode, f32 first, f32 second);
void handleRegistryRegisterObject(void *registry, u32 controller);
s32 idSetFindSubjectIndex(BtlMainStateA *battle, BattleRosterRecordA *record);
void FUN_004019c0(void *transform, Vec3 *value, f32 scale);
void tripleOwnerSetValue(u32 controller, const Vec3 *value);
void enemySpriteDeriveOrigin(void *transform, Vec3 *position, f32 scale);
void controllerSetDestination(u32 controller, const Vec3 *position);

/* unit-local: tail attachment table past the published HandlePools prefix */
struct Attachment {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 transform[0x34];
};
/* unit-local: view of HandlePools extending to its 50 attachments at +0x1398 */
struct AttachmentPoolView {
    /* 0x0000 */ u8 unk0000[0x1398];
    /* 0x1398 */ Attachment attachments[50];
};
typedef char AttachmentPoolOffsetCheck[sizeof(Attachment) == 0x3C &&
    offsetof(Attachment, transform) == 8 &&
    offsetof(AttachmentPoolView, attachments) == 0x1398 ? 1 : -1];

/* Attaches a roster controller to its owning model's scaled transform and world position. */
void FUN_004f5fb8(HandlePools *work, s32 index)
{
    if (work->small[index].controller != NULL) {
        u32 controller = work->small[index].controller->handle;
        controllerSetPositionXyz(controller, 0.0f, 0.0f, 0.0f);
        modelPlayClip(controller, 0, 2, 0.0f, 0.0f);
        handleRegistryRegisterObject(g_handleRegistry, controller);
        BattleRosterRecordA *record = &btlGetMainState()->roster[index];
        s32 subject = idSetFindSubjectIndex(btlGetMainState(), record);
        if (subject < 0) {
            subject = 0;
        }
        Attachment *attachment = NULL;
        BtlUnitDataA *jobs = btlFindEntryBlockByMemberId(btlGetMainState(), record->motion.group);
        u32 job = jobs->parts[subject];
        for (s32 i = 0; i < 50; ++i) {
            if (((AttachmentPoolView *)work)->attachments[i].job == job) {
                attachment = &((AttachmentPoolView *)work)->attachments[i];
                break;
            }
        }
        Vec3 value;
        FUN_004019c0(attachment->transform, &value, record->motion.scale);
        tripleOwnerSetValue(work->small[index].controller->handle, &value);
        Vec3 position;
        enemySpriteDeriveOrigin(attachment->transform, &position, record->motion.scale);
        position.x += record->motion.position[0];
        position.y += record->motion.position[1];
        position.z += record->motion.position[2];
        controllerSetDestination(work->small[index].controller->handle, &position);
    }
}
} /* extern "C" */
