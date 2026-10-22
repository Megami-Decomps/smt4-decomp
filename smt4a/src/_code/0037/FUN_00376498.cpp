/* NON_MATCHING: Retail ldrne r7, [pc, #116] differs from recovered ldrne r7, [pc, #112]. */
#include "common.h"

namespace {

struct HandlerDataView {
    u8 unk00[4];               // 0x00
    u16 handlerIndex;          // 0x04
    u8 unk06[2];               // 0x06
    u32 handlerArgument;       // 0x08
};

struct HandlerNodeView {
    u8 unk00[0x80];            // 0x00
    s32 unk80;                 // 0x80
    u8 unk84[0x0c];            // 0x84
    HandlerDataView* data;     // 0x90
    u8 unk94[0x18];            // 0x94
    HandlerNodeView* next;     // 0xac
};

struct HandlerOwnerView {
    u8 unk00[0x84];            // 0x00
    s32 unk84;                 // 0x84
    u8 unk88[4];               // 0x88
    HandlerNodeView* head;     // 0x8c
};

typedef s32 (*HandlerCallback)(u32 argument);

struct HandlerEntryView {
    u8 unk00[0x40];            // 0x00
    HandlerCallback callback;  // 0x40
};

}

extern "C" {
extern HandlerEntryView g_handlerTable[];

// Check the owner's bound against the maximum adjusted result of its handlers.
u32 FUN_00376498(HandlerOwnerView* owner)
{
    s32 maximumResult = -1;
    HandlerNodeView* node = owner->head;

    if (node != 0) {
        do {
            HandlerDataView* data = node->data;
            HandlerCallback callback = g_handlerTable[data->handlerIndex].callback;
            s32 result;
            if (callback != 0) {
                result = callback(data->handlerArgument);
                if (result == 0) {
                    return 0;
                }
            } else {
                result = -1;
            }

            result += node->unk80;
            node = node->next;
            if (maximumResult < result) {
                maximumResult = result;
            }
        } while (node != 0);

        if (maximumResult == 0) {
            return 0;
        }
    }

    return owner->unk84 >= maximumResult + 2 ? 1 : 0;
}

}
