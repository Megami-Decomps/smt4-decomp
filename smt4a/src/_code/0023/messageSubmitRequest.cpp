#include "common.h"

struct MessageRequest {
    u8 unk00[0x20];       // 0x000
    u8 enabled;           // 0x020
    u8 unk21[0x11F];      // 0x021
    u32 sentinel;         // 0x140
    u8 unk144[4];         // 0x144
};

extern "C" {
void fileReadRequestReset(MessageRequest* request);
void pathSetWithRomPrefix(MessageRequest* request, u32 messageId);
void asdFileAddEntry(MessageRequest* request);

void messageSubmitRequest(u32 messageId, u8 enabled)
{
    MessageRequest request;
    request.sentinel = 0xE7E3FFFF;
    fileReadRequestReset(&request);
    pathSetWithRomPrefix(&request, messageId);
    request.enabled = enabled;
    asdFileAddEntry(&request);
}
}
