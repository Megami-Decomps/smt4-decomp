/* NON_MATCHING: the parameter packets (unit-local arrays) now match; only the registers of the -1 texture node (r2, retail r1) and the update callback (r1, retail r0) differ. */
#include "battle/Talk/btlTalkBustUp.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <stddef.h>
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
/* The bust-up window's sprite resource packets, in retail's order (0x60, 0x144, 0x90 and 0x9bc bytes). */
static const u32 sBustUpPacketA[24] = {
    0, 0x40000, 0x10, 0x40000, 0, 0x18, 0, 0xfff60012,
    0xa, 0xfff60012, 0xffee0032, 0xa, 0xffee0032, 0xfff60028, 0xa, 0xfff60028,
    0x8001e, 0xa, 0x8001e, 0x100014, 0xa, 0x100014, 0, 0xa,
};
static const u32 sBustUpPacketB[81] = {
    0, 0x3f800000, 0x14, 0x3f800000, 0, 0xa, 0, 0,
    0x1e, 0x3f19999a, 0x3ecccccd, 0xa, 0x3ecccccd, 0x3e4ccccd, 0xa, 0x3e4ccccd,
    0x3f19999a, 0xa, 0x3f19999a, 0x3e4ccccd, 0xa, 0x3e4ccccd, 0x3f0ccccd, 0xa,
    0x3f0ccccd, 0x3f19999a, 0xa, 0, 0x3f800000, 8, 0x3f800000, 0,
    4, 0, 0x3f4ccccd, 0x14, 0x3f4ccccd, 0, 0x14, 0,
    0x3ecccccd, 0x14, 0x3ecccccd, 0, 0xa, 0, 0, 0x1e,
    0x3e4ccccd, 0x3f19999a, 0x14, 0x3f19999a, 0x3e4ccccd, 0x14, 0, 0x3e99999a,
    0x14, 0x3e99999a, 0, 0xa, 0, 0, 9, 0x3f800000,
    0x3f000000, 0x14, 0x3f666666, 0x3f19999a, 0x14, 0, 0x3f19999a, 0x14,
    0, 0x3f000000, 5, 0x3f666666, 0x3f000000, 0x14, 0, 0x3f000000,
    0x14,
};
static const u32 sBustUpPacketC[36] = {
    0x3f800000, 0x41000000, 0x14, 0x41000000, 0x41200000, 0xa, 0x41200000, 0,
    0x1e, 0, 0x40800000, 0x14, 0x40800000, 0x40c00000, 0xa, 0x40c00000,
    0, 0x1e, 0x3f800000, 0x3f8a3d71, 0x1e, 0x3f8a3d71, 0x3f8a3d71, 0xa,
    0, 0x40200000, 0x14, 0x40200000, 0x40800000, 0x14, 0x3f800000, 0x3f99999a,
    0x1e, 0x3f99999a, 0x3f800000, 0xa,
};
static const u32 sBustUpPacketD[623] = {
    0xfffffffd, 0, 0xfffffffd, 9, 0, 0xfffffffd, 0, 0xffffffff,
    0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xfffffffd, 0,
    0xfffffffd, 0xa, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff,
    0xffffffff, 0, 0xffffffff, 0, 0, 0, 0xfffffffd, 0xfffffffd,
    0, 0xfffffffd, 0, 1, 0, 0xfffffffd, 0xfffffffd, 0,
    0xfffffffd, 0, 0xfffffffe, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd,
    0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
    0, 0, 0xfffffffd, 0, 0, 0, 0, 1,
    0, 0xfffffffd, 1, 0, 1, 0, 0xfffffffe, 0,
    0xfffffffd, 2, 0, 2, 0, 0xfffffffd, 0, 0xfffffffd,
    0xfffffffe, 0, 0xfffffffe, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 2, 0, 0xfffffffd, 3, 0,
    0xfffffffd, 0, 3, 0, 0xfffffffd, 4, 0, 0xfffffffd,
    0, 4, 0, 0xfffffffd, 5, 0, 0xfffffffd, 0,
    5, 0, 0xfffffffd, 6, 0, 0xfffffffd, 0, 6,
    0, 0xfffffffd, 7, 0, 0xfffffffd, 0, 7, 0,
    0xfffffffd, 8, 0, 0xfffffffd, 0, 0xfffffffe, 0, 0xfffffffd,
    0xfffffffe, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 2, 0, 0xfffffffd, 0xfffffffd, 0,
    0xfffffffd, 0, 3, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd,
    0, 4, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0,
    5, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0, 6,
    0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0, 7, 0,
    0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffe, 0, 0xfffffffd,
    0xfffffffe, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd, 0xb, 0,
    0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0xc, 0, 0xfffffffd,
    0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
    0xfffffffd, 0, 0xfffffffd, 0, 0, 3, 0, 0xfffffffd,
    0, 0xfffffffd, 1, 0, 4, 0, 0xfffffffd, 0,
    0xfffffffd, 0xf, 0, 5, 0, 0xfffffffd, 0, 0xfffffffd,
    0xfffffffe, 0, 0xfffffffe, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd, 0xd, 0,
    3, 0, 0xfffffffd, 0, 0xfffffffd, 0xe, 0, 4,
    0, 0xfffffffd, 0, 0xfffffffd, 0xf, 0, 5, 0,
    0xfffffffd, 0, 0xfffffffd, 0xfffffffe, 0, 0xfffffffe, 0, 0xffffffff,
    0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xfffffffd, 0,
    0xfffffffd, 0x10, 0, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd,
    0x11, 0, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0xfffffffe,
    0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0,
    0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd, 0x12, 0, 6,
    0, 0xfffffffd, 0, 0xfffffffd, 0x13, 0, 7, 0,
    0xfffffffd, 0, 0xfffffffd, 0x14, 0, 0xfffffffe, 0, 0xfffffffd,
    0, 0xfffffffd, 0xfffffffe, 0, 0xfffffffd, 0, 0xffffffff, 0,
    0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd,
    0x15, 0, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0x15,
    1, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0xfffffffe, 0,
    0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff,
    0, 0xfffffffd, 0, 0xfffffffd, 0x16, 0, 0xfffffffd, 0,
    0xfffffffd, 0, 0xfffffffd, 0x16, 1, 0xfffffffd, 0, 0xfffffffd,
    0, 0xfffffffd, 0xfffffffe, 0, 0xfffffffd, 0, 0xffffffff, 0,
    0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd,
    0x17, 0, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0x17,
    1, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0xfffffffe, 0,
    0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff,
    0, 0xfffffffd, 0, 0xfffffffd, 0x1a, 0, 0xfffffffd, 0,
    0xfffffffd, 0, 0xfffffffd, 0x1a, 1, 0xfffffffd, 0, 0xfffffffd,
    0, 0xfffffffd, 0xfffffffe, 0, 0xfffffffd, 0, 0xffffffff, 0,
    0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd,
    0x18, 0, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0x18,
    1, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffd, 0xfffffffe, 0,
    0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff,
    0, 0xfffffffd, 0, 0xfffffffd, 0x1a, 0, 0xfffffffd, 0,
    0xfffffffd, 0, 0xfffffffd, 0x1a, 1, 0xfffffffd, 0, 0xfffffffd,
    0, 0xfffffffd, 0xfffffffe, 0, 0xfffffffd, 0, 0xffffffff, 0,
    0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0, 0, 0xfffffffd,
    0, 0, 8, 0, 1, 0, 0xfffffffd, 0,
    1, 9, 0, 0xfffffffe, 0, 0xfffffffd, 0xfffffffe, 0,
    0xfffffffe, 0, 0xfffffffd, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd,
    0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
    0, 0, 0xfffffffd, 0x12, 0, 0xa, 0, 1,
    0, 0xfffffffd, 0x13, 0, 0xb, 0, 0xfffffffe, 0,
    0xfffffffd, 0x14, 0, 0xfffffffe, 0, 0xfffffffd, 0, 0xfffffffd,
    0xfffffffe, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 0, 0, 0xfffffffd, 0x19, 0,
    0xfffffffd, 0, 1, 0, 0xfffffffd, 0x19, 1, 0xfffffffd,
    0, 0xfffffffe, 0, 0xfffffffd, 0xfffffffe, 0, 0xfffffffd, 0,
    0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
};
void memClear(void *data, u32 size);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 FUN_00206528(u32 handle);
s32 FUN_0022535c(u32 handle);
void drawParameterBlockClear(UiResourceParameters *parameters);


