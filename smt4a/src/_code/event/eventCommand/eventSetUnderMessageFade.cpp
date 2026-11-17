/* NON_MATCHING: only the second taskCreateDraw's owner reload differs: retail `ldr r1, [r4]`, build `ldr r0, [r4]`. */
#include "event/eventCommand.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
s32 FUN_0035c0c8(u32 handle);
s32 uiFadeQuadDrawJob(u32 handle);
void eventCommandFreeWork(u32 handle);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);

// Create the under-message fade processes as needed and configure the alpha ramp.
void eventSetUnderMessageFade(u32 color, s32 duration, s32 fadeIn, f32 alpha)
{
    if (g_eventCommand.command == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\eventCommand.cpp", 0x307);
        EventCommand *command = static_cast<EventCommand *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventCommand), 1));
        g_eventCommand.command = command;
        command->alpha = 0.0f;
        command->duration = 0;
        command->elapsed = 0;
        command->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EventMessUnderFade_Proc"), 4, 0, 0, FUN_0035c0c8, eventCommandFreeWork, reinterpret_cast<u32>(command));
        taskCreateDraw(reinterpret_cast<const s8 *>("EventMessUnderFade_Draw"),
            0x85, 0, 0, uiFadeQuadDrawJob, NULL, reinterpret_cast<u32>(command), reinterpret_cast<void *>(command->job));
        taskCreateDraw(reinterpret_cast<const s8 *>("EventMessUnderFade_Draw"),
            0xe1, 0, 0, uiFadeQuadDrawJob, NULL, reinterpret_cast<u32>(command), reinterpret_cast<void *>(command->job));
    }
    EventCommand *command = g_eventCommand.command;
    command->duration = duration;
    command->elapsed = 0;
    if (fadeIn) {
        command->color = color;
        if (duration == 0) {
            command->alpha = alpha;
            command->delta = 0.0f;
        } else {
            command->alpha = 0.0f;
            command->delta = alpha / duration;
        }
        return;
    }
    if (duration == 0) {
        command->color = color;
        command->alpha = 0.0f;
        command->delta = 0.0f;
        return;
    }
    if (command->alpha == 0.0f) {
        command->color = color;
    }
    command->alpha = alpha;
    command->delta = -(alpha / duration);
}
}
