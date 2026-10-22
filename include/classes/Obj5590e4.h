#ifndef CLASSES_OBJ5590E4_H
#define CLASSES_OBJ5590E4_H

#include "common.h"

/* Abstract work item carrying a byte-sized kind and two counters. */
class Obj5590e4 {
public:
    Obj5590e4(u8 kind);
    virtual ~Obj5590e4();
    virtual void run() = 0;
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 count;
    /* 0x10 */ u8 kind;
};

#endif
