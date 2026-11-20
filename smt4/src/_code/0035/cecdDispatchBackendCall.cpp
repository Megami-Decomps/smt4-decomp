/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 g_nnCecdHandle;
extern s32 g_cecdUseLocalBackend;

extern u32 cecdServiceSvcRequest10A(u32 a, u32 b, u32 c, u32 *d);
extern u32 cecdServiceSvcRequest10B(u32 a, u32 b, u32 c, u32 *d);

u32 cecdDispatchBackendCall(u32 a, u32 b, u32 c, u32 *d)
{
    if (g_cecdUseLocalBackend != 0) {
        return cecdServiceSvcRequest10B(a, b, c, d);
    }
    if (g_nnCecdHandle != 0) {
        return cecdServiceSvcRequest10A(a, b, c, d);
    }
    return 0xE0810BF8;
}

}
