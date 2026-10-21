/* NON_MATCHING: typed relocation records let the compiler cache counts and index stores; retail reloads counts while walking records. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct TmxTextureRecord {
    u8 data[0x50];
};
struct TmxGroupRecord {
    u8 unk00[0xc];
    union {
        s32 textureIndex;
        TmxTextureRecord *texture;
    };
    u32 unk10;
};
struct TmxSetRecord {
    union {
        s32 groupIndex;
        TmxGroupRecord *group;
    };
    u32 unk04;
    union {
        u32 dataOffset;
        u8 *data;
    };
    u32 unk0c;
};
struct TmxLoadResult {
    TmxHeader *image;
    TexFile **result;
};

extern "C" {
extern const char DAT_005271bc[];
void *FUN_0014e3bc(u32 size, u32 flags);

// Relocate TMX group/set offsets, then build runtime texture nodes for every set.
u32 aocTexRelocateTmxAndCreateNodes(TmxLoadResult *load)
{
    TmxHeader *header = load->image;
    u8 *image = reinterpret_cast<u8 *>(header);
    TmxTextureRecord *textures = reinterpret_cast<TmxTextureRecord *>(image + header->texOffset);
    TmxGroupRecord *groups = reinterpret_cast<TmxGroupRecord *>(image + header->groupOffset);
    TmxSetRecord *sets = reinterpret_cast<TmxSetRecord *>(image + header->setOffset);
    u8 *data = image + header->dataOffset;
    TmxGroupRecord *group = groups;
    for (s32 index = 0; index < header->groupCount; ++index, ++group) {
        if (group->textureIndex == -1) {
            group->texture = NULL;
        } else {
            group->texture = &textures[group->textureIndex];
        }
    }
    TmxSetRecord *set = sets;
    for (s32 index = 0; index < header->setCount; ++index, ++set) {
        set->group = &groups[set->groupIndex];
        set->data = data + set->dataOffset;
    }
    asdDebugTrace(DAT_005271bc, 62);
    TexFile *file = static_cast<TexFile *>(FUN_0014e3bc(sizeof(TexFile), 0));
    if (header->setCount < 1) {
        file->nodes = NULL;
    } else {
        asdDebugTrace(DAT_005271bc, 65);
        file->nodes = static_cast<TexNode *>(FUN_0014e3bc(header->setCount * sizeof(TexNode), 0));
    }
    TexNode *node = file->nodes;
    for (s32 index = 0; index < header->setCount; ++index, ++node, ++sets) {
        node->file = file;
        node->set = reinterpret_cast<u32 *>(sets);
    }
    file->image = image;
    file->image2 = image;
    *load->result = file;
    return 1;
}
}
