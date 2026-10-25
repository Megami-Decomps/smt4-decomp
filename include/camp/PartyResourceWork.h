#ifndef CAMP_PARTY_RESOURCE_WORK_H
#define CAMP_PARTY_RESOURCE_WORK_H
#include "common.h"
#include <stddef.h>

struct PartyResourceWork {
    /* 0x0000 */ u8 unk0000[0x480C];
    /* 0x480C */ s16 touchRegionCount;
    /* 0x480E */ u8 unk480E[0x306];
    /* 0x4B14 */ s16 previewTexture;
    /* 0x4B16 */ u8 unk4B16[2];
    /* 0x4B18 */ s8 previewShared;
    /* 0x4B19 */ u8 unk4B19[0x7F];
    /* 0x4B98 */ void *data;
    /* 0x4B9C */ u8 unk4B9C[0x14];
    /* 0x4BB0 */ u32 loadedTextures[4];
};
struct PartyTextureSlot {
    /* 0x000 */ u8 unk000[0x62];
    /* 0x062 */ u16 id;
    /* 0x064 */ u8 unk064[0xCC];
    /* 0x130 */ u32 flags;
};
typedef char PartyResourceWorkOffsets[
    offsetof(PartyResourceWork, touchRegionCount) == 0x480C &&
    offsetof(PartyResourceWork, previewTexture) == 0x4B14 &&
    offsetof(PartyResourceWork, previewShared) == 0x4B18 &&
    offsetof(PartyResourceWork, data) == 0x4B98 &&
    offsetof(PartyResourceWork, loadedTextures) == 0x4BB0 &&
    sizeof(PartyResourceWork) == 0x4BC0 &&
    offsetof(PartyTextureSlot, id) == 0x62 &&
    offsetof(PartyTextureSlot, flags) == 0x130 &&
    sizeof(PartyTextureSlot) == 0x134 ? 1 : -1];
#endif
