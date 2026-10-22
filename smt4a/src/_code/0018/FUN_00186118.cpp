/* NON_MATCHING: Container payload and signature validation use different saved registers. */
#include "AsdSDK/ModelContainer.h"
extern "C" {
s32 rt_memcmp(const void*, const void*, u32);
extern const char g_asdModelContainerAtbcMagic[];
extern const char g_asdModelContainerAbchMagic[];
extern const char g_asdModelPayloadSignature[];

// Unwraps a signed model payload, leaving unrecognized container formats untouched.
const void* FUN_00186118(const void* data, u32* size)
{
    const void* result = data;
    if (rt_memcmp(data, g_asdModelContainerAtbcMagic, 4) == 0 ||
        rt_memcmp(data, g_asdModelContainerAbchMagic, 4) == 0) {
        const AsdModelContainerHeader* container = (const AsdModelContainerHeader*)data;
        u32 offset = container->payloadOffset;
        if (offset == 0) {
            offset = container->fallbackOffset;
        }
        const AsdModelPayloadHeader* payload = (const AsdModelPayloadHeader*)((const u8*)data + offset);
        if (rt_memcmp(payload, g_asdModelPayloadSignature, 7) == 0) {
            *size = payload->payloadSize;
            return payload + 1;
        }
        result = NULL;
    }
    *size = 0;
    return result;
}
}
