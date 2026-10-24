/* NON_MATCHING: only the Thumb prologue: retail pushes {lr}, armcc here pushes {r4, lr}. */
#include "common.h"

class Obj5590e4 {
public:
    Obj5590e4(u8 flag);
    virtual ~Obj5590e4();
};

/* Builds the Obj5590e4 base with flag 1. */
class Obj55a564 : public Obj5590e4 {
public:
    Obj55a564();
    virtual ~Obj55a564();
};

Obj55a564::Obj55a564() : Obj5590e4(1)
{
}
