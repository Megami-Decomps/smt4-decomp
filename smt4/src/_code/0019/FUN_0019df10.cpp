#include "common.h"

extern "C" {

/* Reads the word pointed to by the pointer stored just before `obj`. */
u32 FUN_0019df10(u32 **obj)
{
    return *obj[-1];
}

} /* extern "C" */
