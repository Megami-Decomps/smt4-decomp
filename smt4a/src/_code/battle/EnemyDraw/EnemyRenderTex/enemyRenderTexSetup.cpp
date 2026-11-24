/* NON_MATCHING: 10 lines; in the size search the image pointer and width limit swap r9/sl. */
#include <string.h>
#include "battle/EnemyRenderTex.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/AsdDebug.h"
#include "nw/gfx/ResGraphicsFile.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
extern const char g_enemyRenderTexSourceFileName[];
TextureUploadResourcePrefixIV *asdGxRenderTargetCreate(s32 width, s32 height, u32 parameter, u32 format, u32 type, u32 depthFormat, u32 flags);
TextureObject *textureBuildFileFromConfig(const TextureCreateInfoIV *info, MemoryAllocator *allocator);
void FUN_0015d8e0(TextureObject **object, MemoryAllocator *allocator, ResGraphicsFile file);
void FUN_00401798(EnemyRenderTex *target, const EnemyRenderTexConfiguration *configuration);

/* Choose bounded target dimensions, apply special effect modes, create a texture object over its upload
 * resource, and build the command block that binds the texture to each of the three texture units. */
void enemyRenderTexSetup(EnemyRenderTex *target, u32 parameter, u32 flags, const EnemyRenderTexConfiguration *configuration)
{
    target->marginX = 0.0f;
    target->marginY = 0.0f;
    target->useCustomSize = 0;
    target->useAlternateMode = 0;
    s32 width = 8;
    s32 height = 8;
    const EffectBoundsImage *image = target->binding->image;
    u16 imageWidth = image->width;
    for (s32 bit = 3; bit < 11; ++bit) {
        if (imageWidth < (1 << bit)) {
            width = 1 << bit;
            break;
        }
    }
    u16 imageHeight = image->height;
    for (s32 bit = 3; bit < 11; ++bit) {
        if (imageHeight < (1 << bit)) {
            height = 1 << bit;
            break;
        }
    }
    if (height > 512)
        height = 512;
    if (width > 512)
        width = 512;
    if (configuration) {
        if (configuration->kind == 15) {
            height = 512;
            width = 512;
            target->useCustomSize = 1;
        }
        if (configuration->kind == 16 && configuration->alternateMode)
            target->useAlternateMode = 1;
    }
    target->resource = asdGxRenderTargetCreate(width, height, parameter, 0x1908, 0x8033, 0x81A5, flags);
    MemoryAllocator *allocator = reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA());
    target->object = textureBuildFileFromConfig(
        &TextureCreateInfoIV()
            .setData(target->resource->data)
            .setHardwareFormat((u8)target->resource->texture->image.hardwareFormat)
            .setWidth(target->resource->texture->dimensions.width)
            .setHeight(target->resource->texture->dimensions.height),
        allocator);
    FUN_0015d8e0(&target->object, reinterpret_cast<MemoryAllocator *>(asdMemoryGetAllocatorA()), ResGraphicsFile(NULL));
    FUN_00401798(target, configuration);

    const AsdTexture *texture = target->resource->texture;
    u32 format = (u8)texture->image.hardwareFormat;
    u32 *commands;

    asdDebugTrace(g_enemyRenderTexSourceFileName, 145);
    target->unitCommands[0] = (u32 *)asdMemoryAlloc(ASD_HEAP_EXTRA, 0x100, 0, ENEMY_RENDER_TEX_COMMAND_WORDS * sizeof(u32), 1);
    memset(target->unitCommands[0], 0, ENEMY_RENDER_TEX_COMMAND_WORDS * sizeof(u32));
    commands = target->unitCommands[0];
    *commands++ = texture->dimensions.height | (texture->dimensions.width << 16);
    *commands++ = 0xF0082;
    s32 filterX = texture->filterX;
    *commands++ = ((filterX == 3 || filterX == 4 || filterX == 5) << 2) |
        (texture->filterY << 1) | ((format == 12 ? 2 : 0) << 4) |
        ((filterX == 2 || filterX == 5) << 24) | (texture->image.type << 28);
    *commands++ = 0xF0083;
    *commands++ = 0;
    *commands++ = 0x40084;
    *commands++ = texture->image.physicalAddress >> 3;
    *commands++ = 0xF0085;
    *commands++ = format;
    *commands++ = 0xF008E;
    *commands++ = 1;
    *commands++ = 0xF023D;

    asdDebugTrace(g_enemyRenderTexSourceFileName, 170);
    target->unitCommands[1] = (u32 *)asdMemoryAlloc(ASD_HEAP_EXTRA, 0x100, 0, ENEMY_RENDER_TEX_COMMAND_WORDS * sizeof(u32), 1);
    memset(target->unitCommands[1], 0, ENEMY_RENDER_TEX_COMMAND_WORDS * sizeof(u32));
    commands = target->unitCommands[1];
    *commands++ = texture->dimensions.height | (texture->dimensions.width << 16);
    *commands++ = 0xF0092;
    filterX = texture->filterX;
    *commands++ = ((filterX == 3 || filterX == 4 || filterX == 5) << 2) |
        (texture->filterY << 1) | ((format == 12 ? 2 : 0) << 4) |
        ((filterX == 2 || filterX == 5) << 24) | (texture->image.type << 28);
    *commands++ = 0xF0093;
    *commands++ = 0;
    *commands++ = 0x40094;
    *commands++ = texture->image.physicalAddress >> 3;
    *commands++ = 0xF0095;
    *commands++ = format;
    *commands++ = 0xF0096;
    *commands++ = 1;
    *commands++ = 0xF023D;

    asdDebugTrace(g_enemyRenderTexSourceFileName, 195);
    target->unitCommands[2] = (u32 *)asdMemoryAlloc(ASD_HEAP_EXTRA, 0x100, 0, ENEMY_RENDER_TEX_COMMAND_WORDS * sizeof(u32), 1);
    memset(target->unitCommands[2], 0, ENEMY_RENDER_TEX_COMMAND_WORDS * sizeof(u32));
    commands = target->unitCommands[2];
    *commands++ = texture->dimensions.height | (texture->dimensions.width << 16);
    *commands++ = 0xF009A;
    filterX = texture->filterX;
    *commands++ = ((filterX == 3 || filterX == 4 || filterX == 5) << 2) |
        (texture->filterY << 1) | ((format == 12 ? 2 : 0) << 4) |
        ((filterX == 2 || filterX == 5) << 24) | (texture->image.type << 28);
    *commands++ = 0xF009B;
    *commands++ = 0;
    *commands++ = 0x4009C;
    *commands++ = texture->image.physicalAddress >> 3;
    *commands++ = 0xF009D;
    *commands++ = format;
    *commands++ = 0xF009E;
    *commands++ = 1;
    *commands++ = 0xF023D;
}
}
