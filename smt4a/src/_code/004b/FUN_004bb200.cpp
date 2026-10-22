/* NON_MATCHING: request and transport status mapping recovered; shared resource/string address grouping and result sign test still differ. */
#include "common.h"

struct CecMessageRequest {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ const void* nameData;
    /* 0x08 */ const void* messageData;
    /* 0x0C */ u8 settings[1];
};

extern "C" {
extern u32 g_resourceDispatchContext;
extern const char DAT_0057f2ee[];
extern const char DAT_0057f34a[];
void cecSettingsSet(u32 mode, u32 flags, u32 mask, u32 option);
u32 FUN_0042d694(u32 resource);
void cecWriteMessageBoxNameAndData(u32 resource, u32 context, const char* title,
                                   const void* data, u32 size);
s32 FUN_00316750(const char* text, const void* data, u32 size, u32 argument, u32 timeout);
void asdCecCopySettings(void* settings);

// Prepare outgoing CEC data and translate the transport result into application status.
u32 FUN_004bb200(CecMessageRequest* request, u32 argument)
{
    u32 status = 0;
    cecSettingsSet(2, 3, 0xFF, 0);
    u32 resource = FUN_0042d694(0x19A2);
    cecWriteMessageBoxNameAndData(resource, g_resourceDispatchContext, DAT_0057f34a,
                                 request->nameData, 0x1200);
    s32 result = FUN_00316750(DAT_0057f2ee, request->messageData, 0xC80, argument, 100);
    if (result < 0) {
        if ((u32)result == 0xE0A1086C) {
            status = 5;
        } else if ((u32)result == 0xE0A1086D) {
            status = 9;
        } else if ((u32)result == 0xC8E10865 || (u32)result == 0xC8E10866) {
            status = 0x41;
        } else if ((u32)result == 0xC8A10BF0) {
            status = 0x21;
        } else {
            status = 0x11;
        }
    } else {
        asdCecCopySettings(request->settings);
    }
    return status;
}
}
