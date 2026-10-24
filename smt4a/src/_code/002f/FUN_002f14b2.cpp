/* NON_MATCHING: identical except the scheduling of `ldrh r3, [r4, #60]` (the message id argument): retail loads it right after the flag, built after the vtable load */
#include "classes/Obj55b28c.h"

class OnlineChannel {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void send(void *session, u32 target, u8 flag);
    virtual void unk0c();
    virtual void unk10();
    virtual void sendWithId(void *session, u32 target, u32 id, u8 flag);
};

struct OnlineSession {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ OnlineChannel *channel;
};

struct OnlineMessageExtra {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
};

struct OnlineMessage {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u16 id;
    /* 0x3e */ u8 unk3e[0x80 - 0x3e];
    /* 0x80 */ OnlineMessageExtra extra;
};

extern "C" {
void *onlineGetActiveLock(void);
OnlineChannel *FUN_001117d4(void);

/* Sends `message` for `target`: tagged messages (id bit 11) go through the shared channel, the rest through the session's own. */
void FUN_002f14b2(OnlineSession *session, u32 target, OnlineMessage *message)
{
    if (message->id & 0x800) {
        Obj55b28c lock(onlineGetActiveLock());
        OnlineChannel *channel = FUN_001117d4();
        if (channel != NULL) {
            channel->sendWithId(session, target, message->id, message->extra.flag);
        }
    } else {
        if (session->channel == NULL) {
            return;
        }
        Obj55b28c lock(onlineGetActiveLock());
        session->channel->send(session, target, message->extra.flag);
    }
}

} /* extern "C" */
