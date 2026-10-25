#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDENV_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDENV_H

#include "common.h"
#include "nw/ut/RuntimeTypeInfo.h"
#include "shard/W6_W6Match6_ResourceId.h"

struct AsdEnvironmentCommands {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 size;
    /* 0x10 */ s32 dataOffset;
};

/* Something that yields one 32-bit value (vtable slot 6). */
class AsdEnvValueSource {
public:
    virtual ~AsdEnvValueSource();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual u32 getValue();
};

/* The owner of the two display-size sources the environment nodes are checked against. */
struct AsdEnvContext {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ AsdEnvValueSource *heightSource;
    /* 0x25C */ u8 unk25c[4];
    /* 0x260 */ AsdEnvValueSource *widthSource;
};

/* Base of the environment node classes; the game's own type tag comes from vtable slot 2. */
class AsdEnvNode {
public:
    virtual ~AsdEnvNode();
    virtual const nw::ut::RuntimeTypeInfo *getRuntimeTypeInfo() const;
};

/* Pointer array of nodes (begin and end only). */
struct AsdEnvNodeArray {
    /* 0x00 */ AsdEnvNode **begin;
    /* 0x04 */ AsdEnvNode **end;

    s32 size() const { return end - begin; }
    AsdEnvNode *operator[](s32 index) const { return begin[index]; }
};

/* Node holding children. */
class AsdEnvGroup : public AsdEnvNode {
public:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ AsdEnvNodeArray children;
};

struct AsdEnvLeafData {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 width;
    /* 0x2C */ u32 height;
};

/* Node with its own data record. */
class AsdEnvLeaf : public AsdEnvNode {
public:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x50];
    /* 0x54 */ AsdEnvLeafData *data;
};

extern "C" {
void asdListBoxSetByteValue(u32 listBox, u8 value);
}

extern "C" {
u32 *gameFlagBlockGetEntry(s32 index);
}

extern "C" {
u8 asdFileRequestHasFailed(s32 *valueRef);
}

extern "C" {
u8 *gameFlagBlockGet(void);
}

#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 byteIsAtLeast100(u8 *valueRef);

#ifdef __cplusplus
}
#ifdef __cplusplus
extern "C" {
#endif

u32 legacyResourceIdRemap(const PackedResourceId *resource);

#ifdef __cplusplus
}
#endif

#endif
