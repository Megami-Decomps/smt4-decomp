/* NON_MATCHING: the stack frame differs (retail 300 bytes with the 40-byte state above the 256-byte tile buffer, built 376) and the tile index arithmetic is scheduled differently (174 vs 185 rows). */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

/* The conversion state handed to the per-format hooks and tile converters. */
typedef struct TexTileState {
    /* 0x00 */ u32 format;
    /* 0x04 */ u32 type;
    /* 0x08 */ s32 tilesX;
    /* 0x0C */ s32 tilesY;
    /* 0x10 */ u8 *source;
    /* 0x14 */ u8 *destination;
    /* 0x18 */ u32 width;
    /* 0x1C */ u32 height;
    /* 0x20 */ u32 flipVertical;
    /* 0x24 */ s32 mode;
} TexTileState;

typedef void (*TexFormatHook)(TexTileState *state);

extern TexFormatHook DAT_00472990[4];

void rt_memcpy(void *destination, const void *source, u32 size);
s32 textureConvertLinearTile(u8 tile[256], u32 destination, s32 rows, TexTileState *state);
s32 FUN_0023b260(u8 tile[256], s32 destination, s32 rows, TexTileState *state);

/* Converts a texture between the linear and 8x8-tiled layouts, one tile at a time through a
 * 256-byte buffer. `mode` 1 converts between the two tiled variants, `flipVertical` mirrors the
 * rows and `useHook` runs the per-format fixup first (GL_UNSIGNED_BYTE data only). Sizes must be
 * multiples of 4. Returns 1 on success, 0 on a bad size. */
u32 FUN_00349520(s32 mode, u32 format, u32 type, u32 width, u32 height, u8 *source, u8 *destination,
                 s32 flipVertical, s32 useHook)
{
    u8 tile[256];
    TexTileState state;

    if (((width | height) & 3) != 0) {
        return 0;
    }
    state.format = format;
    state.type = type;
    state.tilesX = width >> 3;
    state.tilesY = height >> 3;
    state.source = source;
    state.destination = destination;
    state.width = width;
    state.height = height;
    state.flipVertical = flipVertical != 0;
    state.mode = mode;
    if (useHook != 0 && type == 0x1401) {
        TexFormatHook hook;

        if (format == 0x6752) {
            hook = DAT_00472990[0];
        } else if (format == 0x6754) {
            hook = DAT_00472990[1];
        } else if (format == 0x6758) {
            hook = DAT_00472990[2];
        } else if (format != 0x6756) {
            hook = DAT_00472990[3];
        }
        if (format != 0x6756) {
            hook(&state);
        }
    }
    for (s32 y = 0; y < state.tilesY; y++) {
        for (s32 x = 0; x < state.tilesX; x++) {
            u32 index = y * state.tilesX + x;
            u32 row = index / state.tilesX;
            u32 column = index % state.tilesX;
            s32 bpp = gfxTexFormatGetBitsPerPixel(state.format, state.type);

            if (state.mode != 1) {
                u8 *line = state.source + (state.tilesX * row * 64 * bpp) / 8 + (column * bpp * 8) / 8;
                u8 *out = tile;

                for (s32 k = 0; k < 8; k++) {
                    rt_memcpy(out, line, (bpp * 8) / 8);
                    out += (bpp * 8) / 8;
                    line += (state.width * bpp) / 8;
                }
            } else {
                rt_memcpy(tile, state.source + (index * bpp * 64) / 8, (bpp * 64) / 8);
            }
            index = y * state.tilesX + x;
            row = index / state.tilesX;
            column = index % state.tilesX;
            bpp = gfxTexFormatGetBitsPerPixel(state.format, state.type);
            if (state.mode != 1) {
                if (state.flipVertical != 0) {
                    index = (state.tilesY - row - 1) * state.tilesX + column;
                }
                textureConvertLinearTile(tile, (u32)(state.destination + (index * bpp * 64) / 8), 8, &state);
            } else {
                u32 offset;

                if (state.flipVertical != 0) {
                    offset = ((state.tilesY - row - 1) * state.tilesX * 64 * bpp) / 8 + (column * bpp * 8) / 8;
                } else {
                    offset = (state.tilesX * row * 64 * bpp) / 8 + (column * bpp * 8) / 8;
                }
                FUN_0023b260(tile, (s32)(state.destination + offset), 8, &state);
            }
        }
    }
    return 1;
}

}
