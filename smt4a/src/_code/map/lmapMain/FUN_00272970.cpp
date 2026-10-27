/* NON_MATCHING: creates and initialises the lmap main state (0x9370 bytes) and starts its calc and draw tasks; written from the decompilation, store order and constant materialisation not compared with retail */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/GameDataAccess.h"

/* One of the 0x88-byte lmap slots; the first three bytes are cleared here. The last slot of the
 * first array also holds three words that are set separately. */
struct LmapSlot {
    /* 0x00 */ u8 flagA;
    /* 0x01 */ u8 flagB;
    /* 0x02 */ u8 flagC;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u32 word04;
    /* 0x08 */ u32 word08;
    /* 0x0C */ u32 word0C;
    /* 0x10 */ u8 unk10[0x78];
};

struct LmapMainState {
    /* 0x0000 */ u32 process;
    /* 0x0004 */ u32 drawTask;
    /* 0x0008 */ u8 unk08;
    /* 0x0009 */ u8 unk09;
    /* 0x000A */ u8 unk0A;
    /* 0x000B */ u8 unk0B;
    /* 0x000C */ u32 unk0C;
    /* 0x0010 */ u32 unk10;
    /* 0x0014 */ u8 unk0014[0x2C];
    /* 0x0040 */ u32 mode;
    /* 0x0044 */ u8 unk0044[0x4];
    /* 0x0048 */ u32 unk48;
    /* 0x004C */ u16 unk4C;
    /* 0x004E */ u16 unk4E;
    /* 0x0050 */ u8 unk0050[0x74];
    /* 0x00C4 */ f32 scaleA;
    /* 0x00C8 */ f32 scaleB;
    /* 0x00CC */ u32 unkCC;
    /* 0x00D0 */ u32 unkD0;
    /* 0x00D4 */ u32 unkD4;
    /* 0x00D8 */ u8 unk00D8[0x4];
    /* 0x00DC */ u32 unkDC;
    /* 0x00E0 */ u8 unkE0;
    /* 0x00E1 */ u8 unkE1;
    /* 0x00E2 */ u8 unk00E2[0x2];
    /* 0x00E4 */ u32 unkE4;
    /* 0x00E8 */ f32 unkE8;
    /* 0x00EC */ u32 unkEC;
    /* 0x00F0 */ u32 unkF0;
    /* 0x00F4 */ u8 object;
    /* 0x00F5 */ u8 unk00F5[0x8E3];
    /* 0x09D8 */ u8 unk9D8;
    /* 0x09D9 */ u8 unk09D9[0x3];
    /* 0x09DC */ u32 unk9DC;
    /* 0x09E0 */ u8 unk09E0[0x8];
    /* 0x09E8 */ u8 unk9E8;
    /* 0x09E9 */ u8 unk09E9[0x3];
    /* 0x09EC */ u32 unk9EC;
    /* 0x09F0 */ u32 unk9F0;
    /* 0x09F4 */ u32 unk9F4;
    /* 0x09F8 */ u32 unk9F8;
    /* 0x09FC */ u32 unk9FC;
    /* 0x0A00 */ u32 unkA00;
    /* 0x0A04 */ u8 unk0A04[0x28];
    /* 0x0A2C */ u32 unkA2C;
    /* 0x0A30 */ u32 unkA30;
    /* 0x0A34 */ u32 unkA34;
    /* 0x0A38 */ u32 unkA38;
    /* 0x0A3C */ u8 unk0A3C[0xC];
    /* 0x0A48 */ u32 unkA48;
    /* 0x0A4C */ u32 unkA4C;
    /* 0x0A50 */ u32 unkA50;
    /* 0x0A54 */ u32 unkA54[0x20];
    /* 0x0AD4 */ u8 unkAD4;
    /* 0x0AD5 */ u8 unk0AD5[0x3];
    /* 0x0AD8 */ u32 unkAD8;
    /* 0x0ADC */ u32 unkADC;
    /* 0x0AE0 */ u32 unkAE0;
    /* 0x0AE4 */ u32 unkAE4;
    /* 0x0AE8 */ u8 unk0AE8[0x90];
    /* 0x0B78 */ LmapSlot slotsA[0x80];
    /* 0x4F78 */ u8 unk4F78[0xC];
    /* 0x4F84 */ LmapSlot slotsB[0x7F];   /* the clearing loop runs to 0x80: the last entry's flags are at 0x92FC */
    /* 0x92FC */ u8 unk92FC[4];
    /* 0x9300 */ u32 unk9300;
    /* 0x9304 */ f32 unk9304;
    /* 0x9308 */ f32 unk9308;
    /* 0x930C */ f32 unk930C;
    /* 0x9310 */ u8 unk9310[0x44];
    /* 0x9354 */ u32 unk9354;
    /* 0x9358 */ u32 unk9358;
    /* 0x935C */ u32 unk935C;
    /* 0x9360 */ u8 unk9360;
    /* 0x9361 */ u8 unk9361;
    /* 0x9362 */ u8 unk9362;
    /* 0x9363 */ u8 unk9363;
    /* 0x9364 */ u8 unk9364;
    /* 0x9365 */ u8 unk9365;
    /* 0x9366 */ u8 unk9366;
    /* 0x9367 */ u8 unk9367;
    /* 0x9368 */ u8 unk9368;
    /* 0x9369 */ u8 unk9369;
    /* 0x936A */ u8 unk936A;
    /* 0x936B */ u8 unk936B[0x1];
    /* 0x936C */ u32 handleRegistry;
};

