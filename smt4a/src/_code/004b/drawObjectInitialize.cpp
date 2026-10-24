#include "common.h"

/* The 0x28-byte description record a draw object is built from. */
struct DrawDescription {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 width;
    /* 0x05 */ u8 height;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 resource;
    /* 0x0C */ u8 unk0C[0x1C];
};

/* Default size and resource of a draw source. */
struct DrawSource {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 width;
    /* 0x03 */ u8 height;
    /* 0x04 */ u32 resource;
};

/* The 0x84-byte draw object. */
struct DrawObject {
    /* 0x00 */ u32 unk00[6];
    union {
        /* 0x18 */ u32 flags;
        struct {
            /* 0x18 */ u16 id;
            /* 0x1A */ u16 unk1A;
        } parts;
    };
    /* 0x1C */ u8 unk1C[0x14];
    /* 0x30 */ f32 scaleX;
    /* 0x34 */ f32 scaleY;
    /* 0x38 */ u8 unk38[0x4C];
};

extern "C" {

void sysMemClear(void *memory, u32 bytes);
DrawSource *FUN_0015fa74(DrawSource *source, u32 argument);
const DrawDescription *FUN_004bb80c(u32 id);
void FUN_004bb9c0(DrawObject *object, DrawDescription *description);

/* Initializes a draw object for description `id`; the width, height and resource default from the draw source when the
 * description leaves them unset, and a positive width/height pair overrides them. */
void drawObjectInitialize(DrawObject *object, u32 id, DrawSource *source, u32 sourceArgument, s32 width, s32 height)
{
    sysMemClear(object, 0x84);
    object->unk00[0] = 0;
    object->unk00[1] = 0;
    object->unk00[2] = 0;
    object->unk00[3] = 0;
    object->unk00[4] = 0;
    object->unk00[5] = 0;
    object->scaleX = 1.0f;
    object->scaleY = 1.0f;
    DrawSource *defaults = FUN_0015fa74(source, sourceArgument);
    DrawDescription description = *FUN_004bb80c(id);
    if (description.width == 0) {
        description.width = defaults->width;
        description.height = defaults->height;
    }
    if (width > 0 && height > 0) {
        description.width = width;
        description.height = height;
    }
    if (description.resource == 0) {
        description.resource = defaults->resource;
    }
    object->parts.id = id;
    FUN_004bb9c0(object, &description);
    object->flags |= 0x100000;
}

} /* extern "C" */
