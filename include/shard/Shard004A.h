/* Structs shared by the helper functions in code shard 004A. */
#ifndef SHARD_SHARD004A_H
#define SHARD_SHARD004A_H

#include "common.h"
#include <stddef.h>

#include "shard/Shard0049.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct BibleAnalyzeListEntry {
    u8 unk00[4];
    u16 id; // 0x04
    u8 unk06[0x1a];
};
typedef char BibleAnalyzeListEntryLayoutCheck[sizeof(BibleAnalyzeListEntry) == 0x20 &&
    offsetof(BibleAnalyzeListEntry, id) == 4 ? 1 : -1];

typedef struct Screen4A {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 state;
    /* 0x0018 */ u32 unk18;
    union {
        /* 0x001C */ u8 unk001C[0xC0];
        struct {
            /* 0x001C */ u8 unk001C[0xAC];
            /* 0x00C8 */ f32 position[2];
        } cursor;
        struct {
            u8 unk001CBeforeSelection[4];
            /* 0x0020 */ u8 selectedIndex[1];
        } listSelection;
        struct {
            u8 unk001CBeforeHolder[4];
            /* 0x0020 */ FlaggedValueHolder holder;
        } selection;
        struct {
            u8 unk001CBeforeCount[0x0C];
            /* 0x0028 */ s32 count;
        } listCount;
    };
    /* 0x00DC */ u8 block0DC[4];
    union {
        /* 0x00E0 */ u8 unk00E0[0x77C];
        struct {
            /* 0x00E0 */ u8 unk00E0[0x47C];
            /* 0x055C */ u8 selection[0x8A];
            /* 0x05E6 */ s8 confirmed;
        } input;
        struct {
            u8 unk00E0BeforeSprite[0x47C];
            /* 0x055C */ UiAnimatedSprite selection;
        } animation;
        struct {
            u8 unk00E0BeforeControls[0x738];
            /* 0x0818 */ u8 controls[0x34];
            /* 0x084C */ void *callback;
        } confirmation;
    };
    /* 0x085C */ u32 job;
    /* 0x0860 */ u8 unk0860;
    /* 0x0861 */ u8 unk0861[0xA00F];
    /* 0xA870 */ u8 unkA870;
    /* 0xA871 */ u8 unkA871;
    /* 0xA872 */ s16 unkA872;
    union {
        /* 0xA874 */ u16 unkA874;
        /* 0xA874 */ u32 displayNameId;
    };
} Screen4A;
typedef char Screen4ASizeCheck[sizeof(Screen4A) == 0xA878 ? 1 : -1];
typedef char Screen4ACursorOffsetCheck[offsetof(Screen4A, cursor.position) == 0xC8 ? 1 : -1];
typedef char Screen4AInputOffsetCheck[offsetof(Screen4A, input.selection) == 0x55C &&
    offsetof(Screen4A, input.confirmed) == 0x5E6 ? 1 : -1];
typedef char Screen4AAnalyzeOffsetCheck[offsetof(Screen4A, listSelection.selectedIndex) == 0x20 &&
    offsetof(Screen4A, animation.selection) == 0x55c &&
    offsetof(Screen4A, displayNameId) == 0xa874 ? 1 : -1];
typedef char Screen4AConfirmationOffsetCheck[
    offsetof(Screen4A, selection.holder) == 0x20 &&
    offsetof(Screen4A, listCount.count) == 0x28 &&
    offsetof(Screen4A, confirmation.controls) == 0x818 &&
    offsetof(Screen4A, confirmation.callback) == 0x84C &&
    sizeof(Screen4A) == 0xA878 ? 1 : -1];

struct PackedDimensionDecoder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 type;
    /* 0x18 */ u8 flags;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ u32 first;
    /* 0x20 */ u32 second;
};
struct ShortValueDecoder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 type;
    /* 0x18 */ u8 flags;
    /* 0x19 */ u8 unk19;
    /* 0x1A */ u16 first;
    /* 0x1C */ u16 second;
    /* 0x1E */ u16 third;
    /* 0x20 */ u16 fourth;
    /* 0x22 */ u8 fifth;
    /* 0x23 */ u8 sixth;
};

static __inline u16 decoderReadBigEndian16(const u8 *data)
{
    return (u16)(((u32)data[0] << 8) | data[1]);
}
static __inline u32 decoderReadBigEndian32(const u8 *data)
{
    return ((u32)data[0] << 24) | ((u32)data[1] << 16)
        | ((u32)data[2] << 8) | data[3];
}
typedef char PackedDimensionDecoderSizeCheck[sizeof(PackedDimensionDecoder) == 0x24 ? 1 : -1];
typedef char ShortValueDecoderSizeCheck[sizeof(ShortValueDecoder) == 0x24 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void FUN_003343f0(u8 value);
#ifdef __cplusplus
}
#endif

#endif
