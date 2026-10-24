/* NON_MATCHING: readable rewrite from retail disassembly compiles (217 vs 217 rows, three small differences): retail copies the 3 handles through r2, loads the g_btlMain base before the 0x4d64 offset literal and loads the flags halfword before bumping the step in the final case */
#include "common.h"

// Battle resource loader: the step counter, its critical section and the resource slots.
struct BattleLoader {
    u8 unk0000[0x2268];
    u32 slot2268;           // 0x2268
    u32 slot226c;           // 0x226c
    u32 slot2270;           // 0x2270
    u32 slot2274;           // 0x2274
    u32 slot2278;           // 0x2278
    u32 slot227c;           // 0x227c
    u32 slot2280;           // 0x2280
    u32 slot2284;           // 0x2284
    u32 slot2288;           // 0x2288
    u32 process;            // 0x228c
    u8 unk2290[0x4d08 - 0x2290];
    u16 flags;              // 0x4d08: bit 0 = finished
    u16 step;               // 0x4d0a
    u8 lock[0x58];          // 0x4d0c: critical section
    u32 slot4d64;           // 0x4d64
};

// Files loaded by the battle (handles at 0x28..0x4c of the global table).
struct BtlLoadTable {
    u8 unk00[0x28];
    u32 files[10];          // 0x28
};

extern "C" {

extern BtlLoadTable g_btlMain;
extern u32 g_aocSystem;
extern const char DAT_0052887c[];
extern const char DAT_00528858[];
extern const char DAT_0052883c[];
extern const char DAT_00528820[];
extern const char DAT_00528804[];
extern const char DAT_005287e4[];
extern const char DAT_005287cc[];
extern const char DAT_005287ac[];
extern const char DAT_00528790[];
extern const char DAT_00528774[];

void nn_os_CriticalSection_Enter(void* section);
void nn_os_CriticalSection_Leave(void* section);
void callJyoucyuGetTableEntry1B(void);
void loadSlotEnsureLoaded(s32 slot);
void FUN_00470e64(u32 aoc);
u32 asdLoadFileSyncDefault(const char* path);
void btlStageLoadTable(void);
void battleMapAccessoryLoad(void);
s32 jyoucyuEnsureResidentEntry(void);
u32 FUN_00275bc8(void);
void FUN_003cdb28(void);
void FUN_003ce360(void);

#define BATTLE_WORD(base, offset) (*reinterpret_cast<u32*>(reinterpret_cast<u8*>(base) + (offset)))

// Runs the battle resource loading steps under the loader's critical section: each case
// waits for the previous resource to be ready, publishes the next one, and falls through to
// the following step until the whole sequence is finished.
void FUN_003f0794(BattleLoader* loader)
{
    nn_os_CriticalSection_Enter(loader->lock);
    do {
        switch (loader->step) {
        case 0:
            callJyoucyuGetTableEntry1B();
            loadSlotEnsureLoaded(7);
            loadSlotEnsureLoaded(62);
            loadSlotEnsureLoaded(59);
            loadSlotEnsureLoaded(22);
            loadSlotEnsureLoaded(19);
            loadSlotEnsureLoaded(72);
            FUN_00470e64(g_aocSystem);
            g_btlMain.files[0] = asdLoadFileSyncDefault(DAT_0052887c);
            g_btlMain.files[1] = asdLoadFileSyncDefault(DAT_00528858);
            g_btlMain.files[2] = asdLoadFileSyncDefault(DAT_0052883c);
            g_btlMain.files[3] = asdLoadFileSyncDefault(DAT_00528820);
            g_btlMain.files[4] = asdLoadFileSyncDefault(DAT_00528804);
            g_btlMain.files[5] = asdLoadFileSyncDefault(DAT_005287e4);
            g_btlMain.files[6] = asdLoadFileSyncDefault(DAT_005287cc);
            g_btlMain.files[7] = asdLoadFileSyncDefault(DAT_005287ac);
            g_btlMain.files[8] = asdLoadFileSyncDefault(DAT_00528790);
            g_btlMain.files[9] = asdLoadFileSyncDefault(DAT_00528774);
            btlStageLoadTable();
            battleMapAccessoryLoad();
            loader->step++;
            /* fall through */
        case 1:
            if (jyoucyuEnsureResidentEntry() == 0) break;
            loader->slot2280 = g_btlMain.files[0];
            loader->slot2284 = g_btlMain.files[1];
            loader->slot2288 = g_btlMain.files[2];
            loader->process = FUN_00275bc8();
            BATTLE_WORD(loader->process, 264) = 0;
            loader->step++;
            /* fall through */
        case 2:
            if (loader->slot2288 == 0) break;
            loader->slot2268 = g_btlMain.files[3];
            loader->step++;
            /* fall through */
        case 3:
            if (loader->slot2268 == 0) break;
            loader->slot226c = g_btlMain.files[4];
            loader->step++;
            /* fall through */
        case 4:
            if (loader->slot226c == 0) break;
            loader->slot2270 = g_btlMain.files[5];
            loader->step++;
            /* fall through */
        case 5:
            if (loader->slot2270 == 0) break;
            loader->slot2278 = g_btlMain.files[7];
            loader->step++;
            /* fall through */
        case 6:
            if (loader->slot2278 == 0) break;
            loader->slot2274 = g_btlMain.files[6];
            loader->step++;
            /* fall through */
        case 7:
            if (loader->slot2274 == 0) break;
            loader->slot227c = g_btlMain.files[8];
            loader->step++;
            /* fall through */
        case 8:
            if (loader->slot227c == 0) break;
            loader->step++;
            /* fall through */
        case 9:
            loader->step++;
            /* fall through */
        case 10:
            FUN_003cdb28();
            loader->step++;
            /* fall through */
        case 11:
            FUN_003ce360();
            loader->step++;
            /* fall through */
        case 12:
            loader->slot4d64 = g_btlMain.files[9];
            loader->step++;
            /* fall through */
        case 13:
            if (loader->slot4d64 == 0) break;
            loader->step++;
            /* fall through */
        case 14:
            loader->step++;
            loader->flags |= 1;
            break;
        default:
            break;
        }
    } while ((loader->flags & 1) == 0);
    nn_os_CriticalSection_Leave(loader->lock);
}

} /* extern "C" */
