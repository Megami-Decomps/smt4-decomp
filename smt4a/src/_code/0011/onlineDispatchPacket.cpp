/* NON_MATCHING: diagnostic-result construction uses a different stack frame and saved-register allocation. */
#include "shard/W6_W6Match5_OnlineResult.h"

extern "C" {
typedef void (*OnlinePacketCallback)(void *packet, u32 argument);
extern OnlinePacketCallback g_onlinePacketHandlers[44];
u32 FUN_00304e82(void *packet);
OnlineDiagnosticResult *_ZN12OnlineResultC1ERKj(OnlineDiagnosticResult *result, const u32 *code);
void FUN_0010b69c(OnlineDiagnosticResult *result);

/* Dispatch a recognized packet kind, constructing a diagnostic result for invalid kinds. */
void onlineDispatchPacket(void *, void *packet, u32 argument)
{
    u16 kind = FUN_00304e82(packet) & 0x7FFF;
    if (kind == 0 || kind > 44) {
        const u32 code = 0x80010002;
        OnlineDiagnosticResult result;
        FUN_0010b69c(_ZN12OnlineResultC1ERKj(&result, &code));
    } else {
        OnlinePacketCallback callback = g_onlinePacketHandlers[kind - 1];
        if (callback != NULL) {
            callback(packet, argument);
        }
    }
}
}
