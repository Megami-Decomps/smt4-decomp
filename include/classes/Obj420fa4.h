#ifndef CLASSES_OBJ420FA4_H
#define CLASSES_OBJ420FA4_H

#include "common.h"

extern "C" void ngwordStateReset(void *state);
extern "C" void registerObj8Holder(u32 *holder);

/* Text-scanner state; the first two virtual slots were stripped from retail. */
class Obj420fa4 {
public:
    Obj420fa4();
    /* Not virtual: it resets the filter state and unregisters the holder. */
    ~Obj420fa4()
    {
        ngwordStateReset(this);
        registerObj8Holder(&unk04Value);
    }
    virtual void unk00();
    virtual void unk04();
    virtual u32 vfunc08();

    /* 0x04 */ u32 unk04Value;
    /* 0x08 */ u32 unk08Value;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19;
    /* 0x1A */ u8 unk1a;
    /* 0x1B */ u8 unk1b;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u8 enabled;
};

#endif
