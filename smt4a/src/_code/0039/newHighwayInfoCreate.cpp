/* NON_MATCHING: initialization saves the new pointer earlier than retail's constructor sequence, and the sprite handle reload gets a separate base register. */
#include "shard/W5_W5Match7_ResourceHandles.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/asdTMTexLoadMainHeap.h"

struct HighwayInfo {
    /* 0x000 */ u32 process;
    /* 0x004 */ u32 owner;
    /* 0x008 */ u8 unk008[8];
    /* 0x010 */ void *table;
    /* 0x014 */ u8 unk014[0xc];
    /* 0x020 */ u32 unk020;
    /* 0x024 */ u32 unk024;
    /* 0x028 */ void *messages;
    /* 0x02c */ u32 unk02c;
    /* 0x030 */ u32 unk030;
    /* 0x034 */ u8 unk034[0x5a0];
    /* 0x5d4 */ u8 active;
    /* 0x5d5 */ u8 unk5d5[3];
    /* 0x5d8 */ u32 sprite;
    /* 0x5dc */ u32 unk5dc;
    /* 0x5e0 */ u32 unk5e0;
    /* 0x5e4 */ u8 unk5e4[0xf4];

    HighwayInfo();
    static void *operator new(u32 bytes) throw();
};

typedef void (*HighwayCallback)(void *);
extern "C" {
extern const char DAT_0052d468[], DAT_0052d454[], DAT_0052d440[];
extern const char DAT_0052d418[], DAT_0052d3f0[];
void FUN_0035d080(void *);
void engineResourceSetSecondaryValue(void *);
void taskCreateDraw(const char *, s32, s32, s32, HighwayCallback, void *, void *, u32);
void asdTMTexTableLoadTmx(s32 table, s32 flags);
u32 spriteHandleCreate(u32 flags);
void positionStateSet(u32 sprite, s32 mode, u32 color, f32 value);
void FUN_003f84e8(HighwayInfo *);
void dialogEnterState(HighwayInfo *, s32 state, s32 mode);


inline HighwayInfo::HighwayInfo()
{
    unk020 = 0;
    unk024 = 0;
    messages = NULL;
    unk02c = 0;
    unk030 = 0;
    unk5e0 = 0;
    table = NULL;
}

inline void *HighwayInfo::operator new(u32 bytes) throw()
{
    return asdOperatorNew(bytes);
}
// Create the highway topic window, loading its table, messages, textures and sprite.
void newHighwayInfoCreate(u32 owner)
{
    HighwayInfo *info = new HighwayInfo;
    g_engineResourceHandles.secondary = info;
    info->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_0052d468), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0035d080), NULL, NULL);
    taskCreateDraw(DAT_0052d454, 0x81, 0, 0, engineResourceSetSecondaryValue, NULL, NULL, info->process);
    taskCreateDraw(DAT_0052d440, 0xdd, 0, 0, engineResourceSetSecondaryValue, NULL, NULL, info->process);
    info->owner = owner;
    asdLoadFileAsyncSimple(DAT_0052d418, reinterpret_cast<u32 *>(&info->table), 0);
    asdLoadFileAsyncSimple(DAT_0052d3f0, reinterpret_cast<u32 *>(&info->messages), 0);
    asdTMTexTableLoadTmx(0x31, 0);
    for (s32 i = 0; i < 2; ++i)
        asdTMTexLoadMainHeap(0x31, i);
    info->sprite = spriteHandleCreate(0);
    FUN_001527d8(info->sprite, -1);
    positionStateSet(info->sprite, 0, 0x646464ff, 0.0f);
    FUN_003f84e8(info);
    info->active = 1;
    dialogEnterState(info, 9, 0);
}
}
