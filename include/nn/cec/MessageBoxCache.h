#ifndef NN_CEC_MESSAGEBOXCACHE_H
#define NN_CEC_MESSAGEBOXCACHE_H

#include "shard/W6_W6Match6_CecMessageBox.h"
#include "shard/CecMessageBox.h"
#include "nn/cec/MessageKey.h"

struct CecMessageBoxCacheView : CecMessageBoxOpenView {
    u8 unk55c[0x320];
    /* 0x87c */ CecMessageIndexHeader pendingInbox;
    /* 0x89c */ CecMessageIndexHeader pendingOutbox;

    void beginInboxUpdate()
    {
        if (flags0a == 0) {
            pendingInbox = inbox.header;
        }
        flags0a = 1;
    }

    void beginOutboxUpdate()
    {
        if (flags0b == 0) {
            pendingOutbox = outbox.header;
        }
        flags0b = 1;
    }
};
typedef char CecMessageBoxCacheOffsets[
    sizeof(CecMessageBoxOpenView) == 0x55c &&
    offsetof(CecMessageBoxCacheView, pendingInbox) == 0x87c &&
    offsetof(CecMessageBoxCacheView, pendingOutbox) == 0x89c &&
    sizeof(CecMessageBoxCacheView) == 0x8bc ? 1 : -1];

#endif
