#include "common.h"
#include "nn/Result.h"
#include "map/mapHakai.h"
#include "network/CecControl.h"
#include "addon/CecCard.h"
#include "shard/W6_W6Match3_MapSceneTransition.h"

struct CecMessageRequest {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ const void* nameData;
    /* 0x08 */ const void* messageData;
    /* 0x0C */ u8 settings[1];
};

extern "C" {

/* The CEC (StreetPass) message-box data of the card exchange, defined in this file so one literal
 * addresses all of it: the dispatch context tag, the service id and the two UTF-16 texts. */
u32 g_resourceDispatchContext = 0xAB0004CE;
char g_cecCardServiceId[33] = "-SHIN-MEGAMITENSEI-4G-8765432109";
u16 g_cecCardsReceivedText[46] = {
    'Y', 'o', 'u', ' ', 'h', 'a', 'v', 'e', ' ', 'r', 'e', 'c', 'e', 'i', 'v', 'e', 'd', ' ',
    'c', 'a', 'r', 'd', '(', 's', ')', ' ', 'f', 'r', 'o', 'm', ' ', 'o', 't', 'h', 'e', 'r',
    ' ', 'H', 'u', 'n', 't', 'e', 'r', 's', '.', 0
};
u16 g_gameTitleText[34] = {
    'S', 'h', 'i', 'n', ' ', 'M', 'e', 'g', 'a', 'm', 'i', ' ', 'T', 'e', 'n', 's', 'e', 'i',
    ' ', 'I', 'V', ':', '\n', 'A', 'p', 'o', 'c', 'a', 'l', 'y', 'p', 's', 'e', 0
};

u32 FUN_0042d694(u32 resource);
s32 FUN_00316750(const u16* text, const void* data, u32 size, u32 argument, u32 timeout);
s32 FUN_003a476c(u32, u32, const char *, const void *, u32, const u16 *, u32, u32);

// Prepare outgoing CEC data and translate the transport result into application status.
u32 cecSendCardData(CecMessageRequest* request, u32 argument)
{
    u32 status = 0;
    cecSettingsSet(2, 3, 0xFF, 0);
    u32 resource = FUN_0042d694(0x19A2);
    cecWriteMessageBoxNameAndData(resource, g_resourceDispatchContext, g_gameTitleText,
                                 request->nameData, 0x1200);
    s32 result = FUN_00316750(g_cecCardsReceivedText, request->messageData, 0xC80, argument, 100);
    if (!nnResultIsSuccess(result)) {
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
        asdCecCopySettings(reinterpret_cast<u32>(request->settings));
    }
    return status;
}

// Initialize the card message box, translating its state to menu status bits.
u32 cecCardMessageBoxInit(CecCardOwner *owner)
{
    u32 box = FUN_0042d694(0x19a2);
    s32 result = FUN_003a476c(box, g_resourceDispatchContext, g_cecCardServiceId,
                            owner->data, 0x1200, g_gameTitleText, 32, 99);
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
    }
    cecSettingsSet(2, 3, 255, 0);
    box = FUN_0042d694(0x19a2);
    result = cecWriteMessageBoxNameAndData(box, g_resourceDispatchContext,
                                         g_gameTitleText, owner->data, 0x1200);
    return result == 5 ? 0x11 : 0;
}

} /* extern "C" */
