/* NON_MATCHING: retail keeps the pool counters' address in r9 and the command in fp, loads flagB into sl before
 * the calls and splits the channel loads. The entry initialisation uses the shared runtime record. */
#include "shard/RuntimeEntryTable.h"

struct EffectRegistrationTransform {
    s32 enabled;
    f32 scale;
    f32 depth;
};
struct EffectRegistrationStyle {
    s32 enabled;
    u32 value;
    u32 vectorBits[3];
};
struct EffectRegistrationAttachment {
    u8 unk00[8];
    u32 reference;
    f32 *position;
    u32 unk10;
    EffectRegistrationStyle *style;
};
struct EffectRegistrationCommand {
    u8 unk00[0x18];
    EffectRegistrationTransform transform;
    EffectRegistrationStyle style;
    u8 channels[6];
    u16 flags;
    EffectRegistrationTransform *transformPointer;
    f32 position[3];
    f32 rotation[3];
    EffectRegistrationAttachment attachment;
    u8 unk74[0x18];
};
typedef char EffectRegistrationCommandLayoutCheck[sizeof(EffectRegistrationCommand) == 0x8C &&
    offsetof(EffectRegistrationCommand, attachment) == 0x5C ? 1 : -1];

extern "C" {
extern EffectRegistrationCommand DAT_00602020[];
s32 FUN_00305760(EffectRegistrationAttachment *attachment);
u32 FUN_00244c70(void *object, u32 first, u32 second, u32 third, f32 x, f32 y, f32 z, f32 rotation);

void FUN_0035363c(void *object, u32 id, u32 reference, u32 styleValue,
    f32 x, f32 y, f32 z, f32 depth, f32 scale, f32 rotation,
    u32 first, u32 second, u32 channel0, u32 channel1, u32 channel2, u32 channel3, u32 channel4, u32 channel5,
    u32 flagA, u32 flagB, u32 kind, u32 vectorXBits, u32 vectorYBits, u32 vectorZBits, u32 third)
{
    s32 current = DAT_00580c90.count;
    EffectRegistrationCommand *command = &DAT_00602020[current];
    command->transform.enabled = 1;
    command->transform.depth = depth;
    command->transform.scale = scale;
    command->style.value = styleValue;
    command->style.enabled = 1;
    command->style.vectorBits[0] = vectorXBits;
    command->style.vectorBits[1] = vectorYBits;
    command->style.vectorBits[2] = vectorZBits;
    command->channels[0] = channel0;
    command->channels[1] = channel1;
    command->channels[2] = channel2;
    command->channels[3] = channel3;
    command->channels[4] = channel4;
    command->channels[5] = channel5;
    command->flags = 1;
    command->transformPointer = &command->transform;
    command->attachment.style = &command->style;
    command->attachment.position = command->position;
    command->rotation[0] = 0.0f;
    command->rotation[1] = rotation;
    command->rotation[2] = 0.0f;
    command->position[0] = x;
    command->position[1] = y;
    command->position[2] = z;
    command->attachment.reference = reference;
    s32 index = FUN_00305760(&command->attachment);
    u32 handle = FUN_00244c70(object, first, second, third, x, y, z, rotation);
    RuntimeEntry *entry = &g_recordTable[index];
    entry->handle = handle;
    entry->flags = flagA;
    g_recordTable[current].mode = flagB;
    entry->object = object;
    entry->creationId = id;
    entry->state = -1;
    entry->frame = 0;
    entry->previous = -1;
    entry->disabled = 0;
    entry->kind = kind;
    entry->unk16E[0] = 0;
    entry->requiredFlag = 0;
    entry->forbiddenFlag = 0;
    entry->target = 0;
    ++DAT_00580c90.count;
}
}
