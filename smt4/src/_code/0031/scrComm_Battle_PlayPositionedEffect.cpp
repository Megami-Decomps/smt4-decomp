/* NON_MATCHING: readable rewrite compiles (169 vs 170 rows); stack frame (84 vs 92 bytes) and register allocation differ */
#include "battle/BattleUnitSlot.h"

// Effect request handed to the battle effect queue (32 bytes). It first carries the
// effect set's name, then is reused for one request per matching effect slot.
struct EffectRequest {
    s32 mode;           // 0x00
    s32 side;           // 0x04
    u32 type;           // 0x08
    const char* name;   // 0x0c
    s32 target;         // 0x10
    s32 targetCopy;     // 0x14
    u32 user;           // 0x18
    u32 unk1c;
};

struct BattleUnitSlot {
    u32 flags;              // 0x00: bit 0 present, bit 6 dead
    u8 unk04[4];
    s32 entryIndex;         // 0x08 (low halfword)
    u8 unk0c[0x288 - 0x0c];
};

struct BattleEffectSlot {
    u8 unk00[0x58];
    char name[0x10];        // 0x58: effect name
    s16 power;              // 0x68
    u16 type;               // 0x6a
};

struct BattleMain {
    u8 unk0000[0x1e98];
    u8* entries;            // 0x1e98 (0x114 bytes each; listed id at 0x62)
    u8 unk1e9c[0x1fc0 - 0x1e9c];
    u8* units;              // 0x1fc0 (BattleUnitSlot, 0x288 each)
};

struct BattleEffectState {
    u8 unk0000[0x1cfc];
    u8* effectSlots;        // 0x1cfc
};

extern "C" {

extern const char DAT_00400440[];
extern u32 g_btlScriptUnit;
extern BattleEffectState* DAT_00435d18;
extern u32 g_btlEvent;

void ARM_common_memcpy4_9(void* dst, const char* src);
void FUN_00245420(s32 slot, u32 unit, void* entry, u32 effect);
void FUN_002454c4(BattleEffectState* state, EffectRequest* request, s32 a, s32 b);
s32 FUN_0024550c(void);
void FUN_00282820(s32 value, u32 user, s32 target, s32 targetCopy);
u32* btlMainFindEntryByListedId(BattleMain* main, s32 id);
BattleMain* btlGetMainState(void);
s32 scrGetArg(s32 index);
s32 libc_strcmp(const char* a, const char* b);
s32 libc_strlen(const char* s);
s32 FUN_0027e3b8(u32 event);
s32 FUN_0028299c(BattleEffectState* state);

// Script command: plays the effect set `arg0` on every living side, positioned by the sign of `arg1`.
void scrComm_Battle_PlayPositionedEffect(void)
{
    u32 effectId = scrGetArg(0);
    s32 direction = scrGetArg(1);
    s32 inEvent = FUN_0027e3b8(g_btlEvent);
    if (!((inEvent == 0 || FUN_0024550c() != 0) && direction != 0)) return;

    EffectRequest request = { 0, 0, 0, NULL, 0, 0, 0, 0 };
    const char* setName = direction < 0 ? "commonDw" : "commonUp";
    ARM_common_memcpy4_9(&request, setName);
    FUN_002454c4(DAT_00435d18, &request, 1, 0);

    BattleMain* main = btlGetMainState();
    u32 user = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    s32 placed = 0;
    u8* effectSlots = DAT_00435d18->effectSlots;
    BattleMain* mainForEntries = main;
    for (s32 unitIndex = 0; unitIndex < 4; unitIndex++) {
        BattleUnitSlot* unit = reinterpret_cast<BattleUnitSlot*>(btlGetMainState()->units + unitIndex * 0x288);
        if ((unit->flags & 1) == 0 || (unit->flags & 0x40) != 0) continue;
        s16 entryIndex = (s16)unit->entryIndex;
        if (entryIndex < 0) continue;
        u8* entry = mainForEntries->entries + entryIndex * 0x114;
        request.side = unitIndex << 3;
        request.type = 0xffffffff;
        request.mode = direction;
        FUN_00245420(placed << 3, user, entry, effectId);
        request.user = user;
        request.target = *reinterpret_cast<s16*>(entry + 0x62);
        request.targetCopy = request.target;
        BattleMain* current = btlGetMainState();
        for (s32 slot = 0; slot < 4; slot++) {
            BattleEffectSlot* effect = reinterpret_cast<BattleEffectSlot*>(effectSlots + slot * 0x16);
            if (libc_strlen(effect->name) == 0 || libc_strcmp(effect->name, DAT_00400440) == 0) continue;
            u32 type = effect->type;
            s32 base = FUN_0028299c(DAT_00435d18);
            s32 sideCode = direction < 0 ? 3 : 2;
            switch (type) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 0xc: {
                u32* found = NULL;
                if (type == 0xc && request.target >= 0) found = btlMainFindEntryByListedId(current, request.target);
                if (type != 0xc || request.target < 0 || found == NULL || (*found & 2) != 0) {
                    request.name = effect->name;
                    request.mode = 6;
                    request.side = sideCode;
                    request.type = type;
                    FUN_00282820(effect->power + base * placed, user, request.targetCopy, request.target);
                }
                break;
            }
            }
        }
        placed++;
    }
}

} /* extern "C" */
