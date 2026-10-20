#include "common.h"

extern "C" {

#define INSTANTIATION_CONTEXT_SLOT_COUNT 14
#define RESULT_OUT_OF_RANGE 0xe0000003

typedef struct InstantiationContext {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 slots[INSTANTIATION_CONTEXT_SLOT_COUNT];
} InstantiationContext;

/* L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstantiationContext.cpp": the wide __FILE__ */
extern const u16 DAT_0053a208[];

int FUN_002e9e60(const u16 *file, int line, u32 result, int arg3);

/* Clears slot `index` of the context; an index past the last slot logs an out-of-range error and fails. */
bool onlineInstantiationContextClearSlot(InstantiationContext *context, u32 unused, u32 index)
{
    if (index >= INSTANTIATION_CONTEXT_SLOT_COUNT) {
        FUN_002e9e60(DAT_0053a208, 0x55, RESULT_OUT_OF_RANGE, 0);
        return false;
    }
    context->slots[index] = 0;
    return true;
}

} /* extern "C" */
