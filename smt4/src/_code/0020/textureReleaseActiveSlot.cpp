#include "common.h"

extern "C" {

struct Texture;
extern Texture **g_activeTextureSlot;
void asdTextureRelease(Texture *texture);

/* Release the texture owned by the active texture slot. */
void textureReleaseActiveSlot(void)
{
    asdTextureRelease(*g_activeTextureSlot);
}

}
