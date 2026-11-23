/* The event script job ("EVENT CALC"): the work block g_aocJob points at and the request its starter
 * leaves for it. The job loads an event's script and message files (from the add-on package when the
 * package holds them), runs the script and then hands control back to the map (both games). */
#ifndef EVENT_EVENTSCRIPTJOB_H
#define EVENT_EVENTSCRIPTJOB_H

#include "common.h"
#include <stddef.h>

struct ScriptProcess;

/* The event to run: its number, and the script entry by index or, when the index is -1, by name. */
struct EventScriptRequest {
    /* 0x00 */ u32 eventId;
    /* 0x04 */ s32 entry;
    /* 0x08 */ char entryName[1];
};

/* A job the script dims while another speaker talks. */
struct EventScriptHighlight {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 speaker;
};

struct EventScriptJobWork {
    /* 0x00 */ u32 job;                 /* the process running the update */
    /* 0x04 */ u8 started;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 frames;              /* event viewer: frames since the state began */
    /* 0x10 */ s32 cursor;              /* event viewer: the menu row */
    /* 0x14 */ u32 eventId;
    /* 0x18 */ s32 entry;               /* the script entry's index */
    /* 0x1C */ u32 completionFlag;      /* the game flag set when the script ends; 0: none */
    /* 0x20 */ u8 useRawPaths;          /* event viewer option: load the event's files by raw path */
    /* 0x21 */ u8 rawPathsSet;          /* the viewer switched raw paths on and has to switch them off */
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 resetSlots;           /* event viewer option: restart both screens' slots before the event */
    /* 0x24 */ u8 setCompletionFlag;    /* event viewer option: raise the event's completion flag when it ends */
    /* 0x25 */ u8 unk25[7];
    /* 0x2C */ void *commands;          /* event/eNNN/eNNN.bf */
    /* 0x30 */ ScriptProcess *script;
    /* 0x34 */ void *messages;          /* event/eNNN/eNNN.mbm */
    /* 0x38 */ u8 resumeRequested;      /* restart the entry sequence once the job has stopped */
    /* 0x39 */ u8 unk39[3];
    /* 0x3C */ EventScriptHighlight highlights[8];
    /* 0x7C */ u8 highlightsActive;
};

typedef char EventScriptJobWorkOffsets[offsetof(EventScriptJobWork, state) == 0x08 &&
    offsetof(EventScriptJobWork, eventId) == 0x14 && offsetof(EventScriptJobWork, completionFlag) == 0x1C &&
    offsetof(EventScriptJobWork, unk22) == 0x22 && offsetof(EventScriptJobWork, commands) == 0x2C &&
    offsetof(EventScriptJobWork, messages) == 0x34 && offsetof(EventScriptJobWork, resumeRequested) == 0x38 &&
    offsetof(EventScriptJobWork, highlights) == 0x3C &&
    offsetof(EventScriptJobWork, highlightsActive) == 0x7C ? 1 : -1];

/* EventScriptJobWork::state of the event viewer ("EVENT VIEW CALC"). */
enum {
    EVENT_VIEW_INIT = 0,
    EVENT_VIEW_MENU = 1,
    EVENT_VIEW_LOAD = 2,
    EVENT_VIEW_RUN = 3,
    EVENT_VIEW_FLAG_EDITOR = 88,
    EVENT_VIEW_EXIT = 99
};

/* EventScriptJobWork::cursor: the rows of the viewer's menu. */
enum {
    EVENT_VIEW_ROW_EVENT = 0,
    EVENT_VIEW_ROW_ENTRY = 1,
    EVENT_VIEW_ROW_FLAG_EDITOR = 2,
    EVENT_VIEW_ROW_RAW_PATHS = 3,
    EVENT_VIEW_ROW_RESET_SLOTS = 4,
    EVENT_VIEW_ROW_COMPLETION_FLAG = 5,
    EVENT_VIEW_ROW_LAST = 5,
    EVENT_VIEW_NUMBER_MAX = 999
};

/* The event viewer's numbers (an event id, an entry index, a menu row) wrap round at either end of 0..max.
 * A macro: retail forms the stepped value again for the in-range result (both games' viewers). */
#define EVENT_WRAP_VALUE(value, max) ((value) > (max) ? 0 : ((value) < 0 ? (max) : (value)))

#endif
