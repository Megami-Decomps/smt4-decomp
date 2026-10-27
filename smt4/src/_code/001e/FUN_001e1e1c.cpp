/* NON_MATCHING: retail has two extra nops after the strcpy arm and recomputes the stack-argument base (add ip, sp, #4) for each taskCreateDraw where armcc keeps one copy in r6. */
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "code/Code002c_Smt4.h"

/* The add-on content job: its process handle and the state its update function steps through. */
struct AocJobState {
    /* 0x00 */ u32 process;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 words08[6];
    /* 0x20 */ u8 bytes20[5];
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ u32 words28[4];
};

/* What the job was asked to open: an id pair and the name that goes with it. */
struct AocJobTarget {
    /* 0x00 */ u32 first;
    /* 0x04 */ s32 second;
    /* 0x08 */ char name[1]; /* NUL-terminated, longer than declared */
};

extern "C" {

extern AocJobState *g_aocJob;
extern AocJobTarget DAT_004937c4;

s32 jyoucyuGetTableEntry(u32 index);
void fileSlotReloadRaw(s32 slot);
void dataTable19ResolveVariants(void);
char *libc_strcpy(char *destination, const char *source);

s32 FUN_0019f3dc(void);
s32 FUN_001e4d70(void);
void aocJobEnable(void);
s32 campQueryFalse(void);
void noopCallback(void *);
s32 FUN_002ca07c(void);
void FUN_002f4b28(void);

/* Creates the add-on content job: opens `target` when given, or else loads the default tables and adds the draw tasks. */
void FUN_001e1e1c(const AocJobTarget *target)
{
    AocJobState *job = g_aocJob;
    for (s32 i = 0; i < 6; i++) {
        job->words08[i] = 0;
    }
    job->words28[0] = 0;
    job->words28[1] = 0;
    job->words28[2] = 0;
    job->words28[3] = 0;
    job->bytes20[0] = 0;
    job->bytes20[1] = 0;
    job->bytes20[2] = 0;
    job->bytes20[3] = 0;
    job->bytes20[4] = 0;
    job->unk04 = 0;
    if (target != NULL) {
        DAT_004937c4.first = target->first;
        DAT_004937c4.second = target->second;
        if (DAT_004937c4.second == -1) {
            libc_strcpy(DAT_004937c4.name, target->name);
        } else {
            DAT_004937c4.name[0] = 0;
        }
        job->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVENT CALC"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0019f3dc), reinterpret_cast<AsdProcFunc>(aocJobEnable), 0);
    } else {
        if (jyoucyuGetTableEntry(2) == 0) {
            fileSlotReloadRaw(0x19);
            fileSlotReloadRaw(0x1b);
            fileSlotReloadRaw(0x1c);
            dataTable19ResolveVariants();
        }
        job->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVENT VIEW CALC"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001e4d70), reinterpret_cast<AsdProcFunc>(aocJobEnable), 0);
        taskCreateDraw(reinterpret_cast<const s8 *>("EVENT VIEW UDRAW"), 0x73, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(campQueryFalse), reinterpret_cast<AsdProcFunc>(noopCallback), 0, reinterpret_cast<void *>(job->process));
        taskCreateDraw(reinterpret_cast<const s8 *>("EVENT VIEW DRAW"), 0xe6, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002ca07c), reinterpret_cast<AsdProcFunc>(FUN_002f4b28), 0, reinterpret_cast<void *>(job->process));
    }
}

} /* extern "C" */
