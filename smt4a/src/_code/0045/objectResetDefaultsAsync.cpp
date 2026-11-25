#include "common.h"
#include "shard/S1NnOs.h"
#include "shard/S1Mover.h"
#include "classes/ObjectCommandRequests.h"
#include "runtime/String.h"

struct ObjectScaleOffset {
    f32 scaleX, scaleY, offsetX, offsetY;
};
struct ObjectParamScaleOffset {
    f32 scaleX, scaleY;
    u32 offsetX, offsetY;
};
struct ObjectScaleBias {
    f32 scale, bias;
};
struct ObjectResetStatus {
    u8 state;
    u8 flags;
    s8 slot;
    u8 pending;
};
struct ObjectResetNotification {
    u32 unk00;
    LightEvent event;
};

class DeferredResetObject {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual void unk08() = 0;
    virtual void unk0c() = 0;
    virtual void unk10() = 0;
    virtual void unk14() = 0;
    virtual void unk18() = 0;
    virtual void unk1c() = 0;
    virtual u32 getResetId() = 0;

    /* 0x04 */ u32 values04[6];
    /* 0x1c */ u32 values1c[5];
    /* 0x30 */ ObjectScaleOffset primary;
    /* 0x40 */ Vec3f angles;
    /* 0x4c */ s32 index;
    /* 0x50 */ u32 option50, option54;
    /* 0x58 */ ObjectScaleOffset secondary;
    /* 0x68 */ ObjectParamScaleOffset parameters[3];
    /* 0x98 */ u8 flags98[4];
    /* 0x9c */ ObjectResetStatus status;
    /* 0xa0 */ u8 flagsA0[4];
    /* 0xa4 */ u32 valuesA4[3];
    /* 0xb0 */ s32 resourceId;
    /* 0xb4 */ u32 serial;
    /* 0xb8 */ ObjectParamScaleOffset extra;
    /* 0xc8 */ ObjectScaleBias scaleBias[2];
    /* 0xd8 */ f32 tailParameters[5];
    /* 0xec */ void *buffer;
    /* 0xf0 */ u32 bufferBytes;
};

static __inline void objectResetParamScaleOffset(ObjectParamScaleOffset &values)
{
    values.scaleX = 1.0f;
    values.scaleY = 1.0f;
    values.offsetX = 0;
    values.offsetY = 0;
}

extern "C" {
extern u32 objectNextSerial;
void nn_os_LightEvent_ClearSignal(LightEvent *event);
}

/* Resets every parameter to its default and queues an asynchronous reset command. */
extern "C" void objectResetDefaultsAsync(DeferredResetObject *object)
{
    object->serial = objectNextSerial++;
    object->values04[0] = 0;
    object->values04[1] = 0;
    object->values04[2] = 0;
    object->values04[3] = 0;
    object->values04[4] = 0;
    object->values04[5] = 0;
    object->resourceId = -1;
    object->values1c[0] = 0;
    object->values1c[1] = 0;
    object->values1c[2] = 0;
    object->values1c[3] = 0;
    object->values1c[4] = 0;
    object->flagsA0[0] = 0;
    object->flagsA0[1] = 0;
    object->flagsA0[2] = 0;
    object->flagsA0[3] = 0;
    object->flags98[0] = 0;
    object->flags98[1] = 0;
    object->flags98[2] = 0;
    object->flags98[3] = 0;
    object->status.state = 0;
    object->valuesA4[0] = 0;
    object->valuesA4[1] = 0;
    object->valuesA4[2] = 0;
    for (u32 i = 0; i < 3; ++i) {
        objectResetParamScaleOffset(object->parameters[i]);
    }
    object->scaleBias[0].scale = 1.0f;
    object->scaleBias[1].scale = 1.0f;
    object->scaleBias[0].bias = 0.0f;
    objectResetParamScaleOffset(object->extra);
    object->scaleBias[1].bias = 0.0f;
    object->status.slot = -1;
    object->tailParameters[0] = 0.0f;
    object->tailParameters[4] = 0.0f;
    object->tailParameters[1] = 0.0f;
    object->tailParameters[2] = 0.0f;
    object->tailParameters[3] = 0.0f;
    object->primary.scaleX = 1.0f;
    object->primary.scaleY = 1.0f;
    object->primary.offsetX = 0.0f;
    object->primary.offsetY = 0.0f;
    object->angles.x = 0.0f;
    object->angles.y = 0.0f;
    object->angles.z = 0.0f;
    object->option50 = 0;
    object->index = -1;
    object->option54 = 0;
    object->secondary.scaleY = 1.0f;
    object->secondary.scaleX = 1.0f;
    object->secondary.offsetX = 0.0f;
    object->secondary.offsetY = 0.0f;
    if (object->bufferBytes != 0) {
        rt_memclr(object->buffer, object->bufferBytes);
    }
    u32 resetId = object->getResetId();
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCommand *command = objectCommandBegin(queue, sizeof(ObjectCommand) / sizeof(u32));
    command->kind = 3;
    command->owner = resetId;
    command->payload.word = (u32)&object->status;
    listAppendNode(queue, command);
    nn_os_LightEvent_ClearSignal(&((ObjectResetNotification *)resetId)->event);
    object->status.pending = 1;
}
