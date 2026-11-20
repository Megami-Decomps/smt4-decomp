#ifndef GFX_NAMEDMODELMATERIAL_H
#define GFX_NAMEDMODELMATERIAL_H
#include <stddef.h>
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

struct NamedMaterialDictionary;
struct NamedModelMaterial {
    u32 unk00;
    u8 flag;
    u8 unk05[3];
};
/* A node of nw::ut::ResDicPatricia's tree; node 0 is the root, the entries are nodes 1 and up. */
struct NamedMaterialDictionaryEntry {
    /* 0x00 */ u32 reference;
    /* 0x04 */ u16 left;
    /* 0x06 */ u16 right;
    /* 0x08 */ s32 nameOffset;
    /* 0x0C */ ResourceRelativePointer<NamedModelMaterial> material;
};
/* The material dictionary ('DICT' block, nw::ut::ResDicPatriciaData). */
struct NamedMaterialDictionary {
    /* 0x00 */ u32 signature;
    /* 0x04 */ u32 size;
    /* 0x08 */ s32 count;
    /* 0x0C */ NamedMaterialDictionaryEntry nodes[1];
};
struct NamedMaterialResource {
    u8 unk00[0xD0];
    ResourceRelativePointer<NamedMaterialDictionary> materials;
};
struct NamedMaterialModel {
    u8 unk00[8];
    NamedMaterialResource *resource;
    u8 unk0C[0x170];
    NamedModelMaterial *overridesBegin;
    NamedModelMaterial *overridesEnd;
};
struct NamedMaterialOwner {
    u8 unk00[0x2C];
    NamedMaterialModel *model;
};
typedef char NamedMaterialLayoutCheck[
    sizeof(NamedModelMaterial) == 8 && sizeof(NamedMaterialDictionaryEntry) == 0x10 &&
    offsetof(NamedMaterialDictionary, nodes) == 0xC &&
    offsetof(NamedMaterialResource, materials) == 0xD0 &&
    offsetof(NamedMaterialModel, overridesBegin) == 0x17C &&
    offsetof(NamedMaterialModel, overridesEnd) == 0x180 &&
    offsetof(NamedMaterialOwner, model) == 0x2C ? 1 : -1];
#endif
