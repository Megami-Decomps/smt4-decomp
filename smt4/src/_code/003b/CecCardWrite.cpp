#include "common.h"
#include "nn/Result.h"
#include "addon/CecCard.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "network/CecControl.h"

/* The card's message-box description: the box id, reserved words, then the NUL-terminated program id. */
struct CecCardBox {
    u32 id;
    u32 reserved[5];
};

extern "C" {
CecCardBox g_cecCardBox = {0xab0004cd, {0, 0, 0, 0, 0}};
char s__SHIN_MEGAMITENSEI_4_0043ddd0[34] = "-SHIN-MEGAMITENSEI-4-23456789012";
/* UTF-16 text of the card message and its title. */
u16 g_cecCardMessage[37] = {'M', 'a', 's', 't', 'e', 'r', ',', ' ', 'I', ' ', 'g', 'o', 't', ' ', 'a', ' ', 'c', 'a', 'r', 'd', ' ', 'f', 'r', 'o', 'm', ' ', 'a', ' ', 'S', 'a', 'm', 'u', 'r', 'a', 'i', '.', 0};
u16 g_cecCardTitle[22] = {'S', 'h', 'i', 'n', ' ', 'M', 'e', 'g', 'a', 'm', 'i', ' ', 'T', 'e', 'n', 's', 'e', 'i', ' ', 'I', 'V', 0};

u32 FUN_00357818(u32 resourceId);
u32 FUN_003103e4(u32 resource, u32 applicationId, const char *applicationName, u32 messageData,
                 u32 messageSize, const char *messageBoxName, u32 parameter6, u32 parameter7);
s32 cecWriteMessageBoxNameAndData(u32, u32, const char *, const void *, u32);
s32 FUN_0021f57c(const char *, const void *, u32, u32, u32);
void FUN_002d55f0(void *);

// Write a communication card and translate platform errors into menu status bits.
u32 FUN_003bbb98(CecCardOwner *owner, u32 argument)
{
    u32 status = 0;
    cecSettingsSet(2, 3, 255, 0);
    u32 box = FUN_00357818(0xe5c);
    const char *title = reinterpret_cast<const char *>(g_cecCardTitle);
    cecWriteMessageBoxNameAndData(box, g_cecCardBox.id, title, owner->data, 0x1200);
    s32 result = FUN_0021f57c(reinterpret_cast<const char *>(g_cecCardMessage), owner->metadata, 0xc80, argument, 0x4c);
    if (!nnResultIsSuccess(result)) {
        if (result == static_cast<s32>(0xe0a1086c)) {
            status = 5;
        } else if (result == static_cast<s32>(0xe0a1086d)) {
            status = 9;
        } else if (result == static_cast<s32>(0xc8e10865) || result == static_cast<s32>(0xc8e10866)) {
            status = 0x41;
        } else if (result == static_cast<s32>(0xc8a10bf0)) {
            status = 0x21;
        } else {
            status = 0x11;
        }
    } else {
        FUN_002d55f0(owner->state);
    }
    return status;
}

u32 FUN_003bbd88(CecMessageBoxRequestPrefixIV *request)
{
    const u32 resource = FUN_00357818(0xe5c);
    const u32 result = FUN_003103e4(
        resource, g_cecCardBox.id, s__SHIN_MEGAMITENSEI_4_0043ddd0,
        request->messageData, 0x1200, reinterpret_cast<const char *>(g_cecCardTitle), 12, 99);

    switch (result) {
    case 0:
    case 1:
        break;
    case 2:
    case 3:
    case 5:
    case 7:
        return 0x11;
    case 6:
        return 0x81;
    case 4:
        return 3;
    default:
        break;
    }

    cecSettingsSet(2, 3, 0xff, 0);
    const u32 writeResource = FUN_00357818(0xe5c);
    const char *title = reinterpret_cast<const char *>(g_cecCardTitle);
    const u32 writeResult = cecWriteMessageBoxNameAndData(
        writeResource, g_cecCardBox.id, title,
        reinterpret_cast<const void *>(request->messageData), 0x1200);
    return writeResult == 5 ? 0x11 : 0;
}
}
