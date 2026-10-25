#include "common.h"

extern "C" {

extern void gxGetCommandListParameter(u32 parameter, u32 *value);

struct GraphicsParameterLabels {
    const char *names[21];
};
typedef char GraphicsParameterLabelsSizeCheck[sizeof(GraphicsParameterLabels) == 0x54 ? 1 : -1];
extern const GraphicsParameterLabels DAT_0053d6b0;

/* Queries the graphics parameters used by the renderer. */
void gxQueryCommandListParameters(void)
{
    u32 submitPending;
    gxGetCommandListParameter(0x201, &submitPending);
    u32 commandBytesUsed;
    gxGetCommandListParameter(0x202, &commandBytesUsed);
    u32 entryCount;
    gxGetCommandListParameter(0x203, &entryCount);
    u32 commandBufferLength;
    gxGetCommandListParameter(0x204, &commandBufferLength);
    u32 parameter205;
    gxGetCommandListParameter(0x205, &parameter205);
    u32 commandBufferStart;
    gxGetCommandListParameter(0x206, &commandBufferStart);
    u32 parameter207;
    gxGetCommandListParameter(0x207, &parameter207);
    u32 commandCursor;
    gxGetCommandListParameter(0x208, &commandCursor);
    u32 parameter209;
    gxGetCommandListParameter(0x209, &parameter209);
    u32 currentEntryIndex;
    gxGetCommandListParameter(0x20A, &currentEntryIndex);
    u32 entries;
    gxGetCommandListParameter(0x20B, &entries);
    u32 currentEntryType;
    gxGetCommandListParameter(0x20C, &currentEntryType);
    u32 currentEntryArguments[2];
    gxGetCommandListParameter(0x20D, currentEntryArguments);
    u32 pipelineStallFlags;
    gxGetCommandListParameter(0x20E, &pipelineStallFlags);
    /* The release diagnostic retains its pipeline-stall label initialization. */
    GraphicsParameterLabels labels = DAT_0053d6b0;
}

} /* extern "C" */
