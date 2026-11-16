#ifndef CLASSES_OBJ55C244_H
#define CLASSES_OBJ55C244_H

#include "common.h"
#include "shard/S1NnOs.h"
#include <stddef.h>

extern "C" void nn_os_LightEvent_Initialize(void *event, s32 clearMode);
extern "C" void nn_os_LightEvent_Signal(void *event);


/* A light event cleared and initialized on construction. */
struct Obj55c244Event {
    explicit Obj55c244Event(s32 clearMode)
    {
        event.state = 0;
        event.lock = 0;
        nn_os_LightEvent_Initialize(&event, clearMode);
    }
    LightEvent event;
};

/* Playback state of Obj55c244 (offsets relative to it; it sits at 0x14). */
struct Obj55c244Playback {
    Obj55c244Playback()
    {
        unk00 = 1.0f;
        unk04 = 1.0f;
        unk08 = 0.0f;
        unk0c = 0.0f;
        unk10 = 0.0f;
        unk1a = 0;
        unk18 = 0xff;
        unk14 = 0.0f;
    }
    /* 0x00 */ f32 unk00;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0C */ f32 unk0c;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19;
    /* 0x1A */ u8 unk1a;
};

/* The object whose vtable is at 0x55c244 (named after it until its real name is known): a base
 * class that owns a signalled light event and playback state. Slots 0/1 are the (pure)
 * destructor, slots 2-6 are overridden by its derived classes. */
class Obj55c244 {
public:
    Obj55c244();
    virtual ~Obj55c244() = 0;
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ Obj55c244Event event;
    /* 0x0C */ u8 unk0c;
    /* 0x0D */ u8 unk0d;
    /* 0x0E */ u8 unk0e;
    /* 0x0F */ u8 unk0f;
    /* 0x10 */ u8 unk10;
    /* 0x14 */ Obj55c244Playback playback;
    /* 0x30 */ f32 unk30;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3c;
};

typedef char Obj55c244LayoutCheck[sizeof(Obj55c244) == 0x40 ? 1 : -1];
typedef char Obj55c244EventLayoutCheck[
    sizeof(LightEvent) == 8 && offsetof(LightEvent, state) == 0 &&
    offsetof(LightEvent, lock) == 4 ? 1 : -1];

#endif
