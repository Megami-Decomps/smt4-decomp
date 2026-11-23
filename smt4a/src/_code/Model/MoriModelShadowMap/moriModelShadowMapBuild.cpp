/* NON_MATCHING: 251 lines (247 vs 248 rows), complete; most of them are stack offsets. Retail's frame is 392 bytes
 * against 384: it keeps 24 bytes nothing uses above the draw settings (sp+368), orders the locals combiner, area,
 * source, settings from the bottom (the build: combiner, settings, area, source) and keeps the tangent's sine and
 * cosine in the outgoing argument slots. It also takes one of the projection's two -0.5 terms from the pool and
 * negates the 0.5 register for the other, where the build shares one constant and pairs two stores. */
#include "common.h"
#include "classes/MoriModelShadowMap.h"
#include "classes/Obj557b68.h"
#include "gfx/TexSetup.h"
#include "gfx/GxRenderArea.h"
#include "nw/math/MTX34TextureProjection.h"
#include "shard/W6_W6Match4_GxDrawSettings.h"
#include "shard/W6_W6Match7_CombinerState.h"
#include "shard/W6_W6Match8_GpuDepth.h"
#include "gfx/GpuDepthRange.h"
#include "util/MemoryHelpers_Smt4a.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_FlagBanks.h"

struct GxMeshBinding;

