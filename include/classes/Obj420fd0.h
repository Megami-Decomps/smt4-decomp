#ifndef CLASSES_OBJ420FD0_H
#define CLASSES_OBJ420FD0_H

#include "common.h"
#include <stddef.h>

struct LightEvent;

// Shared completion-notifier state is initialized before the concrete event binding.
class CompletionNotifierLink {
public:
    CompletionNotifierLink()
    {
        unk04 = 0;
        unk08 = 0;
        unk0c = 0;
    }
    virtual void notify() = 0;

    u32 unk04; // 0x04
    u32 unk08; // 0x08
    u32 unk0c; // 0x0c
};

// Filesystem completion notifier, identified by its single-slot retail vtable.
class Obj420fd0 : public CompletionNotifierLink {
public:
    Obj420fd0() : event(NULL) {}
    ~Obj420fd0();
    virtual void notify();

    LightEvent *event; // 0x10
};
typedef char Obj420fd0LayoutCheck[
    sizeof(Obj420fd0) == 0x14 && offsetof(Obj420fd0, unk04) == 4 &&
    offsetof(Obj420fd0, event) == 0x10 ? 1 : -1];
typedef char CompletionNotifierLinkLayoutCheck[
    sizeof(CompletionNotifierLink) == 0x10 &&
    offsetof(CompletionNotifierLink, unk04) == 4 &&
    offsetof(CompletionNotifierLink, unk0c) == 0xc ? 1 : -1];

#endif
