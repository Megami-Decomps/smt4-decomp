#include "classes/Obj5596ac.h"

/* Copies the state bytes and assigns the owned vector. */
Obj5596ac &Obj5596ac::operator=(const Obj5596ac &other)
{
    active = other.active;
    kind = other.kind;
    words = other.words;
    return *this;
}
