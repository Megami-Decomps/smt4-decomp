/* NON_MATCHING: the port byte swap is expanded into shifts instead of rev16 and Thumb register allocation differs; the dispatch on the packet flags and the call sequence are the same. */
#include "common.h"

extern "C" {

/* The result object the dispatcher returns through a hidden pointer. */
typedef struct OnlineResult OnlineResult;

/* A socket address (only the port halfword at 6 is touched). */
typedef struct OnlineSockAddr {
    u8 unk00[6];
    u16 port;
} OnlineSockAddr;

/* The URL record the client's peer address comes from. */
typedef struct OnlineUrl {
    u8 unk00[6];
    u16 port;
} OnlineUrl;

/* An incoming packet (only the fields read here). */
typedef struct OnlinePacket {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 payload[0x14];
    /* 0x3C */ u16 flags;       /* low nibble: kind; bit 5: reliable; bit 9/10: relayed */
    /* 0x3E */ u8 unk3e[6];
    /* 0x44 */ u16 sequence;
    /* 0x46 */ u8 unk46[0x1F];
    /* 0x65 */ u8 secure;
    /* 0x66 */ u8 unk66[0x1E];
    /* 0x84 */ u8 slot;
    /* 0x85 */ u8 unk85[0x9B];
    /* 0x120 */ u16 resent;
} OnlinePacket;

/* The session the client belongs to: the flag at 0x70 asks for the receive time to be recorded. */
typedef struct OnlineSession {
    u8 unk00[4];
    u8 channel;
} OnlineSession;

typedef struct OnlineSequence {
    u8 unk00[4];
    s16 counter;
} OnlineSequence;

/* The online client (only the fields and counters this dispatcher uses). */
typedef struct OnlineClient {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ OnlineSession *session;
    /* 0x008 */ u8 url[0x94];
    /* 0x09C */ u8 entries[0x3C];
    /* 0x0D8 */ u32 receivedLow;
    /* 0x0DC */ u32 receivedHigh;
    /* 0x0E0 */ u8 unk0e0[0xC];
    /* 0x0EC */ s16 sequenceCounter;
    /* 0x0EE */ u8 unk0ee[0xA];
    /* 0x0F8 */ OnlineSequence *relaySequence;
    /* 0x0FC */ u8 unk0fc[0xC];
    /* 0x108 */ u8 payload[0x41];
    /* 0x149 */ u8 secure;
    /* 0x14A */ u8 unk14a[0xB6];
    /* 0x200 */ u8 scratch[0x90];
    /* 0x290 */ s32 packetCount;
    /* 0x294 */ s32 unreliableCount;
    /* 0x298 */ s32 unreliableKindCount;
    /* 0x29C */ s32 relayCountA;
    /* 0x2A0 */ s32 relayCountB;
    /* 0x2A4 */ u8 unk2a4[0x10];
    /* 0x2B4 */ s32 packetBytes;
    /* 0x2B8 */ s32 unreliableBytes;
    /* 0x2BC */ s32 unreliableKindBytes;
    /* 0x2C0 */ s32 relayBytesA;
    /* 0x2C4 */ s32 relayBytesB;
    /* 0x2C8 */ u8 unk2c8[0x38];
    /* 0x300 */ s32 reliableCount;
    /* 0x304 */ s32 reliableBytes;
    /* 0x308 */ u8 unk308[0x14];
    /* 0x31C */ s32 firstSendCount;
} OnlineClient;

typedef struct OnlineGlobals {
    u8 unk00[0x2C];
    u8 *peers;
} OnlineGlobals;

extern OnlineGlobals DAT_005949d8;

void FUN_001085bc(OnlineResult *result, OnlineClient *client);
void FUN_0010ae5a(s32 entry, OnlinePacket *packet, void *scratch, OnlineSession *session);
void _ZN12OnlineResultC1ERKj(OnlineResult *result, const u32 *code);
void onlineSockAddrCopy(OnlineSockAddr *destination, const void *source);
void onlineSockAddrConstruct(OnlineSockAddr *address);
OnlineUrl *onlineUrlGetAddress(void *url);
void fixedBufferCopy(void *destination, const void *source);
void FUN_002eb17c(OnlinePacket *packet, const void *address);
void FUN_002eb188(OnlineSession *session, u16 id, u32 value, OnlinePacket *packet);
void onlineTimeGetNow(u32 *time);
u32 FUN_002eacbc(OnlineClient *client);
s32 FUN_002eb6ae(OnlinePacket *packet, u32 flag);
s32 FUN_002eed8c(OnlinePacket *packet);
s32 *arrayElementAddress_002eee88(void *entries, u8 index);
void FUN_002eee90(void *scratch, OnlinePacket *packet, u8 channel, s32 arg);
void onlineEntryApply(OnlineClient *client, u8 slot);
void *FUN_002ef00c(u8 *out, ...);
u8 *FUN_002ef01c(OnlineSession *session);

/* Dispatches a received packet of a client: counts it, forwards it to its address (relayed
 * packets through the peer table), then handles it as reliable (entry apply) or unreliable
 * (sequence numbering and timing). Always returns the 0x10001 result. */
void FUN_002ef34c(OnlineResult *result, OnlineClient *client, OnlinePacket *packet)
{
    client->packetCount++;
    client->packetBytes += FUN_002eed8c(packet);
    void *url = client->url;

    if ((packet->flags & 0x200) != 0) {
        OnlineSockAddr address;

        onlineSockAddrConstruct(&address);
        onlineSockAddrCopy(&address, DAT_005949d8.peers + 8);
        u16 port = onlineUrlGetAddress(url)->port;
        address.port = (u16)((port << 8) | (port >> 8));
        FUN_002eb17c(packet, &address);
        client->relayCountA++;
        client->relayBytesA += FUN_002eed8c(packet);
    } else if ((packet->flags & 0x400) != 0) {
        OnlineSockAddr address;

        onlineSockAddrConstruct(&address);
        onlineSockAddrCopy(&address, DAT_005949d8.peers + 0x28);
        FUN_002eb17c(packet, &address);
        client->relayCountB++;
        client->relayBytesB += FUN_002eed8c(packet);
    } else {
        FUN_002eb17c(packet, onlineUrlGetAddress(url));
    }
    fixedBufferCopy(packet->payload, client->payload);
    packet->secure = client->secure;
    void *scratch = client->scratch;

    if ((packet->flags & 0x20) != 0) {
        client->reliableCount++;
        client->reliableBytes += FUN_002eed8c(packet);
        if (packet->resent == 0) {
            client->firstSendCount++;
            s32 entry = *arrayElementAddress_002eee88(client->entries, packet->slot);

            FUN_0010ae5a(entry, packet, scratch, client->session);
            if (entry == 0) {
                FUN_001085bc(result, client);
                return;
            }
        }
        FUN_002eee90(scratch, packet, client->session->channel, 1);
        onlineEntryApply(client, packet->slot);
    } else {
        client->unreliableCount++;
        client->unreliableBytes += FUN_002eed8c(packet);
        if (FUN_002eb6ae(packet, 0x10) == 0 && FUN_002eb6ae(packet, 0x2000) == 0 && (packet->flags & 0xF) == 2) {
            u8 sequenceBuffer[8];

            client->unreliableKindCount++;
            client->unreliableKindBytes += FUN_002eed8c(packet);
            if (FUN_002eb6ae(packet, 0x200) != 0 || FUN_002eb6ae(packet, 0x400) != 0) {
                OnlineSequence *sequence = (OnlineSequence *)FUN_002ef00c(sequenceBuffer, client->relaySequence);

                packet->sequence = sequence->counter;
                client->relaySequence->counter++;
            } else {
                OnlineSequence *sequence = (OnlineSequence *)FUN_002ef00c(sequenceBuffer);

                packet->sequence = sequence->counter;
                client->sequenceCounter++;
            }
            FUN_002eee90(scratch, packet, client->session->channel, 1);
        }
        if (FUN_002ef01c(client->session)[0x70] != 0) {
            u32 now[2];

            onlineTimeGetNow(now);
            client->receivedLow = now[0];
            client->receivedHigh = now[1];
        }
        FUN_002eb188(client->session, *(u16 *)((u8 *)client + 0x8E), FUN_002eacbc(client), packet);
    }
    u32 code = 0x10001;

    _ZN12OnlineResultC1ERKj(result, &code);
}

}
