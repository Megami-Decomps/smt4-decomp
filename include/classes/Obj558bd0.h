#ifndef CLASSES_OBJ558BD0_H
#define CLASSES_OBJ558BD0_H

#include "common.h"
#include "shard/W4_Match4_Obj559ecc.h"
#include "classes/OnlineTimestamp.h"

/* The profiling counter whose vtable is at 0x558bd0 (named after it until its real name is known):
 * it accumulates the microseconds spent in a section and prints them when it is destroyed.
 * Slots 0 and 1 are the destructors. */
class Obj558bd0 {
public:
    virtual ~Obj558bd0();

    /* Prints the total, the share of the time since startTime, the call count and the
     * minimum, maximum, average and last times. */
    void printProfile();

    /* The number of times the section ran (an out-of-line getter: armlink inlined it at its callers). */
    u32 getCount() const;

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ u64 totalUsec;
    /* 0x20 */ u64 minUsec;
    /* 0x28 */ u64 maxUsec;
    /* 0x30 */ u64 lastUsec;
    /* 0x38 */ OnlineTimestamp startTime;
    /* 0x40 */ u32 count;
    /* 0x44 */ u8 unk44[4];
    /* 0x48 */ Obj55aff4 first;
    /* 0x50 */ u8 active;
    /* 0x51 */ u8 unk51[0x0f];
    /* 0x60 */ Obj55aff4 second;
    /* 0x68 */ Obj55aff4 third;
};

#endif
