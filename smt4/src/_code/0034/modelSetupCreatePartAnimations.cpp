/* NON_MATCHING: animation construction and vector resizing inline differently, changing stack size and branch layout. */
#include "common.h"
#include <stddef.h>

extern "C" {

struct Allocator;
struct Animation;
struct Binding;
struct Model;
struct ModelData;
struct ModelPart;

struct AllocatorVTable {
    void *reserved0;                                      // 0x00
    void *reserved4;                                      // 0x04
    void *(*allocate)(Allocator *, u32, int);    // 0x08
    void (*deallocate)(Allocator *, void *);              // 0x0c
};

struct Allocator {
    AllocatorVTable *vtable;                              // 0x00
};

struct Buffer {
    Allocator *allocator;                                 // 0x00
    unsigned char *begin;                                 // 0x04
    unsigned char *end;                                   // 0x08
    u32 capacityAndFlags;                       // 0x0c
};

struct Matrix34 {
    float elements[12];                                   // 0x00
};

struct Transform {
    Matrix34 matrix;                                     // 0x00
    float scale[3];                                       // 0x30
    u32 flags;                                  // 0x3c
};

struct AnimationVTable {
    void *reserved[3];                                    // 0x00
    void (*bind)(Animation *, Binding *);                 // 0x0c
};

typedef f32 (*AnimationPlayPolicy)(void *context, f32 start, f32 end, f32 frame);

struct Animation {
    AnimationVTable *vtable;                              // 0x00
    Allocator *allocator;                                 // 0x04
    u32 reserved8;                              // 0x08
    u32 references;                             // 0x0c
    Buffer channels;                                     // 0x10
    Buffer tracks;                                       // 0x20
    const void *channelMethods;                           // 0x30
    const void *trackMethods;                             // 0x34
    float frame;                                         // 0x38
    float previousFrame;                                 // 0x3c
    float speed;                                         // 0x40
    float startFrame;                                    // 0x44
    float endFrame;                                      // 0x48
    AnimationPlayPolicy playPolicy;                      // 0x4c
    u32 reserved80;                             // 0x50
    struct AnimationResource *resource;                   // 0x54
    unsigned char enabled;                               // 0x58
    unsigned char state89;                               // 0x59
    unsigned char state90;                               // 0x5a
    unsigned char state91;                               // 0x5b
    unsigned char state92;                               // 0x5c
    unsigned char state93;                               // 0x5d
    unsigned char padding94[2];                          // 0x5e
    Buffer transforms;                                   // 0x60
};

struct AnimationResource {
    unsigned char padding0[16];                          // 0x00
    unsigned char playMode;                               // 0x10
    unsigned char padding17[3];                          // 0x11
    float endFrame;                                      // 0x14
    s32 trackCount;                              // 0x18
};

struct BindingData {
    unsigned char padding0[16];                          // 0x00
    u32 channelCount;                           // 0x10
};

struct Binding {
    unsigned char padding0[8];                           // 0x00
    BindingData *data;                                    // 0x08
};

struct BindingTable {
    unsigned char padding0[12];                          // 0x00
    unsigned char *begin;                                 // 0x0c
    unsigned char *end;                                   // 0x10
    unsigned char padding20[8];                          // 0x14
    Animation **entries;                                 // 0x1c
    unsigned char padding32[8];                          // 0x20
    s32 stride;                                  // 0x28
};

struct PartName {
    unsigned char padding0[12];                          // 0x00
    s32 nameRelative;                            // 0x0c
};

struct ModelPart {
    unsigned char padding0[8];                           // 0x00
    PartName *name;                                       // 0x08
    unsigned char padding12[28];                         // 0x0c
    BindingTable *bindings;                               // 0x28
    unsigned char padding44[284];                        // 0x2c
    Binding *secondaryBinding;                           // 0x148
    s32 secondaryIndex;                          // 0x14c
    unsigned char padding336[166];                       // 0x150
    unsigned char visible;                               // 0x1f6
    unsigned char padding503[49];                        // 0x1f7
    Binding *primaryBinding;                             // 0x228
    s32 primaryIndex;                            // 0x22c
};

struct ResourceDictionaries {
    unsigned char padding0[104];                         // 0x00
    s32 primaryRelative;                         // 0x68
    unsigned char padding108[4];                         // 0x6c
    s32 secondaryRelative;                       // 0x70
};

struct ModelSourceData {
    unsigned char padding0[24];                          // 0x00
    ResourceDictionaries *dictionaries;                   // 0x18
};

struct ModelData {
    unsigned char padding0[4];                           // 0x00
    ModelSourceData *source;                              // 0x04
    unsigned char padding8[28];                          // 0x08
    ModelPart **parts;                                    // 0x24
};

struct Model {
    unsigned char padding0[8];                           // 0x00
    ModelData *data;                                      // 0x08
};

struct ModelSetup {
    unsigned char padding0[8];                           // 0x00
    Model *model;                                         // 0x08
    Animation *primary[3];                                // 0x0c
    Animation *secondary[3];                              // 0x18
    void *source;                                        // 0x24
    u32 creationArgument;                       // 0x28
    u32 state;                                  // 0x2c
    unsigned char padding48[16];                         // 0x30
    u16 creationFlags;                          // 0x40
};

struct DictionaryView {
    void *dictionary;
};

struct DictionaryEntry {
    unsigned char padding0[12];                          // 0x00
    s32 valueRelative;                           // 0x0c
};

struct SecondaryParameters {
    void *resource;                                       // 0x00
    u32 channels;                               // 0x04
    u32 count;                                  // 0x08
    signed char initialize;                              // 0x0c
};

extern "C" {
Model *asdMdlManagerCreateFromSourceB(void *, u32, u32);
Allocator *asdMemoryGetDefaultAllocator();
size_t libc_strlen(const char *);
DictionaryEntry *nw_ut_ResDicPatricia_Get(DictionaryView *, const char *,
                                        size_t);
Animation *FUN_002a5dc4(void *, Allocator *);
void FUN_002a5960(Animation *, SecondaryParameters *, u32,
                  u32, int);
void FUN_002a0428(Model *, int);
void nn_math_ARMv6_MTX34CopyAsm(Matrix34 *, const Matrix34 *);
int __cxa_guard_acquire(u64 *);

extern AnimationVTable DAT_00421468;
extern AnimationVTable DAT_00421570;
extern unsigned char DAT_00422058[];
extern unsigned char DAT_0042208c[];
f32 FUN_00155650(void *context, f32 start, f32 end, f32 frame);
f32 nw_anim_PlayPolicy_Loop(void *context, f32 start, f32 end, f32 frame);
extern u64 DAT_00476634;
extern Matrix34 DAT_004efd6c;
}

static __inline void *resolveRelative(s32 &field)
{
    return field ? reinterpret_cast<unsigned char *>(&field) + field : 0;
}

static __inline void *lookupResource(s32 &relative, const char *name)
{
    DictionaryView dictionary = { resolveRelative(relative) };
    if (!dictionary.dictionary || !name)
        return 0;

    DictionaryEntry *entry =
        nw_ut_ResDicPatricia_Get(&dictionary, name, libc_strlen(name));
    return entry ? resolveRelative(entry->valueRelative) : 0;
}

static __inline void replaceBuffer(Buffer &destination, Allocator *allocator,
                          void *allocation, u32 count)
{
    Allocator *oldAllocator = destination.allocator;
    unsigned char *oldBegin = destination.begin;
    destination.allocator = allocator;
    destination.begin = static_cast<unsigned char *>(allocation);
    destination.end = static_cast<unsigned char *>(allocation);
    destination.capacityAndFlags = count & 0x3fffffffU;
    if (oldAllocator && oldBegin)
        oldAllocator->vtable->deallocate(oldAllocator, oldBegin);
}

static __inline s32 transformCount(const Buffer &buffer)
{
    return reinterpret_cast<const Transform *>(buffer.end) -
        reinterpret_cast<const Transform *>(buffer.begin);
}

static __inline unsigned char *transformAddress(unsigned char *base, s32 index)
{
    return base + index * sizeof(Transform);
}

static __inline void resizeTransforms(Animation *animation, s32 requested)
{
    Buffer &buffer = animation->transforms;
    s32 size = transformCount(buffer);

    if (requested < size) {
        if (requested < 0)
            requested = 0;
        buffer.end = transformAddress(buffer.begin, requested);
        return;
    }

    s32 capacity =
        static_cast<s32>(buffer.capacityAndFlags & 0x3fffffffU);
    if (capacity < requested) {
        if (buffer.allocator &&
            (buffer.capacityAndFlags & 0xc0000000U) == 0x40000000U) {
            unsigned char *allocation = static_cast<unsigned char *>(
                buffer.allocator->vtable->allocate(
                    buffer.allocator,
                    static_cast<u32>(requested) << 6, 32));
            unsigned char *destination = allocation;
            unsigned char *source = buffer.begin;
            unsigned char *end = buffer.end;
            s32 copied = 0;
            if (source != end) {
                do {
                    if (destination) {
                        Transform *to = reinterpret_cast<Transform *>(destination);
                        Transform *from = reinterpret_cast<Transform *>(source);
                        nn_math_ARMv6_MTX34CopyAsm(&to->matrix, &from->matrix);
                        to->scale[0] = from->scale[0];
                        to->scale[1] = from->scale[1];
                        to->scale[2] = from->scale[2];
                        to->flags = from->flags;
                    }
                    source = transformAddress(source, 1);
                    destination = transformAddress(destination, 1);
                } while (source != end);
                copied = transformCount(buffer);
            }
            if (buffer.begin)
                buffer.allocator->vtable->deallocate(buffer.allocator,
                                                     buffer.begin);
            buffer.begin = allocation;
            buffer.end = transformAddress(allocation, copied);
            buffer.capacityAndFlags =
                (buffer.capacityAndFlags & 0xc0000000U) |
                static_cast<u32>(requested);
        } else {
            requested = static_cast<s32>(
                buffer.capacityAndFlags & 0x3fffffffU);
        }
    }

    size = transformCount(buffer);
    for (s32 i = size; i < requested; ++i) {
        Transform *transform =
            reinterpret_cast<Transform *>(transformAddress(buffer.begin, i));
        if (!transform)
            continue;

        if (!(static_cast<u32>(DAT_00476634) & 1U)) {
            if (__cxa_guard_acquire(&DAT_00476634)) {
                DAT_004efd6c.elements[0] = 1.0f;
                DAT_004efd6c.elements[1] = 0.0f;
                DAT_004efd6c.elements[2] = 0.0f;
                DAT_004efd6c.elements[3] = 0.0f;
                DAT_004efd6c.elements[4] = 0.0f;
                DAT_004efd6c.elements[5] = 1.0f;
                DAT_004efd6c.elements[6] = 0.0f;
                DAT_004efd6c.elements[7] = 0.0f;
                DAT_004efd6c.elements[8] = 0.0f;
                DAT_004efd6c.elements[9] = 0.0f;
                DAT_004efd6c.elements[10] = 1.0f;
                DAT_004efd6c.elements[11] = 0.0f;
            }
        }
        nn_math_ARMv6_MTX34CopyAsm(&transform->matrix, &DAT_004efd6c);
        transform->scale[0] = 1.0f;
        transform->scale[1] = 1.0f;
        transform->scale[2] = 1.0f;
        transform->flags = 0x801;
    }
    buffer.end = transformAddress(buffer.begin, requested);
}

static __inline Animation *createPrimary(AnimationResource *resource,
                                u32 channelCount)
{
    const s32 trackCount = resource->trackCount;
    Allocator *allocator = asdMemoryGetDefaultAllocator();
    Animation *animation = static_cast<Animation *>(
        allocator->vtable->allocate(allocator, 112, 4));
    if (!animation)
        return 0;

    animation->allocator = allocator;
    animation->reserved8 = 0;
    animation->references = 1;
    animation->vtable = &DAT_00421468;
    animation->channels.allocator = NULL;
    animation->channels.begin = NULL;
    animation->channels.end = NULL;
    animation->channels.capacityAndFlags = 0;
    animation->tracks.allocator = NULL;
    animation->tracks.begin = NULL;
    animation->tracks.end = NULL;
    animation->tracks.capacityAndFlags = 0;
    animation->channelMethods = DAT_00422058;
    animation->trackMethods = DAT_0042208c;
    animation->previousFrame = 0.0f;
    animation->frame = 0.0f;
    animation->speed = 1.0f;
    animation->startFrame = 0.0f;
    animation->endFrame = 1.0f;
    animation->playPolicy = FUN_00155650;
    animation->reserved80 = 0;
    animation->resource = 0;
    animation->enabled = 1;
    animation->state89 = 0;
    animation->state90 = 0;
    animation->vtable = &DAT_00421570;
    animation->state91 = 0;
    animation->state92 = 0;
    animation->state93 = 0;
    animation->transforms.allocator = NULL;
    animation->transforms.begin = NULL;
    animation->transforms.end = NULL;
    animation->transforms.capacityAndFlags = 0;

    animation->resource = resource;
    animation->speed = 1.0f;
    animation->startFrame = 0.0f;
    animation->endFrame = resource->endFrame;
    animation->previousFrame = 0.0f;
    animation->frame = 0.0f;
    if (resource->playMode == 0)
        animation->playPolicy = FUN_00155650;
    else if (resource->playMode == 1)
        animation->playPolicy = nw_anim_PlayPolicy_Loop;
    animation->enabled = 1;

    allocator = animation->allocator;
    void *storage = allocator->vtable->allocate(allocator, channelCount << 2, 4);
    if (!storage)
        return animation;
    replaceBuffer(animation->channels, animation->allocator, storage,
                  channelCount);

    allocator = animation->allocator;
    storage = allocator->vtable->allocate(
        allocator, static_cast<u32>(trackCount) << 2, 4);
    if (!storage)
        return animation;
    replaceBuffer(animation->tracks, animation->allocator, storage,
                  static_cast<u32>(trackCount));

    allocator = animation->allocator;
    storage = allocator->vtable->allocate(
        allocator, static_cast<u32>(trackCount) << 6, 4);
    if (!storage)
        return animation;
    replaceBuffer(animation->transforms, animation->allocator, storage,
                  static_cast<u32>(trackCount));
    resizeTransforms(animation, resource->trackCount);
    return animation;
}

static __inline void installBinding(BindingTable *table, s32 index,
                           Animation *animation)
{
    if (index < 0)
        return;
    s32 count = static_cast<s32>(
        reinterpret_cast<u32>(table->end) -
        reinterpret_cast<u32>(table->begin)) >> 2;
    if (index >= count || table->stride <= 0)
        return;
    const u32 slot =
        static_cast<u32>(index) *
        static_cast<u32>(table->stride);
    table->entries[slot] = animation;
}

extern "C" void modelSetupCreatePartAnimations(ModelSetup *setup)
{
    if (setup->state != 1 || !setup->source)
        return;

    setup->model = asdMdlManagerCreateFromSourceB(
        setup->source, setup->creationArgument, setup->creationFlags);
    ModelData *data = setup->model->data;

    for (int i = 0; i < 3; ++i) {
        const char *name = static_cast<const char *>(
            resolveRelative(data->parts[i]->name->nameRelative));
        AnimationResource *primary = static_cast<AnimationResource *>(
            lookupResource(data->source->dictionaries->primaryRelative, name));
        if (primary) {
            Binding *binding = data->parts[i]->primaryBinding;
            Animation *animation =
                createPrimary(primary, binding->data->channelCount);
            animation->vtable->bind(animation, binding);

            ModelPart *part = data->parts[i];
            if (part->primaryBinding)
                installBinding(part->bindings, part->primaryIndex, animation);
            setup->primary[i] = animation;
        }

        void *secondary =
            lookupResource(data->source->dictionaries->secondaryRelative, name);
        if (secondary) {
            Binding *binding = data->parts[i]->secondaryBinding;
            SecondaryParameters parameters;
            parameters.resource = secondary;
            parameters.channels = binding->data->channelCount;
            parameters.count = parameters.channels;
            parameters.initialize = 1;

            Allocator *allocator = asdMemoryGetDefaultAllocator();
            void *storage = allocator->vtable->allocate(allocator, 116, 4);
            Animation *animation = 0;
            if (storage) {
                animation = FUN_002a5dc4(storage, allocator);
                FUN_002a5960(animation, &parameters, parameters.channels,
                             parameters.count, parameters.initialize);
            }
            animation->vtable->bind(animation, binding);

            ModelPart *part = data->parts[i];
            if (part->secondaryBinding)
                installBinding(part->bindings, part->secondaryIndex, animation);
            setup->secondary[i] = animation;
        }
    }

    FUN_002a0428(setup->model, 1);
    if (setup->model) {
        setup->model->data->parts[0]->visible = 0;
        setup->model->data->parts[1]->visible = 0;
        setup->model->data->parts[2]->visible = 0;
    }
    setup->state = 2;
}
}
