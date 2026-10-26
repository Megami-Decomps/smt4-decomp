/* NON_MATCHING: reset-store scheduling, thread descriptor stack placement and saved-register allocation differ. */
#include "nn/Result.h"
#include "mobiclip_ctrl/MoviePlayerInitialization.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "sys/ResultReport.h"
extern "C" {
extern void *DAT_0044d158;
extern ThreadStackStorage *DAT_0044d15c;
void *memAlloc(u32 heap, u32 alignment, u32 mode, u32 bytes, u32 pageSize, u32 flags);
void mwmofilterDeblockerInit(void *queue);
void nn_os_LightEvent_Initialize(void *event, bool manualReset);
void nn_os_CriticalSection_Initialize(void *section);
void nn_os_LightEvent_Signal(void *event);
void FUN_0034fb94(void *argument);
void FUN_003f6ee4(void);
void FUN_003f6ffc(void);
void FUN_003f6f98(void);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void *),
    const void *argument, u32 stackTop, s32 priority, s32 processor, u32 flags);

u32 FUN_00351498(MoviePlayerInitialization *player, void *fileBackend, void *reader,
    void *decoder, void *output, void *consumer)
{
    if (!fileBackend || !reader || !decoder || !output)
        return 0;
    player->initialization.reader = reader;
    player->initialization.decoder = decoder;
    player->initialization.fileBackend = fileBackend;
    player->initialization.output = output;
    player->initialization.consumer = consumer;
    player->initialization.state = 0;
    player->pending = 0;
    player->error = 0;
    player->restart = 0;
    player->pump.packet.current = -1;
    player->pump.packet.streamCount = 0;
    player->pump.sync.io.entries.count = 0;
    player->pump.sync.entryIndex[0] = -1;
    player->initialization.audio = 0;
    player->pump.sync.limit[0] = 0;
    player->pump.sync.readPos[0] = 0;
    player->pump.sync.entryIndex[1] = -1;
    player->pump.sync.limit[1] = 0;
    player->pump.sync.readPos[1] = 0;
    player->pump.packet.prepared = 0;
    player->initialization.firstPacketTime = 0;
    player->initialization.counter = 0;
    player->initialization.nextTime = 0;
    player->initialization.lastTime = 0;
    player->initialization.firstTime = 0;
    mwmofilterDeblockerInit(player->initialization.queue);
    nn_os_LightEvent_Initialize(player->initialization.wakeEvent, true);
    nn_os_CriticalSection_Initialize(player->initialization.criticalSection);
    nn_os_LightEvent_Signal(player->initialization.wakeEvent);
    player->initialization.stopping = 0;
    player->initialization.suspended = 0;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\mobiclip_ctrl\\helper_S4Player.cpp", 811);
    DAT_0044d158 = memAlloc(0x100, 0x100, 0, 0x2000, 0x1000, 1);
    ThreadStackStorage *stack = (ThreadStackStorage *)asdOperatorNew(sizeof(ThreadStackStorage));
    if (stack) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    DAT_0044d15c = stack;
    resultReportIfFailed(stack, DAT_0044d158, 0x2000);
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(player);
    descriptor.callbacks[0] = FUN_003f6ee4;
    descriptor.callbacks[1] = FUN_003f6ffc;
    descriptor.callbacks[2] = FUN_003f6f98;
    MoviePlayerInitialization *argument = player;
    s32 result = FUN_002bcc60(player->initialization.thread, &descriptor, FUN_0034fb94,
        &argument, DAT_0044d15c->info.address + DAT_0044d15c->info.size, 17, -2, 0);
    if (nnResultIsFailure(result))
        FUN_002c526c(result);
    return 1;
}
}
