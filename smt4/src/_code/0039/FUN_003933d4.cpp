/* NON_MATCHING: intrinsic-dimension cases are merged differently and resource constants occupy different literal-pool positions. */
/* Draws an indexed resource record, using its intrinsic dimensions when requested. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_002a6d1c(void *parameters, u32 flags, u32 first, u32 second, u32 third);
void FUN_003937e4(void *group, void *entry, const void *parameters);

void FUN_003933d4(void *object, u32 flags, u32 bank, u32 id, s32 index, u32 first, u32 second, u32 third)
{
    struct TextureHeader { u8 unk00[8]; void *resource; };
    struct Dimensions {
        s16 width;
        s16 height;
        u16 kind;
        u8 unk06[6];
        u8 flags;
    };
    struct Entry {
        u8 unk00[0xC];
        Dimensions *dimensions;
        u32 unk10;
    };
    struct EntryList { Entry *begin; };
    struct Group {
        u32 unk00;
        EntryList *entries;
        void *resource;
        u8 unk0C[0x14];
    };
    struct Owner { Group *groups; };
    struct DrawParameters {
        u32 flags;
        s32 x;
        s32 y;
        u32 alpha;
        u32 unk10;
        u32 width;
        u32 height;
        u8 unk1C[0x10];
        u16 scaleX;
        u16 scaleY;
        f32 angle;
        s16 anchorX;
        s16 anchorY;
        s16 offsetX;
        s16 offsetY;
    };
    TextureHeader *texture = (TextureHeader *)asdTMTexTableCallFileB(bank, id);
    Group *group = &((Owner *)object)->groups[index / 1000];
    group->resource = texture->resource;
    Entry *entry = &group->entries->begin[index % 1000];
    Dimensions *dimensions = entry->dimensions;
    DrawParameters parameters;
    FUN_002a6d1c(&parameters, flags, first, second, third);
    if (dimensions != NULL) {
        if (dimensions->kind == 0) {
            if (!(dimensions->flags & 1)) {
                FUN_003937e4(group, entry, &parameters);
                return;
            }
            parameters.flags |= 0x8000;
            parameters.width = dimensions->width;
            parameters.height = dimensions->height;
        } else if (dimensions->kind == 1) {
            parameters.width = dimensions->width;
            parameters.height = dimensions->height;
        }
    }
    FUN_003937e4(group, entry, &parameters);
}
}
