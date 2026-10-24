/* NON_MATCHING: camp cec loader thread body; retail hoists the loader field addresses into r5-r8 before the loop and keeps the profile buffer/key differently on the stack (84 vs 44 byte frame) */
#include "common.h"

struct CecLoader {
    /* 0x000 */ u8 unk000[0xCEC];
    /* 0xCEC */ void *itemTable;      /* camp/CecItemTable.tbl */
    /* 0xCF0 */ void *unionTable;     /* camp/CecUnionTable.tbl */
    /* 0xCF4 */ void *script;         /* camp/CecMain_scr.bf */
    /* 0xCF8 */ void *messages;       /* camp/CecMain_msg.mbm */
    /* 0xCFC */ u8 unkCFC[0x64];
    /* 0xD60 */ s8 hasProfile;
    /* 0xD61 */ u8 unkD61[4];
    /* 0xD65 */ u8 stop;
    /* 0xD66 */ u8 unkD66[2];
    /* 0xD68 */ s32 state;
};

struct CecProfileState {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 block[0x38];
    /* 0x80 */ u8 profile[0x14];
    /* 0x94 */ u8 unk94[4];
};

/* The page and flag byte the cec block is rebuilt from. */
struct CecPageKey {
    u32 flagByte;
    u32 page;
};

#define CEC_PROFILE_SIZE 0x14
#define CEC_STATE_LOADING 1

extern "C" {
extern CecProfileState *g_campCec;

void cecProcessStart(void);
void FUN_002005a0(u8 *profile);
void cecProcessForward(void *block);
void FUN_002597c0(void);
u32 FUN_00259800(void);
u32 FUN_00262f78(void);
void btlTalkBustUpCreate(void);
void fileSlotLoad(s32 slot);
void asdLoadFileAsyncSimple(const char *path, void **destination, s32 flags);
void asdTMTexTableLoadEntryAsync(s32 type, s32 index);
void asdTMTexTableLoadSprites(s32 type);
void threadSleepDuration(s64 nanoseconds);
void FUN_002bd2b4(void *block, u32 a, u32 b, u32 c);
void rt_aeabi_memclr(void *block, u32 size);
s32 rt_memcmp(const void *a, const void *b, u32 size);
s32 gameDataBlockTestFlag(u32 flag);
s8 cecQueryOptionalProcess(void);
u32 gameDataBlocksGetFlagByteA(void);

/* Thread body: loads the cec tables, script and messages, starts the cec process and forwards the
 * stored profile once everything is in; sleeps 10 ms between steps until asked to stop. */
void FUN_001ec6e0(CecLoader *loader)
{
    while (loader->stop == 0) {
        if (loader->state == 0) {
            cecProcessStart();
            fileSlotLoad(0x25);
            btlTalkBustUpCreate();
            asdLoadFileAsyncSimple("camp/CecItemTable.tbl", &loader->itemTable, 0);
            asdLoadFileAsyncSimple("camp/CecUnionTable.tbl", &loader->unionTable, 0);
            asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &loader->script, 0);
            asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &loader->messages, 0);
            asdTMTexTableLoadSprites(0x39);
            asdTMTexTableLoadEntryAsync(0x39, 0);
            CecPageKey key;
            key.page = FUN_00259800();
            key.flagByte = gameDataBlocksGetFlagByteA();
            FUN_002bd2b4(g_campCec->block, FUN_00262f78(), key.flagByte, key.page);
            if (FUN_00262f78() == 0)
                rt_aeabi_memclr(g_campCec->profile, CEC_PROFILE_SIZE);
            loader->hasProfile = cecQueryOptionalProcess();
            if (loader->hasProfile != 0 && gameDataBlockTestFlag(0x20) != 0) {
                u8 profile[CEC_PROFILE_SIZE];
                FUN_002005a0(profile);
                if (rt_memcmp(profile, g_campCec->profile, CEC_PROFILE_SIZE) != 0) {
                    if (*(u16 *)&g_campCec->unk00[0x90] != 0) {
                        FUN_002597c0();
                        cecProcessForward(g_campCec->block);
                    } else {
                        key.page = FUN_00259800();
                        key.flagByte = gameDataBlocksGetFlagByteA();
                        FUN_002bd2b4(g_campCec->block, 0, key.flagByte, key.page);
                        FUN_002597c0();
                        cecProcessForward(g_campCec->block);
                        rt_aeabi_memclr(g_campCec->profile, CEC_PROFILE_SIZE);
                    }
                }
            }
            loader->state = loader->state + 1;
        } else if (loader->state == CEC_STATE_LOADING && loader->itemTable != NULL) {
            if (loader->unionTable != NULL && loader->script != NULL && loader->messages != NULL)
                loader->state = 2;
        }
        threadSleepDuration(10000000);
    }
}

} /* extern "C" */
