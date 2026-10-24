#ifndef CLASSES_OBJ55C244_H
#define CLASSES_OBJ55C244_H

#include "common.h"

extern "C" void nn_os_LightEvent_Initialize(void *event, s32 clearMode);
extern "C" void nn_os_LightEvent_Signal(void *event);

/* nn::os::LightEvent: the SDK clears it when it is constructed. */
struct LightEvent {
    u32 state;
    u32 waiters;
    LightEvent() : state(0), waiters(0) {}
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
    /* 0x04 */ LightEvent event;
    /* 0x0C */ u8 unk0c;
    /* 0x0D */ u8 unk0d;
    /* 0x0E */ u8 unk0e;
    /* 0x0F */ u8 unk0f;
    /* 0x10 */ u8 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1c;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ u8 unk2c;
    /* 0x2D */ u8 unk2d;
    /* 0x2E */ u8 unk2e;
    /* 0x30 */ f32 unk30;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3c;
};

typedef char Obj55c244LayoutCheck[sizeof(Obj55c244) == 0x40 ? 1 : -1];

#endif
