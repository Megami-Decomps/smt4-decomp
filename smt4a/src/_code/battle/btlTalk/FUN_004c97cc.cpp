/* NON_MATCHING: readable rewrite from retail disassembly compiles (210 vs 228 rows); retail's load-stage fallthrough and mask tests are laid out differently */
#include "common.h"

// Talk-window tuning data shared by the battle talk code: three 64-bit side masks.
struct BtlTalkData {
    u8 unk00[8];
    u64 targetMask;         // 0x08
    u64 excludeMask;        // 0x10
    u64 pendingMask;        // 0x18
};

struct BattleSide {
    u64 flags;              // 0x000
    u8 unk08[0x400];
};

struct BattleMain {
    u8 unk0000[0x1ffc];
    BattleSide* sides;      // 0x1ffc
    u8 unk2000[0x2358 - 0x2000];
    s32 talkMode;           // 0x2358
    s32 talkArgA;           // 0x235c
    s32 talkArgB;           // 0x2360
    u8 unk2364[0x45a0 - 0x2364];
    u64 pending;            // 0x45a0
};

// Talk window state machine object.
struct BtlTalkWindow {
    BattleMain* battle;     // 0x00
    u32 unk04;
    u32 toneFile;           // 0x08: loaded tone table
    u32 talkFile;           // 0x0c: talk.bf
    u32 process;            // 0x10: script process
    u32 toneModel;          // 0x14
    s32 state;              // 0x18
    u8 unk1c[4];
    u32 sideId;             // 0x20
    u8 unk24[0x138 - 0x24];
    s32 modeA;              // 0x138 (word 0x4e)
    s32 modeB;              // 0x13c
    s32 modeC;              // 0x140
    s8 loadStage;           // 0x144
    u8 unk145[3];
};

struct SideRecord {
    u8 unk00[2];
    u16 id;                 // 0x02
};

struct DevilInfo {
    u8 unk00[0x38];
    u8 tone;                // 0x38
};

extern "C" {

extern u8* g_btlAux;
extern BtlTalkData g_btlTalk;
extern const char* g_btlTalkToneNames[116];
extern s32 g_btlCamera;
extern u32 g_btlActionReflect;
extern u32 g_btlUiBlock;

SideRecord* FUN_001568f8(BattleMain* battle, u32 id);
DevilInfo* FUN_00184310(u32 id);
void textFormatBuffer(char* out, const char* format, ...);
void asdLoadFileAsyncSimple(const char* path, u32* out, s32 flag);
void FUN_004f741c(u8* aux);
s32 FUN_004f2708(s32 camera, BattleMain* battle, s32 flag);
void FUN_004fb670(s32 a, s32 b, s32 c);
void FUN_004feecc(s32 a, s32 b);
s32 btlAuxAreResourcesReady(u8* aux);
void FUN_004f89e8(u8* aux);
s32 FUN_004f9c2c(u8* aux);
u32 FUN_00275bc8(void);
void scrScriptProcessStartEntry(u32 process, s32 entry);
void sysPlaySe(s32 id);
s32 scrRunOpcodesStub(u32 process);
void FUN_003756c8(s32 arg);
void FUN_004fcde0(s32 a, s32 b);
s32 chainCountIdUnflagged(u32 chain, s32 arg);
void FUN_004aa8b0(u32 ui, s32 arg);

// Per-frame state machine of the battle talk window: loads the tone resources, starts the
// talk script, applies its result and finally clears the pending mask. Returns -1 when done.
s32 FUN_004c97cc(BtlTalkWindow* window, s32 unused)
{
    char path[132];
    switch (window->state) {
    case 0: {
        SideRecord* side = FUN_001568f8(window->battle, window->sideId);
        DevilInfo* info = FUN_00184310(side->id);
        textFormatBuffer(path, "battle/talk/Tone%s.tbb", g_btlTalkToneNames[info->tone]);
        asdLoadFileAsyncSimple(path, &window->toneFile, 1);
        window->modeA = info->tone;
        textFormatBuffer(path, "battle/talk/TalkTone%s.mbm", g_btlTalkToneNames[info->tone]);
        asdLoadFileAsyncSimple(path, &window->toneModel, 1);
        asdLoadFileAsyncSimple("battle/talk/talk.bf", &window->talkFile, 1);
        FUN_004f741c(g_btlAux);
        window->state = 1;
        if (*reinterpret_cast<s32*>(g_btlCamera + 0x7cc) >= 0 && FUN_004f2708(g_btlCamera, window->battle, 1) != 0) {
            FUN_004fb670(0, 0, 0);
        }
        FUN_004feecc(1, 0);
        return 0;
    }
    case 1:
        if (window->loadStage == 0) {
            if (btlAuxAreResourcesReady(g_btlAux) == 0) return 0;
            FUN_004f89e8(g_btlAux);
            window->loadStage = 1;
        }
        if (window->loadStage == 1) {
            if (FUN_004f9c2c(g_btlAux) == 0) return 0;
            window->loadStage = 2;
        }
        if (window->toneFile == 0 || window->talkFile == 0 || window->toneModel == 0) return 0;
        window->process = FUN_00275bc8();
        *reinterpret_cast<s32*>(window->process + 264) = 1;
        scrScriptProcessStartEntry(window->process, 0);
        sysPlaySe(0x3e);
        window->state = 2;
        return 0;
    case 2:
        if (scrRunOpcodesStub(window->process) != 2) return 0;
        FUN_003756c8(0);
        window->battle->talkMode = window->modeA;
        window->battle->talkArgA = window->modeB;
        window->battle->talkArgB = window->modeC;
        if (window->modeA == 2) {
            for (s32 i = 4; i < 0x36; i++) {
                BattleSide* side = &window->battle->sides[i];
                if ((g_btlTalk.targetMask & side->flags) != 0 && (g_btlTalk.excludeMask & side->flags) == 0 && side != NULL) {
                    FUN_004fcde0(0, 0);
                }
            }
        }
        window->state = 4;
        return 0;
    case 3:
        if (window->toneModel == 0) return 0;
        *reinterpret_cast<u32*>(window->process + 0xc0) = window->toneModel;
        window->state = 2;
        return 0;
    case 4:
        if (chainCountIdUnflagged(g_btlActionReflect, 0) > 0) return 0;
        if ((g_btlTalk.pendingMask & window->battle->pending) != 0) {
            FUN_004aa8b0(g_btlUiBlock, 0);
            window->battle->pending &= ~g_btlTalk.pendingMask;
        }
        window->state = 5;
        return 0;
    case 5:
        return -1;
    }
    return 0;
}

} /* extern "C" */
