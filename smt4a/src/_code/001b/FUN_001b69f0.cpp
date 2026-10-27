/* NON_MATCHING: only the second header copy's argument setup differs (retail predicates the add: addge r1, r4, #44 before the blt; the build adds after the branch). */
#include "common.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"
#include "util/MemoryHelpers.h"

/* One command block of a primitive: a flag byte and the data to copy into the command buffer. */
struct PrimitiveCommandBlock {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 enabled;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ const u8 *data;
    /* 0x1C */ u32 size;
};

/* The primitive resource: the number of command blocks and the relative list of them. */
struct PrimitiveCommands {
    /* 0x00 */ u32 count;
    /* 0x04 */ ResourceRelativePointer<ResourceRelativePointer<PrimitiveCommandBlock> > blocks;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 flags;
};

struct DrawState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 shader;
    /* 0x0C */ u8 unk0c[4];
    /* 0x10 */ s32 mode;
};

struct DrawSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ DrawState *state;
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ u8 header[0x18];
    /* 0x2C */ u8 extra[4];
};

struct DrawStateOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ DrawSource *source;
};

extern "C" {

extern u8 *g_commandBufferCursor;
u8 *nw_gfx_internal_FastWordCopyAsm_6(u8 *output, const void *commands);
void nw_gfx_res_ResPrimitive_SetupDrawCommand(PrimitiveCommands **primitive, s32 hasShader);

/* Copies a data block to the command buffer and advances the cursor past it (whole words). */
static void commandAppend(const u8 *data, u32 size)
{
    nnnstdMemCpy(g_commandBufferCursor, data, size);
    g_commandBufferCursor += size & ~3;
}

/* Appends the draw header words and every enabled command block of the primitive to the command buffer. */
void FUN_001b69f0(DrawStateOwner *owner, PrimitiveCommands *primitive)
{
    DrawSource *source = owner->source;
    g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_6(g_commandBufferCursor, source->header);
    if (source->state->mode >= 0) {
        g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_6(g_commandBufferCursor, source->extra);
    }
    if ((primitive->flags & 1) == 0) {
        nw_gfx_res_ResPrimitive_SetupDrawCommand(&primitive, owner->source->state->shader != 0);
    }
    ResourceRelativePointer<PrimitiveCommandBlock> *block = primitive->blocks.get();
    ResourceRelativePointer<PrimitiveCommandBlock> *end = block + primitive->count;
    for (; block != end; ++block) {
        PrimitiveCommandBlock *command = block->get();
        if (command->enabled != 0) {
            commandAppend(command->data, command->size);
        }
    }
}

} /* extern "C" */
