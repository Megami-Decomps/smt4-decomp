#ifndef CLASSES_OBJ558330_H
#define CLASSES_OBJ558330_H

#include "common.h"

/* A CEC message box wrapper (vtable at 0x558330; named after it until its real name is known):
 * an inbox and outbox index with a message buffer, laid out as nn::cec::CTR::MessageBox is. */
class Obj558330 {
public:
    Obj558330(u32 deferred);
    virtual ~Obj558330();
    virtual void vfunc08();
    virtual void vfunc0c();

    /* 0x004 */ u32 id;
    /* 0x008 */ u8 open;
    /* 0x009 */ u8 fallback;
    /* 0x00A */ u8 unk0a;
    /* 0x00B */ u8 unk0b;
    /* 0x00C */ u8 unk0c[0x1f0];
    /* 0x1FC */ u16 inboxSignature;
    /* 0x1FE */ u8 unk1fe[0x1ae];
    /* 0x3AC */ u16 outboxSignature;
    /* 0x3AE */ u8 unk3ae[0x1ae];
    /* 0x55C */ u16 messageSignature;
    /* 0x55E */ u8 unk55e[0x31e];
    /* 0x87C */ u32 words[16];
};

typedef char Obj558330SizeCheck[sizeof(Obj558330) == 0x8bc ? 1 : -1];

#endif