typedef char LmapMainStateSize[sizeof(LmapMainState) == 0x9370 ? 1 : -1];

/* The lmap scene block: camera limits and clip distances. */
struct LmapScene {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ f32 minX;
    /* 0x020 */ f32 minXStep;
    /* 0x024 */ f32 minZ;
    /* 0x028 */ f32 unk28;
    /* 0x02C */ f32 unk2C;
    /* 0x030 */ f32 unk30;
    /* 0x034 */ f32 unk34;
    /* 0x038 */ f32 unk38;
    /* 0x03C */ f32 unk3C;
    /* 0x040 */ u8 unk040[0xC];
    /* 0x04C */ f32 fovA;
    /* 0x050 */ f32 fovB;
    /* 0x054 */ u8 unk054[0x108];
    /* 0x15C */ f32 nearClip;
    /* 0x160 */ f32 farClip;
};

struct LmapGameBlock {
    /* 0x000 */ u8 unk000[0x7C4];
    /* 0x7C4 */ u8 unk7C4;
    /* 0x7C5 */ u8 unk7C5[0xE0B];
    /* 0x15D0 */ u32 unk15D0;
};

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x21];
    u8 f005f161d; /* 0x021 */
    u8 pad022[0x23d];
    u8 f005f185b; /* 0x25f */
};
extern GameStateView g_gameState;

extern u32 g_handleRegistry;
extern LmapMainState *g_lmapMainState;
extern LmapScene *g_lmapScene;



