#ifndef GFX_DRAWCALLBACKRECORD_H
#define GFX_DRAWCALLBACKRECORD_H

#include "common.h"

struct DrawCallbackOwner;

/* Observer notified for every record drawn with an owner. */
class DrawCallbackListener {
public:
    virtual void onDraw(DrawCallbackOwner *owner, u32 argument, u32 context) = 0;
};

/* Pointer range (begin at +0x08, end at +0x0c) of listeners. */
struct DrawCallbackListenerList {
    /* 0x00 */ u64 unk00; /* 8-byte aligned header */
    /* 0x08 */ DrawCallbackListener **begin;
    /* 0x0c */ DrawCallbackListener **end;
};

struct DrawCallbackOwner {
    /* 0x000 */ u8 unk000[0x158];
    /* 0x158 */ DrawCallbackListenerList *beforeListeners;
    /* 0x15c */ DrawCallbackListenerList *afterListeners;
};

/* Target of a record that carries a direct callback. */
class DrawCallback {
public:
    virtual void invoke(u32 context) = 0;
};

/* One entry of a draw callback list (16 bytes). */
struct DrawCallbackRecord {
    /* 0x00 */ DrawCallback *callback;
    /* 0x04 */ signed int mode : 22; /* negative: dispatch `callback` directly instead of notifying the owner's listeners */
    u32 unk04High : 10;
    /* 0x08 */ u32 argument;
    /* 0x0c */ DrawCallbackOwner *owner;
};

typedef char DrawCallbackRecordSize[sizeof(DrawCallbackRecord) == 0x10 ? 1 : -1];

#endif
