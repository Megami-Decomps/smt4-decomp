#ifndef CLASSES_OBJ55933C_H
#define CLASSES_OBJ55933C_H

#include "common.h"

/* Polymorphic object carrying one halfword value. */
class Obj55933c {
public:
    Obj55933c(u16 value);
    virtual void unk00();
    /* 0x04 */ u16 value;
};

#endif