void btlTalkBustUpCreate(void)
{
    if (g_btlTalkBustUp == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\Talk\\btlTalkBustUp.cpp", 0x3D5);
        g_btlTalkBustUp = static_cast<BtlTalkBustUp *>(asdMemAlloc(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BtlTalkBustUp), 1));
        BtlTalkBustUp *work = g_btlTalkBustUp;
        memClear(work, sizeof(BtlTalkBustUp));
        work->textureNode = -1;
        work->devilId = 0;
        work->scaleX = 1.0f;
        work->scaleY = 1.0f;
        work->progress = 0.0f;
        work->state = 0;
        work->stateCounter = 0;
        work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"),
            2, 0, 0, FUN_00206528, NULL, 0);
        taskCreateDraw(reinterpret_cast<const s8 *>("TalkBustUp DrawLeft"), 0x7D, 0, 0,
            FUN_0022535c, NULL, 0, reinterpret_cast<void *>(work->job));
        taskCreateDraw(reinterpret_cast<const s8 *>("TalkBustUp DrawRight"), 0xDB, 0, 0,
            FUN_0022535c, NULL, 0, reinterpret_cast<void *>(work->job));
        UiResourceParameters *parameters = &work->resources;
        drawParameterBlockClear(parameters);
        paramsInit(parameters, sBustUpPacketA, sizeof(sBustUpPacketA), sBustUpPacketB, sizeof(sBustUpPacketB),
                   sBustUpPacketC, sizeof(sBustUpPacketC), NULL, 0, sBustUpPacketD, sizeof(sBustUpPacketD));
    }
}
}
