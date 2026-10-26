#ifndef CLASSES_SOUNDCURSORREQUESTS_H
#define CLASSES_SOUNDCURSORREQUESTS_H

#include "classes/Obj421aa4Requests.h"
#include "classes/Obj421d74.h"
#include <stddef.h>

/* The extra parameters a type-0x25 (cursor) request carries. */
struct SoundRequestExtra {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 mode;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 third;
};

/* The 10-word request node (0x28 bytes). */
struct Obj421aa4NodeTen : Obj421aa4NodeWide {
    /* 0x20 */ u32 word4;
    /* 0x24 */ u32 word5;
};

/* The fields of the cursor sound owner the cursor requests use: its parameter holder (whose address
 * names the voice), the stored extra parameters, the posted value pair, the state and the sent flag. */
struct SoundCursorBlock {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ SoundRequestExtra extra;
    /* 0x48 */ u8 unk48[8];
    /* 0x50 */ u32 first;
    /* 0x54 */ u32 second;
    /* 0x58 */ u8 unk58[4];
    /* 0x5C */ u8 state;
    /* 0x5D */ u8 unk5D;
    /* 0x5E */ u8 sent;
};

struct SoundCursorOwner {
    /* 0x000 */ u8 unk000[0xF4];
    /* 0x0F4 */ Obj421d74 params;
    /* 0x194 */ u8 unk194[0x400 - 0x194];
    /* 0x400 */ SoundCursorBlock block;
};

typedef char SoundCursorOwnerLayoutCheck[
    offsetof(SoundCursorOwner, params) == 0xF4 && offsetof(SoundCursorOwner, block) == 0x400 &&
    offsetof(SoundCursorBlock, extra) == 0x3C && offsetof(SoundCursorBlock, first) == 0x50 &&
    offsetof(SoundCursorBlock, state) == 0x5C && offsetof(SoundCursorBlock, sent) == 0x5E ? 1 : -1];

/* Enqueues a type-0x25 sound request for the owner's parameter holder carrying `first`, `second` and
 * the extra parameters, and remembers the pair. */
static __inline void soundCursorPost(SoundCursorOwner *owner, u32 first, u32 second, const SoundRequestExtra *extra)
{
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4NodeTen *node = (Obj421aa4NodeTen *)soundRequestBegin(manager, 10);
    node->type = 0x25;
    node->id = (u32)&owner->params;
    node->word = first;
    node->word2 = second;
    node->word3 = extra->first;
    node->word4 = extra->mode;
    node->word5 = extra->third;
    listAppendNode(manager, node);
    owner->block.first = first;
    owner->block.second = second;
    owner->block.sent = 1;
}

#endif
