#include "common.h"

extern "C" {

extern void FUN_002bc7f4(u32 parameter, u32 *value);

struct GraphicsParameterLabels {
    const char *names[21];
};
typedef char GraphicsParameterLabelsSizeCheck[sizeof(GraphicsParameterLabels) == 0x54 ? 1 : -1];
extern const GraphicsParameterLabels DAT_00409a14;

/* Queries the graphics parameters used by the renderer. */
void gxQueryCommandListParameters(void)
{
    u32 submitPending;
    FUN_002bc7f4(0x201, &submitPending);
    u32 commandBytesUsed;
    FUN_002bc7f4(0x202, &commandBytesUsed);
    u32 entryCount;
    FUN_002bc7f4(0x203, &entryCount);
    u32 commandBufferLength;
    FUN_002bc7f4(0x204, &commandBufferLength);
    u32 parameter205;
    FUN_002bc7f4(0x205, &parameter205);
    u32 commandBufferStart;
    FUN_002bc7f4(0x206, &commandBufferStart);
    u32 parameter207;
    FUN_002bc7f4(0x207, &parameter207);
    u32 commandCursor;
    FUN_002bc7f4(0x208, &commandCursor);
    u32 parameter209;
    FUN_002bc7f4(0x209, &parameter209);
    u32 currentEntryIndex;
    FUN_002bc7f4(0x20A, &currentEntryIndex);
    u32 entries;
    FUN_002bc7f4(0x20B, &entries);
    u32 currentEntryType;
    FUN_002bc7f4(0x20C, &currentEntryType);
    u32 currentEntryArguments[2];
    FUN_002bc7f4(0x20D, currentEntryArguments);
    u32 pipelineStallFlags;
    FUN_002bc7f4(0x20E, &pipelineStallFlags);
    /* The release diagnostic retains its pipeline-stall label initialization. */
    GraphicsParameterLabels labels = DAT_00409a14;
}

} /* extern "C" */
