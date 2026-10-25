/* NON_MATCHING: O3 merges positive/negative ramp stores and epilogues and reuses s0 for the quotient; O2 may preserve retail's separate paths. The second draw owner load uses r0 instead of r1. */
#include "event/eventCommand.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern EventCommandGlobals g_eventCommand;
s32 FUN_002e2250(u32 handle);
s32 uiFadeQuadDrawJob(u32 handle);
void eventCommandFreeWorkCallback(u32 handle);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);

// Create the under-message fade processes as needed and configure the alpha ramp.
void eventSetUnderMessageFade(u32 color, s32 duration, s32 fadeIn, f32 alpha)
{
    if (g_eventCommand.command == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\eventCommand.cpp", 0x1cd);
        EventCommand *command = static_cast<EventCommand *>(asdMemAlloc(0x100, 0x100, 0, sizeof(EventCommand), 1));
        g_eventCommand.command = command;
        command->fade.alpha = 0.0f;
        command->duration = 0;
        command->elapsed = 0;
        command->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EventMessUnderFade_Proc"), 2, 0, 0, FUN_002e2250, eventCommandFreeWorkCallback, reinterpret_cast<u32>(command));
        taskCreateDraw(reinterpret_cast<const s8 *>("EventMessUnderFade_Draw"),
            0x80, 0, 0, uiFadeQuadDrawJob, NULL, reinterpret_cast<u32>(command), reinterpret_cast<void *>(command->job));
        taskCreateDraw(reinterpret_cast<const s8 *>("EventMessUnderFade_Draw"),
            0xde, 0, 0, uiFadeQuadDrawJob, NULL, reinterpret_cast<u32>(command), reinterpret_cast<void *>(command->job));
    }
    EventCommand *command = g_eventCommand.command;
    command->duration = duration;
    command->elapsed = 0;
    if (fadeIn) {
        command->fade.color = color;
        if (duration == 0) {
            command->fade.alpha = alpha;
            command->fade.delta = 0.0f;
        } else {
            command->fade.alpha = 0.0f;
            command->fade.delta = alpha / duration;
        }
        return;
    }
    if (duration == 0) {
        command->fade.color = color;
        command->fade.alpha = 0.0f;
        command->fade.delta = 0.0f;
        return;
    }
    if (command->fade.alpha == 0.0f) {
        command->fade.color = color;
    }
    command->fade.alpha = alpha;
    command->fade.delta = -(alpha / duration);
}
}
