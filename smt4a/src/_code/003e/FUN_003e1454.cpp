/* NON_MATCHING: battle start request (formation file check, unit flag fix-up, state flags); draft shape, scheduling/registers not compared with retail */
#include "common.h"

#define BTL_UNIT_FIRST_ENEMY 4
#define BTL_UNIT_COUNT 0x36
#define BTL_UNIT_STRIDE 0x1D0

struct BtlUnit {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u32 state;
    /* 0x5C */ u8 unk5C[4];
    /* 0x60 */ u16 visual;
    /* 0x62 */ u8 unk62[8];
    /* 0x6A */ s16 resourceId;
    /* 0x6C */ u8 unk6C[0x164];
};

struct BtlRequest {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
};

struct BtlStartState {
    /* 0x0000 */ u16 unk0000;
    /* 0x0002 */ u16 formation;
    /* 0x0004 */ u8 unk0004[0x00EC];
    /* 0x00F0 */ s32 aocFlag;
    /* 0x00F4 */ u8 unk00F4[0x1DE0];
    /* 0x1ED4 */ BtlUnit *units;
    /* 0x1ED8 */ u8 unk1ED8[0x26C8];
    /* 0x45A0 */ u32 flagsA;
    /* 0x45A4 */ u32 flagsB;
};

/* Battle flag masks (pairs for the two flag words) kept by the encounter setup. */
struct BtlEncountMasks {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 formationA;
    /* 0x54 */ u32 formationB;
    /* 0x58 */ u8 unk58[8];
    /* 0x60 */ u32 introA;
    /* 0x64 */ u32 introB;
    /* 0x68 */ u32 readyA;
    /* 0x6C */ u32 readyB;
};

#define BTL_FILE_NAME_SIZE 0x80
#define BTL_UNIT_STATE_RESPAWN 8
#define BTL_UNIT_VISUAL_HIDDEN 0x800

extern "C" {
extern u32 g_aocSystem;
extern u32 g_btlCamera;
extern BtlEncountMasks g_btlEncount;

s32 FUN_0046ebf0(u32 aocSystem);
void sysMemClear(void *block, s32 size);
u32 btlPosArrangeGetFileName(BtlStartState *state);
char *libc_strcpy(char *destination, u32 source);
s32 FUN_00240c34(const char *fileName);
void FUN_003edbd0(BtlStartState *state);
void FUN_003f0d50(BtlStartState *state);
void controllerClearVectorState(BtlStartState *state);
void FUN_003f0b28(BtlStartState *state);
void words10CopyHighToLow(u32 camera);
s32 FUN_003e0f94(BtlRequest *request, BtlStartState *state);
void FUN_001568f8(BtlStartState *state, s32 resourceId);
s32 pairedEntryTableContains(BtlStartState *state, u16 id);
void FUN_004fb43c(s32 a, s32 b, u32 id, s32 c, s32 d, s32 e, s32 f);
void FUN_003ed6e8(BtlStartState *state);
void FUN_003f26d4(BtlStartState *state);
void FUN_002e5924(s32 mode);
void FUN_003e0bb8(BtlRequest *request, BtlStartState *state);
void contentRequestStart(BtlRequest *request, BtlStartState *state);

/* Prepares a battle start: when the formation file is available applies the formation, hides
 * units whose resources the paired table lacks and raises the setup flags; otherwise defers to
 * the content request. */
void FUN_003e1454(BtlRequest *request, BtlStartState *state)
{
    char fileName[BTL_FILE_NAME_SIZE + 4];
    bool aocFormation = false;
    if (state->aocFlag > 0 && FUN_0046ebf0(g_aocSystem) != 0)
        aocFormation = true;
    sysMemClear(fileName, BTL_FILE_NAME_SIZE);
    libc_strcpy(fileName, btlPosArrangeGetFileName(state));

    if (!aocFormation && FUN_00240c34(fileName) == 0) {
        FUN_003edbd0(state);
        FUN_003f0d50(state);
        controllerClearVectorState(state);
        FUN_003f0b28(state);
        words10CopyHighToLow(g_btlCamera);
        s32 result = FUN_003e0f94(request, state);
        if (result == 1 || result == 2 || result == 5) {
            for (s32 i = BTL_UNIT_FIRST_ENEMY; i < BTL_UNIT_COUNT; i++) {
                BtlUnit *unit = (BtlUnit *)((u8 *)state->units + i * BTL_UNIT_STRIDE);
                if ((unit->flags & 1) != 0 && (unit->flags & 2) != 0 && (unit->state & BTL_UNIT_STATE_RESPAWN) != 0) {
                    unit->state &= ~BTL_UNIT_STATE_RESPAWN;
                    if ((unit->visual & BTL_UNIT_VISUAL_HIDDEN) == 0) {
                        FUN_001568f8(state, unit->resourceId);
                        if (pairedEntryTableContains(state, state->formation) == 0)
                            unit->visual |= BTL_UNIT_VISUAL_HIDDEN;
                    }
                }
            }
            FUN_004fb43c(0, 0, 0x100021B, 0, 0, 0, 0);
            FUN_003ed6e8(state);
            FUN_003f26d4(state);
            state->flagsA |= g_btlEncount.formationA | g_btlEncount.readyA;
            state->flagsB |= g_btlEncount.formationB | g_btlEncount.readyB;
        }
        request->unk10 = 0;
        request->state = 0x17;
        request->unk0C = 0;
        result = FUN_003e0f94(request, state);
        if (result != 2 && result != 5 && (state->flagsA & g_btlEncount.introA) == 0
            && (g_btlEncount.introB & state->flagsB) == 0) {
            FUN_002e5924(2);
            state->flagsA |= g_btlEncount.introA;
            state->flagsB |= g_btlEncount.introB;
        }
        FUN_003e0bb8(request, state);
        return;
    }
    request->unk10 = 0;
    request->state = 0x15;
    request->unk0C = 0;
    contentRequestStart(request, state);
}

} /* extern "C" */