extern "C" {

extern u32 *DAT_0056fcc4;   /* the address the shadow texture's source starts from */

void _ZN9SlotStateC1Ev(GxDrawSettings *settings);
u32 *FUN_00500994(const GxMeshBinding *binding, u32 *commands, u32 changed, s32 reset);
u32 *FUN_0042cbd8(u32 *output, u32 includePrefix);
u32 *asdGxAppendStateReset(u32 *commands, s32 reset);
u32 *FUN_0015fcec(const CombinerState *state, u32 *commands);
u32 *gpuEmitDepthBufferCommands(const GpuDepthState *state, u32 *commands, s32 first, s32 second);
u32 *gpuDepthRangeEmitCommands(const GpuDepthRange *range, u32 *commands);

enum {
    kShadowMapSize = 512,
    kHeapCommands = 0x10000,
    kHeapTexture = 0x30000,
    kShadowCommandBytes = 0x250
};

/* A render target's viewport and scissor, constructed for the top screen. */
struct ShadowRenderArea {
    /* 0x00 */ GxViewportState viewport;
    /* 0x10 */ ScissorState scissor;

    ShadowRenderArea()
    {
        viewport.x = 0;
        viewport.y = 0;
        viewport.width = 240;
        viewport.height = 320;
        scissor.enabled = 1;
        scissor.x = 0;
        scissor.y = 0;
        scissor.width = 240;
        scissor.height = 320;
        scissor.targetWidth = 256;
        scissor.targetHeight = 320;
    }
};

/* The depth state (0x18) and depth range (0x64) inside the draw settings, which GxDrawSettings shows as bytes. */
struct ShadowDrawSettings {
    union {
        GxDrawSettings settings;
        struct {
            u8 unk00[0x18];
            /* 0x18 */ GpuDepthState depth;
            u8 unk30[0x34];
            /* 0x64 */ GpuDepthRange range;
        } fields;
    };
};

/* Builds the shadow map: allocates its 512x512 texture and the texture's commands, gives `layer` the texture
 * projection and the shadow's clip range and colour, and writes the command list that makes the texture the
 * render target. */
void moriModelShadowMapBuild(MoriModelShadowMap *shadowMap, Obj557b68Layer *layer)
{
    Obj557b68Projection *projection = &layer->projection;
    TexSource source;
    source.address = *DAT_0056fcc4;
    source.height = kShadowMapSize;
    source.width = kShadowMapSize;
    source.unk0C = 1.0f;
    source.unk10 = 1.0f;
    source.unk14 = 1.0f;
    source.unk18 = 1.0f;
    source.simple = 1;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelShadowMap.cpp", 105);
    shadowMap->textureCommands =
        (u32 *)asdMemoryAllocAligned(kHeapCommands, 0x100, 0, source.simple != 0 ? 0x30 : 0x90, 16, 1);

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelShadowMap.cpp", 109);
    u32 pixelBytes;
    if (source.kind == 0 || source.simple != 0) {
        pixelBytes = source.height * source.width * 4;
    } else {
        pixelBytes = source.height * source.width * 2;
    }
    shadowMap->pixels = asdMemoryAlloc(kHeapTexture, 0x100, 0, pixelBytes, 1);
    FUN_0045af48(shadowMap->target, shadowMap->textureCommands, (u32)shadowMap->pixels, 0, &source);
    shadowMap->targetLists = shadowMap->target->lists[0];

    projection->unk01 = 0;
    mtx34TextureProjectionPerspectiveRad(&projection->matrixB, shadowMap->tuning.fovy, shadowMap->tuning.aspect, 0.5f, 0.5f,
                                         0.5f, 0.5f);
    projection->nearClip = shadowMap->tuning.nearClip;
    projection->farClip = shadowMap->tuning.farClip;
    /* Both are a four-byte colour. */
    layer->unk0e4.value = *(const u32 *)&shadowMap->state;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelShadowMap.cpp", 129);
    u32 *commands = (u32 *)asdMemoryAllocAligned(kHeapCommands, 0x100, 0, kShadowCommandBytes, 16, 1);
    shadowMap->commandBuffer = commands;

    /* The target's size pair, in the order the viewport takes it (TexSetup names the two words the other way). */
    u32 width = shadowMap->target->height3;
    u32 height = shadowMap->target->width3;
    ShadowRenderArea area;
    CombinerState combiner;
    gfxCombinerStateInitialize(&combiner);
    ShadowDrawSettings draw;
    _ZN9SlotStateC1Ev(&draw.settings);

    area.viewport.x = 0;
    area.viewport.y = 0;
    area.viewport.width = width;
    area.viewport.height = height;
    area.scissor.x = 0;
    area.scissor.y = 0;
    area.scissor.width = width;
    area.scissor.height = height;
    area.scissor.targetWidth = width;
    area.scissor.targetHeight = height;

    combiner.stages[0].color.function = 0;
    combiner.stages[0].color.sources[0] = 14;
    combiner.stages[0].color.operands[0] = 4;
    combiner.stages[0].alpha.function = 0;
    combiner.stages[0].alpha.sources[0] = 14;
    combiner.stages[0].alpha.operands[0] = 0;
    combiner.stages[0].constantColor.r = 0;
    combiner.stages[0].constantColor.a = 0;

    draw.fields.depth.depth = shadowMap->tuning.depthScale * shadowMap->tuning.nearClip /
                              (shadowMap->tuning.farClip - shadowMap->tuning.nearClip);
    draw.fields.depth.enabled = 1;
    draw.fields.range.mode = 1.0f / shadowMap->tuning.farClip;

    u32 *cursor = FUN_00501660(&area.viewport, commands);
    cursor = FUN_005015b0(&area.scissor, cursor);
    cursor = FUN_00500994((const GxMeshBinding *)shadowMap->target, cursor, 1, 1);
    cursor = FUN_0042cbd8(cursor, 1);
    cursor = asdGxAppendStateReset(cursor, 1);
    cursor = FUN_0015fcec(&combiner, cursor);
    cursor = gpuEmitDepthBufferCommands(&draw.fields.depth, cursor, 1, 1);
    cursor = gpuDepthRangeEmitCommands(&draw.fields.range, cursor);

    /* Pads the list so that, with its two-word end command, it is a multiple of 16 bytes. */
    u32 bytes = (((u32)cursor - (u32)commands) & ~3u) + 8;
    if ((bytes & 15) != 0) {
        s32 padding = 4 - ((bytes & 15) >> 2);
        for (s32 i = 0; i < padding; i++) {
            cursor[i] = 0;
        }
        cursor += padding;
    }
    cursor = FUN_001af0d0(cursor, 1);
    shadowMap->commandCount = cursor - commands;
    shadowMap->commands = commands;
    shadowMap->ready = 1;
}

} /* extern "C" */
