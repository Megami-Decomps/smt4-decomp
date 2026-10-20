/* NON_MATCHING: retail builds the constant 0x30000 in r5 right after the first call (before the null test) and ORs flags through a second register; the constant is built where it is used here. */
#include "common.h"

extern "C" {

typedef struct TextureImage {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 format;
} TextureImage;

typedef struct Texture {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ TextureImage *image;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 flags;
} Texture;

Texture *asdTMTexTableCallFileB(void);
int FUN_002b9178(Texture *texture);
int asdTextureSetImage(TextureImage *image);

/* Fetches the texture, gives its image format 0x30000 and flags it (0x40, then 4 once the image is set). */
Texture *FUN_002e1574(void)
{
    u32 format = 0x30000;
    Texture *texture = asdTMTexTableCallFileB();

    if (texture != NULL) {
        FUN_002b9178(texture);
        if (texture->image != NULL) {
            texture->image->format = format;
            texture->flags |= 0x40;
            if (texture->image != NULL) {
                asdTextureSetImage(texture->image);
                texture->flags |= 4;
            }
        }
    }
    return texture;
}

} /* extern "C" */
