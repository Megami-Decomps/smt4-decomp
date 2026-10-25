/* NON_MATCHING: retail allocation includes source-file/line metadata and a diagnostic NOP. */
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct BattleEventTextureWorkA {
    u32 texture;
    s32 state;
    f32 opacity;
    f32 frame;
    f32 fadeStep;
    u8 flag14;
    u8 flag15;
    u8 active;
    u8 flag17;
    u8 unk18[0x14];
    f32 value;
    f32 duration;
    u32 resource;
    s32 verticalOffset;
    s32 animation;
    u8 unk40[8];
};
struct BattleTextureRecordViewA { u8 unk00[0x22]; u16 height; };
extern "C" {
u32 eventUpdateTextureFadeJob(u32 job);
u32 FUN_00289f10(void);
void jobWorkDestroy34(void *work);
extern const char DAT_0052f6a8[];
extern const char DAT_0052f698[];
void *asdMemoryAllocTracked(u32 alignment, u32 size, u32 heap, u32 category, s32 clear);
void sysMemClear(void *memory, u32 size);
const BattleTextureRecordViewA *FUN_00283498(u32 texture);
s32 FUN_00162ea4(void);
u32 FUN_00409fe8(s32 offset, s32 first, s32 second);
u32 taskCreateDraw(const char *name, s32 priority, u32 stack, u32 options,
                   u32 (*callback)(void), void (*destroy)(void *), void *work, u32 parent);

// Create the battle-event texture job and select its animation from the script's value.
u32 FUN_0039b0f8(u32 texture, f32 value, f32 duration)
{
    BattleEventTextureWorkA *work = static_cast<BattleEventTextureWorkA *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BattleEventTextureWorkA), 1));
    sysMemClear(work, sizeof(*work));
    work->opacity = 1.0f;
    work->frame = 0.0f;
    work->fadeStep = 0.25f;
    work->flag14 = 0;
    work->flag17 = 0;
    work->verticalOffset = -static_cast<s32>(FUN_00283498(texture)->height);
    if (FUN_00162ea4()) {
        work->state = 1;
    } else {
        work->resource = FUN_00409fe8(work->verticalOffset, 1, 1);
        work->state = 2;
    }
    work->texture = texture;
    if (reinterpret_cast<const u32 &>(value) >= 0xc0800000)
        work->animation = 17;
    else if (reinterpret_cast<const u32 &>(value) >= 0xc0400000)
        work->animation = 3;
    else if (reinterpret_cast<const s32 &>(value) >= 0x40400000)
        work->animation = 18;
    else if (reinterpret_cast<const s32 &>(value) >= 0x3fc00000)
        work->animation = 4;
    else if (value < 0.0f)
        work->animation = 19;
    else
        work->animation = 5;
    work->value = value;
    work->duration = duration;
    work->active = 1;
    work->flag15 = 0;
    u32 job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_0052f6a8), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(eventUpdateTextureFadeJob), reinterpret_cast<AsdProcFunc>(jobWorkDestroy34), reinterpret_cast<u32>(work));
    taskCreateDraw(DAT_0052f698, 0x71, 0, 0, FUN_00289f10, NULL, work, job);
    return job;
}
}
