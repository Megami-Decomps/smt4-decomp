#ifndef MOBICLIP_MOLIVEPLAYER_H
#define MOBICLIP_MOLIVEPLAYER_H

#include "mobiclip/MoLiveContainers.h"
#include "mobiclip/MoLiveTree.h"

namespace MoLive {

/* Circular buffer of T whose storage comes from a MoLive allocator. */
template <class T>
class RingBuffer {
public:
    /* Appends the elements of [first, last); false when there is no room and it cannot grow. */
    bool insert(const T *const &first, const T *const &last);

    /* 0x00 */ Allocator *allocator;
    /* 0x04 */ T *data;
    /* 0x08 */ u32 capacity;
    /* 0x0C */ u32 count;
    /* 0x10 */ u32 head;
};

/* What a stream is currently handed: `ready` says the data has been consumed. */
class StreamData : public ManagedObject {
public:
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 size;
    /* 0x0C */ u8 unk0c[5];
    /* 0x11 */ u8 ready;
};

/* One stream of the player: a queue of data handles and the handle being worked on. */
class Stream {
public:
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ RingBuffer<ObjectHandle> queue;
    /* 0x40 */ u8 unk40[4];
    /* 0x44 */ ObjectHandle current;
    /* 0x54 */ u8 unk54[0x14];
    /* 0x68 */ u8 active;       /* set while the stream has been handed data this round */
};

/* The object a player keeps per stream id (the ObjectHandleMap values). */
class StreamEntry : public ManagedObject {
public:
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ Stream *stream;
};

} /* namespace MoLive */

/* A tree of the player whose element type is not known (FUN_00521120 hooks node release). */
struct PlayerUnknownValue {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
};

/* An allocator-backed array whose elements are not known yet. */
struct PlayerArray {
    PlayerArray(MoLive::Allocator *allocator) : allocator(allocator), begin(0), end(0), capacity(0) {}

    /* 0x00 */ MoLive::Allocator *allocator;
    /* 0x04 */ u32 *begin;
    /* 0x08 */ u32 *end;
    /* 0x0C */ u32 *capacity;
};

/* Four words, cleared on construction. */
struct PlayerQuad {
    u32 a, b, c, d;
};

struct MessageHandler;

extern "C" void registerFour4AD02C(void *table);

/* Handlers by message mode (see FUN_004ad02c). */
struct MessageHandlerTable {
    MessageHandlerTable(MoLive::Allocator *allocator, void (*hook)())
        : allocator(allocator), handlers(allocator, hook)
    {
        registerFour4AD02C(this);
    }

    /* 0x00 */ MoLive::Allocator *allocator;
    /* 0x04 */ MoLive::Tree<PlayerUnknownValue> handlers;
};

/* The worker the player runs; slot 4 destroys it. */
class PlayerWorker {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void destroy();
};

/* The MoLive player object (0x14C0+ bytes). */
struct MoLivePlayer {
    MoLivePlayer(MoLive::Allocator *allocator, u32 third);
    bool flushPending();
    void releaseIdleStreams();
    void reset();

    /* 0x0000 */ PlayerQuad unk0000;
    /* 0x0010 */ u8 unk0010[8];
    /* 0x0018 */ u32 unk0018;
    /* 0x001C */ u8 unk001C[0x1400];
    /* 0x141C */ MoLive::ObjectHandleMap streams;
    /* 0x143C */ PlayerArray unk143C;
    /* 0x144C */ MoLive::Tree<PlayerUnknownValue> unk144C;
    /* 0x1474 */ MoLive::Allocator *unk1474;
    /* 0x1478 */ PlayerWorker *worker;
    /* 0x147C */ u32 unk147C;
    /* 0x1480 */ u32 unk1480;
    /* 0x1484 */ u32 unk1484;
    /* 0x1488 */ u32 unk1488;
    /* 0x148C */ std::less<u32> streamLess;
    /* 0x148D */ u8 unk148D;
    /* 0x148E */ u8 unk148E;
    /* 0x148F */ u8 unk148F;
    /* 0x1490 */ u8 unk1490;
    /* 0x1491 */ u8 unk1491;
    /* 0x1494 */ MessageHandlerTable handlers;
};

#endif
