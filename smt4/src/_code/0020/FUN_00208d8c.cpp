#include "shard/W8_X10_ActiveTextureSlot.h"
#include "AsdSDK/FileLoadSync.h"

extern "C" {

extern ActiveTextureSlot *g_activeTextureSlot;

AsdTexture *asdTextureCreate(s32 flags);
void FUN_0019fc50(AsdTexture *texture, const void *data, u32 size, u32 flags);
void asdMemFree(void *block);

/* Clears every particle's state and position. */
static void resetParticles(void)
{
    s32 i;

    for (i = 0; i < ACTIVE_TEXTURE_SLOT_PARTICLES; i++) {
        g_activeTextureSlot->particleState[i] = 0;
        g_activeTextureSlot->particlePosition[i][0] = 0.0f;
        g_activeTextureSlot->particlePosition[i][1] = 0.0f;
        g_activeTextureSlot->particlePosition[i][2] = 0.0f;
    }
}

/* Loads the smoke texture (test/kemuri.tmx) into the active texture slot and resets its particles. */
void FUN_00208d8c(void)
{
    AsdTexture *texture = asdTextureCreate(0);
    void *data;
    u32 size;

    g_activeTextureSlot->texture = texture;
    data = fileLoadSync("test/kemuri.tmx", &size, 0);
    FUN_0019fc50(texture, data, size, 0x10000);
    asdMemFree(data);
    asdTextureSetImage(texture);
    g_activeTextureSlot->texture->unk3c = 1;
    g_activeTextureSlot->texture->unk40 = 1;
    resetParticles();
}

} /* extern "C" */
