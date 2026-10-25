#ifndef CLASSES_OBJ558CDC_H
#define CLASSES_OBJ558CDC_H

#include "common.h"
#include <stddef.h>

// A registered task with an intrusive link and two caller-supplied values.
class Obj558cdc {
public:
    Obj558cdc(void *first, void *second);
    virtual ~Obj558cdc();

    /* 0x04 */ Obj558cdc *next;
    /* 0x08 */ Obj558cdc *previous;
    /* 0x0C */ void *first;
    /* 0x10 */ void *second;
    /* 0x14 */ u8 active;
};
struct RegisteredTaskList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj558cdc *head;
    /* 0x08 */ Obj558cdc *tail;
    /* 0x0C */ Obj558cdc *end;
    /* 0x10 */ u32 count;
};
typedef char RegisteredTaskLayoutCheck[sizeof(Obj558cdc) == 0x18 &&
    offsetof(Obj558cdc, next) == 4 && offsetof(Obj558cdc, previous) == 8 &&
    offsetof(Obj558cdc, first) == 0xc && offsetof(Obj558cdc, second) == 0x10 &&
    offsetof(Obj558cdc, active) == 0x14 && sizeof(RegisteredTaskList) == 0x14 ? 1 : -1];

#endif
