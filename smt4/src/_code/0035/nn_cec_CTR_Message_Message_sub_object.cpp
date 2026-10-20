#include "common.h"

extern "C" {

int nn_cec_CTR_Message_InitializeMessage(...);

typedef struct Message {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u8 unk004[0x12C];
    /* 0x130 */ u8 unk130;
    /* 0x131 */ u8 unk131[7];
    /* 0x138 */ u32 unk138;
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ u32 unk140;
    /* 0x144 */ u32 unk144;
    /* 0x148 */ u32 unk148;
    /* 0x14C */ u32 unk14C;
    /* 0x150 */ u32 unk150;
    /* 0x154 */ u32 unk154;
    /* 0x158 */ u32 unk158;
    /* 0x15C */ u32 unk15C;
    /* 0x160 */ u32 unk160;
} Message;

int nn_cec_CTR_Message_Message_sub_object(Message *message)
{
    message->unk130 = 0;
    message->unk138 = 0;
    message->unk144 = 0;
    message->unk148 = 0;
    message->unk14C = 0;
    message->unk150 = 0;
    message->unk154 = 0;
    message->unk158 = 0;
    message->unk15C = 0;
    message->unk160 = 0;
    message->unk13C = 0;
    message->unk140 = 0;
    nn_cec_CTR_Message_InitializeMessage(message);
    return (int)message;
}

} /* extern "C" */
