/* NON_MATCHING: 38 lines: the rotation arms for 180 and 270 degrees are separate blocks here where retail predicates
 * their constant moves into the compare chain and shares one store; the width and height loads use r5 (retail r1). */
#include "classes/Obj420a2c.h"

extern "C" {
void rt_memclr(void *memory, u32 size);
void asdTextureTileCreate(Obj420a2cEntry *tile, s32 width, s32 height, s32 x, s32 y, s32 sourceWidth,
                          s32 sourceHeight, u32 format, u32 type, u32 pixels, u32 flags);

/* Sets the rotation, in degrees, a tile is drawn with. */
static void tileSetRotation(Obj420a2cEntry *tile, f32 degrees)
{
    tile->rotation = degrees;
}

/* Allocates the pixel buffers of a source (one, or two for a split source) and builds a texture tile over
 * each; a split source's second tile shares the first buffer. Returns 0 when an allocation fails. */
int FUN_00423700(Obj420a2c *self, Obj420a2cSource *source, u32 *buffers, Obj420a2cEntry *tiles, u32 *sizes)
{
    s32 count = source->type == 6 ? 1 : 2;
    s32 width = source->width;
    s32 height = source->height;
    if (width > 512)
        sizes[0] = 1024;
    else if (width > 256)
        sizes[0] = 512;
    else
        sizes[0] = 256;
    if (count == 2)
        sizes[1] = sizes[0];
    s32 textureHeight;
    if (height > 512)
        textureHeight = 1024;
    else if (height > 256)
        textureHeight = 512;
    else
        textureHeight = 256;
    for (s32 i = 0; i < count; i++) {
        if (i == 1 && (source->type == 4 || source->type == 5 || source->type == 2 || source->type == 3)) {
            buffers[1] = buffers[0];
        } else {
            buffers[i] = self->owner->allocate(sizes[0] * textureHeight * 3, 0x80);
            if (buffers[i] == 0)
                return 0;
            rt_memclr((void *)buffers[i], sizes[0] * textureHeight * 3);
        }
        s32 type = source->type;
        if (type == 4 || type == 5) {
            asdTextureTileCreate(&tiles[i], sizes[0], textureHeight, (width >> 1) * i, 0, width >> 1, height, 0x6754,
                                 0x1401, buffers[i], 0);
        } else if (type == 2 || type == 3) {
            asdTextureTileCreate(&tiles[i], sizes[0], textureHeight, 0, (height >> 1) * i, width, height >> 1, 0x6754,
                                 0x1401, buffers[i], 0);
        } else {
            asdTextureTileCreate(&tiles[i], sizes[0], textureHeight, 0, 0, width, height, 0x6754, 0x1401, buffers[i],
                                 0);
        }
        if (source->rotation == 1)
            tileSetRotation(&tiles[i], 90.0f);
        else if (source->rotation == 2)
            tileSetRotation(&tiles[i], 180.0f);
        else if (source->rotation == 3)
            tileSetRotation(&tiles[i], 270.0f);
    }
    s32 type = source->type;
    if (type == 1 || type == 3 || type == 5) {
        self->firstFormat = 0x410;
        self->secondFormat = 0x400;
        self->firstIndex = 1;
        self->secondIndex = 0;
    } else {
        self->firstFormat = 0x400;
        self->secondFormat = 0x410;
        self->firstIndex = 0;
        self->secondIndex = 1;
    }
    return 1;
}

} /* extern "C" */
