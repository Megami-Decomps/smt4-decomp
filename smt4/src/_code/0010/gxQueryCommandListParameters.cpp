#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

extern void gxGetCommandListParameter(u32 parameter, u32 *value);

/* unit-local: the names of the hardware-state bits ("tri setup" ... "post dma"), read only here. */
struct GraphicsParameterLabels {
    const char *names[21];
};
typedef char GraphicsParameterLabelsSizeCheck[sizeof(GraphicsParameterLabels) == 0x54 ? 1 : -1];
extern const GraphicsParameterLabels g_gxHardwareStateLabels;

/* Reads every command-list parameter and the hardware state, for a debug report. */
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
    u32 maxRequestCount;
    gxGetCommandListParameter(0x205, &maxRequestCount);
    u32 commandBufferStart;
    gxGetCommandListParameter(0x206, &commandBufferStart);
    u32 boundList;
    gxGetCommandListParameter(ASD_GX_CMDLIST_BINDING, &boundList);
    u32 commandCursor;
    gxGetCommandListParameter(0x208, &commandCursor);
    u32 runRequestCount;
    gxGetCommandListParameter(0x209, &runRequestCount);
    u32 currentEntryIndex;
    gxGetCommandListParameter(0x20A, &currentEntryIndex);
    u32 entries;
    gxGetCommandListParameter(0x20B, &entries);
    u32 currentEntryType;
    gxGetCommandListParameter(0x20C, &currentEntryType);
    u32 currentEntryArguments[2];
    gxGetCommandListParameter(0x20D, currentEntryArguments);
    u32 hardwareState;
    gxGetCommandListParameter(0x20E, &hardwareState);
    /* What printed them is compiled out of the release build; the copy of the bit names remains. */
    GraphicsParameterLabels labels = g_gxHardwareStateLabels;
}

} /* extern "C" */
