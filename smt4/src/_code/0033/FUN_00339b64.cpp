/* NON_MATCHING: two register differences only: retail adds the lock address into r0 and copies it to r7, and uses r2 for the middle word of the three-word handle copy; 151 rows each. */
#include "common.h"

/* The resident handles the main battle state offers; the loader copies them over one by one. */
struct BtlMainStateHandles {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 scriptA;
    /* 0x10 */ u32 scriptB;
    /* 0x14 */ u32 script;
    /* 0x18 */ u32 resource0;
    /* 0x1C */ u32 resource1;
    /* 0x20 */ u32 resource2;
    /* 0x24 */ u32 resource5;
    /* 0x28 */ u32 resource4;
    /* 0x2C */ u32 resource6;
};

struct ScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 mode;
};

/* The battle loader's work (observed fields). */
struct BtlLoader {
    /* 0x0000 */ u8 unk0000[0x2230];
    /* 0x2230 */ u32 resource0;
    /* 0x2234 */ u32 resource1;
    /* 0x2238 */ u32 resource2;
    /* 0x223C */ u32 resource5;
    /* 0x2240 */ u32 resource4;
    /* 0x2244 */ u32 resource6;
    /* 0x2248 */ u32 scriptA;
    /* 0x224C */ u32 scriptB;
    /* 0x2250 */ u32 script;
    /* 0x2254 */ ScriptProcess *process;
    /* 0x2258 */ u8 unk2258[0x27A4];
    /* 0x49FC */ u16 flags;
    /* 0x49FE */ u16 step;
    /* 0x4A00 */ u8 lock[1];
};

#define LOADER_DONE 1

extern "C" {

extern BtlMainStateHandles g_btlMainState;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void FUN_00394cc4(void);
void *btlLoaderGetLock(BtlLoader *loader);
s32 jyoucyuEnsureResidentEntry(void);
ScriptProcess *FUN_00297060(void);
s32 resourceFindActiveIndex(u32 id);
void FUN_00328d2c(void);
void FUN_00328fa4(void);

/* Advances the battle loader one or more steps under its lock: each step waits for the previous
 * resource to arrive, requests the next, and the last steps finish the load. */
void FUN_00339b64(BtlLoader *loader)
{
    void *lock = btlLoaderGetLock(loader);

    nn_os_CriticalSection_Enter(lock);
    do {
        switch (loader->step) {
        case 0:
            FUN_00394cc4();
            loader->step++;
        case 1:
            if (jyoucyuEnsureResidentEntry() == 0) {
                break;
            }
            loader->scriptA = g_btlMainState.scriptA;
            loader->scriptB = g_btlMainState.scriptB;
            loader->script = g_btlMainState.script;
            loader->process = FUN_00297060();
            loader->process->mode = 0;
            loader->step++;
        case 2:
            if (loader->script == 0) {
                break;
            }
            loader->resource0 = g_btlMainState.resource0;
            loader->step++;
        case 3:
            if (loader->resource0 == 0) {
                break;
            }
            loader->resource1 = g_btlMainState.resource1;
            loader->step++;
        case 4:
            if (loader->resource1 == 0) {
                break;
            }
            loader->resource2 = g_btlMainState.resource2;
            loader->step++;
        case 5:
            if (loader->resource2 == 0) {
                break;
            }
            loader->resource4 = g_btlMainState.resource4;
            loader->step++;
        case 6:
            if (loader->resource4 == 0) {
                break;
            }
            loader->resource5 = g_btlMainState.resource5;
            loader->step++;
        case 7:
            if (loader->resource5 == 0) {
                break;
            }
            loader->resource6 = g_btlMainState.resource6;
            loader->step++;
        case 8:
            if (loader->resource6 == 0) {
                break;
            }
            loader->step++;
        case 9:
            if (resourceFindActiveIndex(0x3E) == 0) {
                break;
            }
            loader->step++;
        case 10:
            FUN_00328d2c();
            loader->step++;
        case 11:
            FUN_00328fa4();
            loader->step++;
        case 12:
            loader->step++;
        case 13:
            loader->step++;
            loader->flags |= LOADER_DONE;
        }
    } while ((loader->flags & LOADER_DONE) == 0);
    nn_os_CriticalSection_Leave(lock);
}

} /* extern "C" */
