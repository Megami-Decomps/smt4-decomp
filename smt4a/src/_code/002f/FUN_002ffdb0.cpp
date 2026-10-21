/* NON_MATCHING: portable 16-bit byte swaps expand to shifts instead of retail REV16, with different socket/address registers. */
#include "common.h"

struct SocketAddressView {
    u8 unk00[6];
    u16 networkPort;

    u16 port() const { return (u16)((networkPort << 8) | (networkPort >> 8)); }
    void setPort(u16 value) { networkPort = (u16)((value << 8) | (value >> 8)); }
};

struct SocketState;
struct NetworkStateView {
    u8 unk00[0x10c];
    u8 active;
};

struct SocketConnectionView {
    u8 unk00[0x68];
    SocketAddressView address;
    u8 unk70[0x18];
    u8 socket[0x190]; // 0x88
    u32 resetAddress; // 0x218
};

extern "C" {
NetworkStateView *FUN_002ea704(void);
u32 FUN_002f8208(SocketState *socket, u32 option);
u32 FUN_002f2dfc(SocketState *socket, SocketAddressView *address, u32 option);
u32 FUN_0010de3c(SocketConnectionView *connection);

// Resolve the active socket address, or use the default connection handler.
u32 FUN_002ffdb0(SocketConnectionView *connection)
{
    if (FUN_002ea704() != NULL && FUN_002ea704()->active != 0) {
        SocketState *socket = reinterpret_cast<SocketState *>(connection->socket);
        u32 result = FUN_002f8208(socket, 1);
        if (result != 0) {
            SocketAddressView *address = &connection->address;
            if (connection->resetAddress != 0)
                address->setPort(0);
            if (address->port() == 0 ||
                (result = FUN_002f2dfc(socket, address, 1)) == 0)
                result = FUN_0010de3c(connection);
        }
        return result;
    }
    return 0;
}
}
