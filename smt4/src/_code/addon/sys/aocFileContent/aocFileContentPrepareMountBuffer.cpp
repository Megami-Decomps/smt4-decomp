/* NON_MATCHING: on the failure path retail loads g_aocMain's address before the second legacyResourceIdRemap call;
 * this build loads it after (and pools it after the status constant). w94-s4 matched it by reading the global through a local `AocMain *&main = g_aocMain` reference alias, which only
 * steers the allocation (not kept). */
#include <stdio.h>
#include "addon/aocMain.h"
#include "addon/sys/aocFileContent.h"
#include "classes/WindowOperation.h"
#include "nn/Result.h"
#include "AsdSDK/AsdDebug.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "sys/RuntimeObjects.h"
#include "sys/WindowStatusCheck.h"
#include "runtime/String.h"

/* The mount format occupies eight bytes of the module's string table, including padding. */
struct AocMountNamePattern { char text[8]; };

enum { AOC_MOUNT_RETRY = 200, AOC_CONTENT_READY = 0x10000 };
enum { AOC_RESULT_NO_CHANGE = 0xC9413891 };

extern "C" {
extern const char g_aocFileContentSourcePath[];
extern const AocMountNamePattern g_aocMountNameFormat; /* "aoc%d:" */
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 mode);

/* Queries an add-on archive's size, prepares its mount buffer, or returns a translated failure. */
RequestParameters aocFileContentPrepareMountBuffer(WindowOperationState *state, u32 id)
{
    if (state->mountBuffer != NULL) {
        asdMemFree(state->mountBuffer);
        state->mountBuffer = NULL;
    }
    RequestParameters operation(0);
    WindowStatusResult archiveStatus(aocFileContentQueryMountBufferSize(&state->mountBufferSize, 0xE5C, id, 2, 2, 0));
    if (windowStatusFailed(archiveStatus)) {
        jyoucyuGetTableEntry(0);
        failRequestOperation(&operation, archiveStatus);
        if (legacyResourceIdRemap(&archiveStatus) != AOC_RESULT_NO_CHANGE &&
            sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
            flagsClearBits(&g_aocMain->flags, AOC_CONTENT_READY);
            operation.kind = AOC_MOUNT_RETRY;
        }
        return operation;
    }
    asdDebugTrace(g_aocFileContentSourcePath, 190);
    state->mountBuffer = asdMemoryAlloc(0x100, 0x100, 0, state->mountBufferSize, 1);
    rt_memclr(state->mountBuffer, state->mountBufferSize);
    sprintf(state->mountName, g_aocMountNameFormat.text, id);
    return operation;
}
} /* extern "C" */
