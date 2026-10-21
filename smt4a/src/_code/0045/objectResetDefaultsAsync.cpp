/* NON_MATCHING: byte-array clears merge to word stores; floating-zero store selection, initialization schedule, and queue/notification registers differ. O2 candidate. */
#include "common.h"
#include "shard/S1NnOs.h"
#include "shard/S1Mover.h"
#include "classes/Obj421aa4.h"

struct ObjectScaleOffset {
    f32 scaleX, scaleY, offsetX, offsetY;
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
    /* 0x68 */ ObjectScaleOffset parameters[3];
    /* 0x98 */ u8 flags98[4];
    /* 0x9c */ ObjectResetStatus status;
    /* 0xa0 */ u8 flagsA0[4];
    /* 0xa4 */ u32 valuesA4[3];
    /* 0xb0 */ s32 resourceId;
    /* 0xb4 */ u32 serial;
    /* 0xb8 */ ObjectScaleOffset extra;
    /* 0xc8 */ ObjectScaleBias scaleBias[2];
    /* 0xd8 */ f32 tailParameters[5];
    /* 0xec */ void *buffer;
    /* 0xf0 */ u32 bufferBytes;
};

static inline void objectResetScaleOffset(ObjectScaleOffset &values)
{
    values.scaleX = 1.0f;
    values.scaleY = 1.0f;
    values.offsetX = 0.0f;
    values.offsetY = 0.0f;
}

extern "C" {
extern u32 objectNextSerial;
Obj421aa4Manager *objectCommandQueueGet(void);
Obj421aa4Node *objectCommandReserveWords(Obj421aa4Manager *queue, u32 words);
void listAppendNode(Obj421aa4Manager *queue, Obj421aa4Node *command);
void nn_os_LightEvent_ClearSignal(LightEvent *event);
void rt_memclr(void *data, u32 size);

void objectResetDefaultsAsync(DeferredResetObject *object)
{
    object->serial = objectNextSerial;
    ++objectNextSerial;
    for (u32 i = 0; i < 6; ++i) {
        object->values04[i] = 0;
    }
    object->resourceId = -1;
    for (u32 i = 0; i < 5; ++i) {
        object->values1c[i] = 0;
    }
    for (u32 i = 0; i < 4; ++i) {
        object->flagsA0[i] = 0;
    }
    for (u32 i = 0; i < 4; ++i) {
        object->flags98[i] = 0;
    }
    object->status.state = 0;
    for (u32 i = 0; i < 3; ++i) {
        object->valuesA4[i] = 0;
    }
    for (u32 i = 0; i < 3; ++i) {
        objectResetScaleOffset(object->parameters[i]);
    }
    object->scaleBias[0].scale = 1.0f;
    object->scaleBias[1].scale = 1.0f;
    object->scaleBias[0].bias = 0.0f;
    objectResetScaleOffset(object->extra);
    object->scaleBias[1].bias = 0.0f;
    object->status.slot = -1;
    for (u32 i = 0; i < 5; ++i) {
        object->tailParameters[i] = 0.0f;
    }
    objectResetScaleOffset(object->primary);
    object->angles.x = 0.0f;
    object->angles.y = 0.0f;
    object->angles.z = 0.0f;
    object->option50 = 0;
    object->index = -1;
    object->option54 = 0;
    objectResetScaleOffset(object->secondary);
    if (object->bufferBytes != 0) {
        rt_memclr(object->buffer, object->bufferBytes);
    }
    u32 resetId = object->getResetId();
    Obj421aa4Manager *queue = objectCommandQueueGet();
    Obj421aa4Node *command = objectCommandReserveWords(queue, sizeof(Obj421aa4Node) / sizeof(u32));
    command->stamp = queue->unk184;
    command->type = 3;
    command->id = resetId;
    command->arg = &object->status;
    listAppendNode(queue, command);
    nn_os_LightEvent_ClearSignal(&reinterpret_cast<ObjectResetNotification *>(resetId)->event);
    object->status.pending = 1;
}
}
