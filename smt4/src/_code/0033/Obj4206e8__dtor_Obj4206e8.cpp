#include "classes/Obj4206e8.h"

/* Destroys the object: releases each slot's handle and buffer, then its own handle. */
Obj4206e8::~Obj4206e8()
{
    release();
}
