#ifndef EVENT_EVENTCOMPLETION_H
#define EVENT_EVENTCOMPLETION_H

#include "common.h"

/* Finds the completion flag for a named entry. The release build inlines a zero-result stub.
 * The name may come from the map's text buffer or the first bytes of a ScriptVmLabel. */
extern "C" u32 eventScriptFindCompletionFlag(u32 eventId, const void *entryName);

#endif
