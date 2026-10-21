#include "shard/W5_W5Match5_TwinRecords.h"

using namespace CecMessageSize;


extern "C" CecMessageHeader* nn_cec_CTR_MessageBox_GetMessHeader(
    u32 messageBox, s32 messageIndex, u32 messageType);

extern "C" u32 asdCecMessageBoxGetMessageSize(
    u32 messageBox, s32 messageIndex, u32 messageType)
{
    CecMessageHeader* header = nn_cec_CTR_MessageBox_GetMessHeader(
        messageBox, messageIndex, messageType);
    return header ? header->messageSize : 0;
}
