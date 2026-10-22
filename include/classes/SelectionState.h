#ifndef CLASSES_SELECTION_STATE_H
#define CLASSES_SELECTION_STATE_H

#include "common.h"

/* A selection member whose enabled and visible defaults are initialized out of line. */
struct SelectionFlags {
    SelectionFlags();
    /* 0x00 */ u8 unk00[0xd];
    /* 0x0D */ u8 active;
    /* 0x0E */ u8 visible;
};

/* An empty rectangle has no selected item. */
struct SelectionRectangle {
    SelectionRectangle();
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 width;
    /* 0x0C */ f32 height;
    /* 0x10 */ s32 selection;
};

/* Serialized values used by the selection objects' copy and comparison hooks. */
struct SelectionValueRecord {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 active;
    /* 0x08 */ u32 kind;
    /* 0x0C */ void *owner;
    /* 0x10 */ u32 parameter;
    /* 0x14 */ s32 index;
    /* 0x18 */ union {
        struct {
            /* 0x18 */ u32 first;
            /* 0x1C */ u32 second;
            /* 0x20 */ s32 third;
        } words;
        struct {
            /* 0x18 */ u8 flags;
            /* 0x19 */ u8 unk19;
            /* 0x1A */ u16 first;
            /* 0x1C */ u16 second;
            /* 0x1E */ u16 third;
            /* 0x20 */ u16 fourth;
            /* 0x22 */ u8 fifth;
            /* 0x23 */ u8 sixth;
        } packed;
    } value;
};

typedef char SelectionValueRecordSizeCheck[sizeof(SelectionValueRecord) == 0x24 ? 1 : -1];

/* Decoded byte-stream command shared by the selection parser variants. */
struct SelectionCommand {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 selector;
    /* 0x18 */ u32 mode;
    /* 0x1C */ u32 first;
    /* 0x20 */ u32 second;
    /* 0x24 */ u32 third;
    /* 0x28 */ u32 fourth;
    /* 0x2C */ u32 fifth;
    /* 0x30 */ u32 sixth;
};

typedef char SelectionCommandSizeCheck[sizeof(SelectionCommand) == 0x34 ? 1 : -1];

/* Extended record used by the pool objects' larger copy/comparison hooks. */
struct ExtendedSelectionValueRecord : SelectionValueRecord {
    /* 0x24 */ u32 fourth;
    /* 0x28 */ u32 fifth;
    /* 0x2C */ u32 sixth;
    /* 0x30 */ u32 seventh;
};

typedef char ExtendedSelectionValueRecordSizeCheck[sizeof(ExtendedSelectionValueRecord) == 0x34 ? 1 : -1];

#endif
