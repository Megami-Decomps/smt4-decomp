/* event/eventCommand.c: event command execution. */
#ifndef EVENT_EVENTCOMMAND_H
#define EVENT_EVENTCOMMAND_H

#include "common.h"

/* The "EventMessUnderFade" job's work (eventSetUnderMessageFade): a full-screen quad drawn under the
 * message window whose alpha ramps by `delta` per frame for `duration` frames. The process
 * (eventMessUnderFadeJobStep, Apocalypse eventMessUnderFadeJobStep) steps the ramp, the two draw tasks (uiFadeQuadDrawJob)
 * draw it, and the destroy callback (eventCommandFreeWorkCallback / eventCommandFreeWork) frees it.
 * Every callback receives it from jobGetWork(). */
typedef struct EventCommand {
    /* 0x00 */ u32 job;      /* the "EventMessUnderFade_Proc" process */
    /* 0x04 */ u32 color;    /* RGBA; the alpha byte is scaled by `alpha` */
    /* 0x08 */ f32 alpha;
    /* 0x0C */ f32 delta;    /* added to alpha each frame */
    /* 0x10 */ s32 elapsed;
    /* 0x14 */ s32 duration;
} EventCommand;

/* g_eventCommand: the fade work, the event job stopped with the command and the movie job. */
typedef struct EventCommandGlobals {
    /* 0x00 */ EventCommand *command;
    /* 0x04 */ u32 job;      /* job stopped together with the command */
    /* 0x08 */ u32 movieJob; /* the movie (mobiclip) process a script command waits for */
} EventCommandGlobals;

typedef char EventCommandSizeCheck[sizeof(EventCommand) == 0x18 && sizeof(EventCommandGlobals) == 0xC ? 1 : -1];

#ifdef __cplusplus
extern "C" EventCommandGlobals g_eventCommand;
#endif

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void FUN_00342334(u8 value);
/* The game flag that marks scene `scene` as seen (0x800 + scene): a one-instruction function armlink inlined
 * (inlined.txt in both games). */
s32 eventFlagForScene(s32 scene);
#ifdef __cplusplus
}
#endif

#endif
