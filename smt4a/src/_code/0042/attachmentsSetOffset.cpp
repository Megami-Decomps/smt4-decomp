#include "common.h"

extern "C" {

typedef struct AttachVec3 {
    f32 x;
    f32 y;
    f32 z;
} AttachVec3;

typedef struct AttachGroup {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
} AttachGroup;

typedef struct AttachSet {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AttachGroup *group;
} AttachSet;

/* An object whose attachments follow its model at an offset. */
typedef struct AttachOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *model;
    /* 0x08 */ AttachSet *attachments;
    /* 0x0C */ u8 unk0C[0x24];
    /* 0x30 */ f32 unk30;
    /* 0x34 */ AttachVec3 offset;
} AttachOwner;

void FUN_00401b50(void *model, AttachVec3 *position, f32 arg);
void *FUN_0040619c(AttachGroup *group, s32 index);
void controllerSetDestination(void *controller, const AttachVec3 *destination);

/* Sets the attachment offset and moves every attachment to the model position plus that offset. */
void attachmentsSetOffset(AttachOwner *owner, const AttachVec3 *offset)
{
    AttachVec3 position;
    s32 count;
    s32 i;

    owner->offset.x = offset->x;
    owner->offset.y = offset->y;
    owner->offset.z = offset->z;
    if (owner->model == NULL) {
        return;
    }
    FUN_00401b50(owner->model, &position, owner->unk30);
    position.x += owner->offset.x;
    position.y += owner->offset.y;
    position.z += owner->offset.z;
    if (owner->attachments == NULL) {
        return;
    }
    count = owner->attachments->group->count;
    for (i = 0; i < count; i++) {
        void *controller = FUN_0040619c(owner->attachments->group, i);

        if (controller != NULL) {
            controllerSetDestination(controller, &position);
        }
    }
}

} /* extern "C" */