void *asdMemoryAllocTracked(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void FUN_002c23cc(s32 value);
void controllerPoolReset(void *object);
void FUN_002442ac(void);
u32 taskCreateDraw(const char *name, s32 priority, u32 first, u32 second,
                   void *update, void *end, u32 work, u32 parent);
s32 FUN_00276264(u32 handle);
s32 FUN_002bc62c(u32 handle);
void lmapRequest(u32 handle);
void FUN_0033feb4(u32 handle);

void FUN_00272970(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp", 732);
    LmapMainState *state = static_cast<LmapMainState *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(LmapMainState), 1));
    g_lmapMainState = state;
    LmapGameBlock *gameBlock = reinterpret_cast<LmapGameBlock *>(gameFlagsGetBlock());
    FUN_002c23cc(1);
    state->unk09 = 0;
    state->unk0A = 0;
    state->unk0B = 0;
    state->unk0C = 0;
    state->unk10 = 0;
    if (g_lmapMainState->unkCC != 0) {
        g_lmapMainState->unkCC = 0;
        g_lmapMainState->unkD0 = 0;
        g_lmapMainState->unkD4 = 0;
    }
    state->scaleB = 1.0f;
    state->scaleA = 1.0f;
    state->mode = 0x65;
    state->unk4C = 0;
    state->unk4E = 0;
    state->unk48 = 1;

    LmapScene *scene = g_lmapScene;
    scene->minX = -554.0f;
    scene->minXStep = 0.01f;
    scene->minZ = -4780.0f;
    scene->unk28 = -554.0f;
    scene->unk2C = 0.01f;
    scene->unk30 = scene->minZ;
    scene->unk34 = -554.0f;
    scene->unk38 = 0.01f;
    scene->unk3C = scene->minZ;
    scene->fovA = 180.0f;
    scene->fovB = 180.0f;
    scene->nearClip = 1000.0f;
    scene->farClip = 3000.0f;

    state->unk9DC = 0;
    controllerPoolReset(&state->object);
    state->unkDC = 0;
    state->unkE0 = 0;
    state->unkA48 = 0;
    state->unkA4C = 0;
    state->unkA50 = 0;
    state->unk9300 = 0;
    state->unk9304 = 100.0f;
    state->unk9308 = 20000.0f;
    state->unk930C = 10.0f;
    state->unk9EC = 0;
    state->unk9F0 = 0;
    state->unk9F4 = 0;
    state->unk9F8 = 0;
    state->unk9FC = 0;
    state->unkA00 = 0;
    state->unkA2C = 0;
    state->unkA30 = 0;
    state->unkA34 = 0;
    state->unkA38 = 0;
    state->unkAD8 = 0;
    state->unkADC = 0;
    state->slotsA[0x7F].word04 = 0;
    state->unkAE4 = 0;
    state->slotsA[0x7F].word08 = 0;
    state->unkAD4 = 0;
    for (s32 i = 0; i < 0x20; i++)
        state->unkA54[i] = 0;
    for (s32 i = 0; i < 0x80; i++) {
        state->slotsA[i].flagA = 0;
        state->slotsA[i].flagB = 0;
        state->slotsA[i].flagC = 0;
    }
    for (s32 i = 0; i < 0x80; i++) {
        state->slotsB[i].flagA = 0;
        state->slotsB[i].flagB = 0;
        state->slotsB[i].flagC = 0;
    }
    state->unk9D8 = 0;
    state->unk9E8 = 0;
    state->unk9354 = 0;
    state->unkE1 = 0;
    state->unkE4 = 0x38;
    state->unkE8 = 40.0f;
    state->unk935C = 0;
    state->unk9358 = 0;
    FUN_002442ac();
    gameBlock->unk7C4 = 0;
    gameBlock->unk15D0 = 0;
    g_gameState.f005f185b = 0;
    g_gameState.f005f161d = 0;
    state->unk9360 = 0;
    state->unk9361 = 0;
    state->unk9362 = 0;
    state->unk9363 = 0;
    state->unk9364 = 0;
    state->unk9365 = 0;
    state->unk9366 = 0;
    state->unk9367 = 0;
    state->unk9368 = 0;
    state->unk9369 = 0;
    state->unk936A = 0;
    state->unkF0 = 0;
    state->unkEC = 0;
    state->handleRegistry = g_handleRegistry;
    state->unkAE0 = 0;
    state->slotsA[0x7F].word0C = 0;
    state->unk08 = 0;
    state->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("LMAP C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>((void *)FUN_00276264), reinterpret_cast<AsdProcFunc>((void *)lmapRequest), 0);
    state->drawTask = taskCreateDraw("LMAP U", 0x72, 0, 0, (void *)FUN_002bc62c, (void *)FUN_0033feb4, 0, state->process);
}

} /* extern "C" */
