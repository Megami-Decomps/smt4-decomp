/* NON_MATCHING: retail spills the shadow-map name pointer and the mode to the stack and lays the matrix-path block after the plain one; built keeps them in registers and orders the blocks the other way (231 rows vs 235); the pass logic is the same. */
#include "common.h"
#include "nw/math/MTX34.h"

using nw::math::MTX34;

/* The shadow map slot table of a model (the part read here): a name table at +4 and entries
 * of 12 bytes at the start. */
struct ShadowEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 hidden;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 **texture;
};

struct ShadowTable {
    /* 0x00 */ ShadowEntry *entries;
    /* 0x04 */ u8 names[1];
};

/* A mesh's command buffers (only the fields used here, by their offsets). */
struct MeshCommands {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ const u32 *commandsA;    /* used when the mesh changed */
    /* 0x0C */ s32 commandsASize;
    /* 0x10 */ const u32 *commandsB;    /* used when only the second key changed */
    /* 0x14 */ s32 commandsBSize;
    /* 0x18 */ const u32 *commandsC;
    /* 0x1C */ s32 commandsCSize;
    /* 0x20 */ s16 keyA;
    /* 0x22 */ s16 keyB;
};

/* What the batch points at: its mesh and its shadow map table. */
struct BatchHeader {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ MeshCommands *mesh;
    /* 0x00C */ u8 unk00C[0x100];
    /* 0x10C */ ShadowTable *shadows;
};

struct ModelContext {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u8 *flags;               /* bit 1: the matrix path, bit 2: skip the draw */
};

/* The part of the draw request this reads, by its offsets. */
struct ShadowDraw {
    /* 0x00 */ ModelContext *context;
    /* 0x04 */ BatchHeader **batch;
    /* 0x08 */ u32 sceneArg;
    /* 0x0C */ u32 mode;
    /* 0x10 */ u8 *registers;           /* the uniform register indices */
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ const MTX34 *worldMatrix;
    /* 0x24 */ const MTX34 *viewMatrix;
    /* 0x28 */ u8 unk28;
    /* 0x29 */ s8 useWorld;
};

struct CommandHolder {
    /* 0x00 */ u32 *cursor;
};

struct ShadowRenderer {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ CommandHolder *commands;
    /* 0x10 */ u8 *target;              /* has a size word at +0xD0 */
    /* 0x14 */ u8 unk14[0x8C];
    /* 0xA0 */ s32 cachedId;
    /* 0xA4 */ s16 cachedKeyA;
    /* 0xA6 */ s16 cachedKeyB;
};

extern "C" {

extern const char DAT_00526038[];    /* "$shadowmap" */

u32 libc_strlen(const char *text);
u16 FUN_001a7a20(u8 *names, const char *text, u32 length);
void FUN_001a063c(CommandHolder *commands, const u32 *data, u32 size);
void FUN_0019a270(u32 *destination, const void *matrix, u32 header);
void FUN_0018f488(CommandHolder *commands, u32 mode, u32 size);
void FUN_001942a8(ModelContext *context, CommandHolder *commands);
void FUN_0019430c(ModelContext *context, CommandHolder *commands, u32 sceneArg, u8 *registers);

/* Emits a matrix upload command (register index, 12 floats) and advances the cursor. */
static inline void emitMatrix(CommandHolder *commands, u8 reg, const void *matrix)
{
    u32 *cursor = commands->cursor;

    cursor[0] = 0x80000000 | reg;
    cursor[1] = 0xf02c0;
    FUN_0019a270(cursor + 2, matrix, 0xbf02c1);
    commands->cursor = cursor + 16;
}

/* Re-emits the mesh's command buffer when its keys differ from the ones the last draw used. */
static inline void refreshCommands(ShadowRenderer *renderer, MeshCommands *mesh)
{
    if (renderer->cachedId == mesh->id && renderer->cachedKeyA == mesh->keyA && renderer->cachedKeyB == mesh->keyB) {
        return;
    }
    const u32 *data;
    s32 size;

    if (renderer->cachedId != mesh->id) {
        data = mesh->commandsA;
        size = mesh->commandsASize;
    } else if ((mesh->keyB == -1) != (renderer->cachedKeyB == -1)) {
        data = mesh->commandsC;
        size = mesh->commandsCSize;
    } else {
        data = mesh->commandsB;
        size = mesh->commandsBSize;
    }
    FUN_001a063c(renderer->commands, data, size << 2);
    renderer->cachedId = mesh->id;
    renderer->cachedKeyA = mesh->keyA;
    renderer->cachedKeyB = mesh->keyB;
}

/* Draws a model's shadow map pass: when the model has an active "$shadowmap" entry, refreshes
 * the mesh commands and uploads the world (or identity) and view matrices to the registers
 * before handing the draw to the pass routine for the model's mode. */
void FUN_0016c058(ShadowRenderer *renderer, ShadowDraw *draw)
{
    ModelContext *context = draw->context;
    u32 mode = draw->mode;
    CommandHolder *commands = renderer->commands;
    u8 *registers = draw->registers;
    s8 useWorld = draw->useWorld;
    BatchHeader *batch = *draw->batch;
    MeshCommands *mesh = batch->mesh;
    ShadowTable *shadows = batch->shadows;

    if (shadows == NULL) {
        return;
    }
    u16 slot = FUN_001a7a20(shadows->names, DAT_00526038, libc_strlen(DAT_00526038));

    if (slot == 0xFFFF) {
        return;
    }
    ShadowEntry *entry = &shadows->entries[slot];

    if (entry->hidden != 0 || **entry->texture == 0) {
        return;
    }
    if ((*context->flags & 2) == 0) {
        refreshCommands(renderer, mesh);
        emitMatrix(commands, registers[0x22], draw->worldMatrix);
        emitMatrix(commands, registers[10], draw->viewMatrix);
        if ((*context->flags & 4) != 0) {
            return;
        }
        FUN_0018f488(commands, mode, *(u32 *)(renderer->target + 0xD0));
        FUN_001942a8(context, commands);
    } else {
        refreshCommands(renderer, mesh);
        if (useWorld != 0) {
            emitMatrix(commands, registers[2], draw->worldMatrix);
        } else {
            emitMatrix(commands, registers[2], &MTX34::Identity());
        }
        emitMatrix(commands, registers[10], draw->viewMatrix);
        if ((*context->flags & 4) != 0) {
            return;
        }
        FUN_0018f488(commands, mode, *(u32 *)(renderer->target + 0xD0));
        FUN_0019430c(context, commands, draw->sceneArg, registers + 0x20);
    }
}

}
