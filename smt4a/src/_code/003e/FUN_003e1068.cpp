/* NON_MATCHING: store scheduling in the final request setup only: retail interleaves `str r6,[r4,#16]; mov r2,#20; str r6,[r4,#12]; mov r0,r4; mov r1,r5; str r2,[r4]`, the build stores the state first. */
#include "common.h"

extern "C" {

typedef struct SkillInfo {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 flags;
    /* 0x04 */ u8 unk04[0x66];
    /* 0x6A */ s16 skillId;
} SkillInfo;

typedef struct SkillSlot {
    /* 0x000 */ u8 unk000[0x166];
    /* 0x166 */ u16 infoId;
} SkillSlot;

typedef struct BtlObject {
    /* 0x00 */ u8 unk00[4];
} BtlObject;

typedef struct StateRequest {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 arg0;
    /* 0x10 */ u32 arg1;
} StateRequest;

extern SkillInfo *btlFindMarkedReserveRecord(BtlObject *obj);
extern SkillSlot *FUN_003f0e20(BtlObject *obj, int skillId);
extern SkillInfo *FUN_003eca48(BtlObject *obj, u16 infoId);
extern int FUN_003e9b74(BtlObject *obj);
extern int FUN_003ece50(BtlObject *obj);
extern int FUN_003eaa9c(BtlObject *obj);
extern int FUN_003e1454(StateRequest *request, BtlObject *obj);

/* Chooses the next state: state 0x10 when the object's skill has flag 2 set and the follow-up check passes, else state 0x14 and a restart. */
void FUN_003e1068(StateRequest *request, BtlObject *obj)
{
    SkillInfo *info = btlFindMarkedReserveRecord(obj);
    SkillSlot *slot;

    if (info != NULL) {
        slot = FUN_003f0e20(obj, info->skillId);
        if (slot != NULL) {
            info = FUN_003eca48(obj, slot->infoId);
            if (info != NULL && (info->flags & 2) != 0) {
                FUN_003e9b74(obj);
                request->state = 0x10;
                request->arg1 = 0;
                request->arg0 = 0;
                if (FUN_003ece50(obj) == 0) {
                    return;
                }
                FUN_003eaa9c(obj);
            }
        }
    }
    request->arg1 = 0;
    request->arg0 = 0;
    request->state = 0x14;
    FUN_003e1454(request, obj);
}

} /* extern "C" */
