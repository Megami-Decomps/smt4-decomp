#include "common.h"

/* Stores the caller's value. */
extern "C" void valueStore(u32 *destination, u32 value)
{
    *destination = value;
}
