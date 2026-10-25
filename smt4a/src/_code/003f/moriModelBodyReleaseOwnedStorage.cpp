/* NON_MATCHING: Native storage destructors recover subobject bases; pre-destructor values cleanup and loop index address register still differ. */
#include "Model/MoriModelContent.h"
#include "shard/W6_W6Match2_AnimationPlayback.h"

class MoriModelOwnedObject {
public:
    virtual ~MoriModelOwnedObject();
};
struct MoriAnimationStorage {
    union {
        AnimationSelection selection;
        struct {
            u8 unk00[0x10];
            void *frames;
            u8 unk14[0x10];
        } buffers;
    };
    u8 unk24[8];
    void *values;
    ~MoriAnimationStorage();
};
struct MoriRootStorage {
    u8 unk00[8];
    void *buffer;
    u8 unk0c[0x10];
    ~MoriRootStorage();
};
struct MoriModelCleanupView {
    u32 unk000;
    u32 flags;
    MoriRootStorage root;
    MoriAnimationStorage animations[4]; // 0x24
    u8 unk0e4[0x128];
    MoriModelOwnedObject *resources; // 0x20c
    u8 unk210[0x44];
    void *entries; // 0x254
    u32 count;
    MoriModelOwnedObject *effect;
    void *buffer260;
    void *buffer264;
};
extern "C" void asdMemFree(void *buffer);

__inline MoriAnimationStorage::~MoriAnimationStorage()
{
    if (buffers.frames != NULL) {
        asdMemFree(buffers.frames);
        buffers.frames = NULL;
    }
    if (values != NULL) {
        asdMemFree(values);
        values = NULL;
    }
}

__inline MoriRootStorage::~MoriRootStorage()
{
    if (buffer != NULL) {
        asdMemFree(buffer);
        buffer = NULL;
    }
}

extern "C" void moriModelBodyReleaseOwnedStorage(MoriModelBody *body)
{
    MoriModelCleanupView *object = (MoriModelCleanupView *)body;
    if (object->effect != NULL) {
        delete object->effect;
        object->effect = NULL;
    }
    object->animations[3].~MoriAnimationStorage();
    if (object->animations[2].values != NULL) {
        asdMemFree(object->animations[2].values);
        object->animations[2].values = NULL;
    }
    object->animations[2].~MoriAnimationStorage();
    for (s32 index = 0; index < 2; ++index) {
        object->animations[index].~MoriAnimationStorage();
    }
    object->root.~MoriRootStorage();
    if (object->buffer264 != NULL) {
        asdMemFree(object->buffer264);
        object->buffer264 = NULL;
    }
    if (object->buffer260 != NULL) {
        asdMemFree(object->buffer260);
        object->buffer260 = NULL;
    }
    void *entries = object->entries;
    object->entries = NULL;
    object->count = 0;
    if (entries != NULL) {
        asdMemFree(entries);
    }
    if ((object->flags & 8) && object->resources != NULL) {
        delete object->resources;
        object->resources = NULL;
    }
}
