/* NON_MATCHING: Retail push {r2, r3, r4, r5, r6, lr} differs from recovered push {r4, r5, lr}. */
#include "classes/Obj55aff4.h"

// Private views of the layouts accessed by this function.

struct ConnectionOptionsView {
    u8 unk00[0x88]; // 0x00
    Obj55aff4 unk88; // 0x88
    u16 unk90; // 0x90
    u8 unk92[2]; // 0x92
    u32 unk94; // 0x94
};

struct ConnectionStateView {
    u8 unk00[0x110]; // 0x00
    Obj55aff4 unk110; // 0x110
    u16 unk118; // 0x118
};

struct ConnectionManagerView {
    u8 unk00[0xD0]; // 0x00
    ConnectionStateView* unkD0; // 0xD0
};

struct OnlineStateView {
    u8 unk00[0x120]; // 0x00
    u8 unk120[1]; // 0x120, opaque address data
};

extern "C" {
ConnectionManagerView* FUN_002eb5f4(void);
OnlineStateView* FUN_002ea704(void);
Obj55aff4 onlineSockAddrToString(const void* address);
void watcherRefreshEnabledState(void);
extern const u16 DAT_00538900;
}

// Apply the selected address and the explicit or default port to the active connection.
extern "C" u32 FUN_00300064(const ConnectionOptionsView* options)
{
    if (FUN_002eb5f4() == 0 || FUN_002ea704() == 0)
        return 0;

    switch (static_cast<u8>(options->unk94)) {
    case 0:
        FUN_002eb5f4()->unkD0->unk110 = options->unk88;
        break;
    case 1: {
        ConnectionStateView* connection = FUN_002eb5f4()->unkD0;
        connection->unk110 = onlineSockAddrToString(FUN_002ea704()->unk120);
        break;
    }
    default:
        watcherRefreshEnabledState();
        return 0;
    }

    if (options->unk90 != 0) {
        ConnectionManagerView* manager = FUN_002eb5f4();
        const u16 port = options->unk90;
        manager->unkD0->unk118 = port;
    } else {
        ConnectionManagerView* manager = FUN_002eb5f4();
        manager->unkD0->unk118 = DAT_00538900;
    }
    return 1;
}
