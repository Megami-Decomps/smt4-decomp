#ifndef GFX_NAMEDMODELMATERIAL_H
#define GFX_NAMEDMODELMATERIAL_H
#include "shard/S1NwGfx.h"

struct NamedModelMaterial {
    u32 unk00;
    u8 flag;
    u8 unk05[3];
};
struct NamedMaterialDictionaryEntry {
    u8 unk00[0xC];
    RelativePointer material;
};
struct NamedMaterialDictionary {
    u8 unk00[0x1C];
    NamedMaterialDictionaryEntry entries[1];
};
struct NamedMaterialResource {
    u8 unk00[0xD0];
    RelativePointer materials;
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
    offsetof(NamedMaterialDictionary, entries) == 0x1C &&
    offsetof(NamedMaterialResource, materials) == 0xD0 &&
    offsetof(NamedMaterialModel, overridesBegin) == 0x17C &&
    offsetof(NamedMaterialModel, overridesEnd) == 0x180 &&
    offsetof(NamedMaterialOwner, model) == 0x2C ? 1 : -1];
#endif
