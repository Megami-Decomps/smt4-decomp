#ifndef GFX_MATERIALNAMESELECTION_H
#define GFX_MATERIALNAMESELECTION_H
#include "common.h"
#include <stddef.h>

struct MaterialNamedResource {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ char *name;
};
struct NamedMaterialRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MaterialNamedResource *resources[3];
    /* 0x10 */ u8 unk10[0x1C];
};
struct MaterialBindingRecord {
    /* 0x00 */ u16 materialIndex;
    /* 0x02 */ u8 unk02[0x36];
};
struct MaterialSelectionMetadata {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ NamedMaterialRecord *materials;
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ MaterialBindingRecord *bindings;
    /* 0x44 */ s32 bindingCount;
};
struct MaterialSelectionModel {
    /* 0x000 */ u8 unk000[0x210];
    /* 0x210 */ MaterialSelectionMetadata *metadata;
};
struct MaterialSelectionOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MaterialSelectionModel *model;
};
struct MaterialNameMatch {
    s16 materialIndex;
    s16 resourceIndex;
};
struct MaterialNameSelection {
    /* 0x000 */ u8 unk000[0x90];
    /* 0x090 */ MaterialSelectionOwner *owner;
    /* 0x094 */ u8 unk094[0x198];
    /* 0x22C */ u32 current;
    /* 0x230 */ MaterialNameMatch matches[64];
    /* 0x330 */ s32 count;
};

typedef char MaterialNameSelectionLayoutCheck[
    sizeof(NamedMaterialRecord) == 0x2C &&
    offsetof(NamedMaterialRecord, resources) == 4 &&
    sizeof(MaterialBindingRecord) == 0x38 &&
    offsetof(MaterialSelectionMetadata, materials) == 0x34 &&
    offsetof(MaterialSelectionMetadata, bindings) == 0x40 &&
    offsetof(MaterialSelectionMetadata, bindingCount) == 0x44 &&
    offsetof(MaterialSelectionModel, metadata) == 0x210 &&
    offsetof(MaterialSelectionOwner, model) == 4 &&
    offsetof(MaterialNamedResource, name) == 0x1C &&
    offsetof(MaterialNameSelection, owner) == 0x90 &&
    offsetof(MaterialNameSelection, current) == 0x22C &&
    offsetof(MaterialNameSelection, matches) == 0x230 &&
    offsetof(MaterialNameSelection, count) == 0x330 ? 1 : -1];
#endif
