/* NON_MATCHING: Message-box shared-global addressing and switch-block layout differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "network/CecControl.h"

extern "C" {
extern u32 DAT_0043ddb8;
extern char s__SHIN_MEGAMITENSEI_4_0043ddd0[33];
extern char DAT_0043de3c[];

u32 FUN_00357818(u32 resourceId);
u32 FUN_003103e4(u32 resource, u32 applicationId,
                 const char *applicationName, u32 messageData,
                 u32 messageSize, const char *messageBoxName,
                 u32 parameter6, u32 parameter7);
u32 cecWriteMessageBoxNameAndData(u32 resource, u32 applicationId,
                                const char *messageBoxName,
                                u32 messageData, u32 messageSize);

u32 FUN_003bbd88(CecMessageBoxRequestPrefixIV *request)
{
    const u32 resource = FUN_00357818(0xe5c);
    const u32 result = FUN_003103e4(
        resource, DAT_0043ddb8, s__SHIN_MEGAMITENSEI_4_0043ddd0,
        request->messageData, 0x1200, DAT_0043de3c, 12, 99);

    switch (result) {
    case 2:
    case 3:
    case 5:
    case 7:
        return 0x11;
    case 4:
        return 3;
    case 6:
        return 0x81;
    default:
        break;
    }

    cecSettingsSet(2, 3, 0xff, 0);
    const u32 writeResource = FUN_00357818(0xe5c);
    const u32 writeResult = cecWriteMessageBoxNameAndData(
        writeResource, DAT_0043ddb8, DAT_0043de3c,
        request->messageData, 0x1200);
    return writeResult == 5 ? 0x11 : 0;
}
}
