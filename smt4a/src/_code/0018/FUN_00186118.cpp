/* NON_MATCHING: retail keeps a second copy of data in r6 (r4 then walks to the payload), shares one *size = 0 store for both failures and saves r7/r8; the build predicates the failure stores. */
#include "AsdSDK/ModelContainer.h"
extern "C" {
s32 rt_memcmp(const void*, const void*, u32);
extern const char g_asdModelContainerAtbcMagic[];
extern const char g_asdModelContainerAbchMagic[];
extern const char g_asdModelPayloadSignature[];

// Unwraps a signed model payload, leaving unrecognized container formats untouched.
const void* FUN_00186118(const void* data, u32* size)
{
    const AsdModelContainerHeader* container = (const AsdModelContainerHeader*)data;
    if (rt_memcmp(data, g_asdModelContainerAtbcMagic, 4) == 0 ||
        rt_memcmp(data, g_asdModelContainerAbchMagic, 4) == 0) {
        u32 offset = container->payloadOffset;
        if (offset == 0) {
            offset = container->fallbackOffset;
        }
        const AsdModelPayloadHeader* payload = (const AsdModelPayloadHeader*)((const u8*)container + offset);
        if (rt_memcmp(payload, g_asdModelPayloadSignature, 7) == 0) {
            *size = payload->payloadSize;
            return payload + 1;
        }
        *size = 0;
        return NULL;
    }
    *size = 0;
    return data;
}
}
