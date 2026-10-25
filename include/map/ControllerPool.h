/* The pool of map controllers (Apocalypse): up to 16 live controllers of two classes. */
#ifndef MAP_CONTROLLERPOOL_H
#define MAP_CONTROLLERPOOL_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct ControllerChild;
struct ControllerChildVtable {
    void *unk00[2];
    void (*start)(ControllerChild *child); /* +0x08 */
};
struct ControllerChild {
    const ControllerChildVtable *vtable;
};

struct Controller;
struct ControllerVtable {
    union {
        void *unk00[2];
        struct {
            void *unk00;
            void (*release)(Controller *controller); /* +0x04 */
        } lifetime;
    };
    void (*start)(Controller *controller); /* +0x08 */
};
struct ControllerLifecycleVtable : ControllerVtable {
    void (*update)(Controller *controller); /* +0x0C */
};
struct Controller {
    /* 0x00 */ const ControllerVtable *vtable;
    union {
        /* 0x04 */ u8 unk04[0x1c];
        struct {
            /* 0x04 */ u32 unk04;
            /* 0x08 */ s32 kind;
            /* 0x0C */ u8 flags;
            /* 0x0D */ u8 unk0D[0x13];
        } lifecycle;
    };
    /* 0x20 */ s32 sourceValue;
    /* 0x24 */ u8 unk24[0x40];
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u8 unk68[0xc];
    /* 0x74 */ ControllerChild *child;
};

/* The pool of live controllers: up to 16 in use, 4 of them of the first kind. */
struct ControllerPool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 filterKind;
    /* 0x08 */ s32 filterSub;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 count;
    /* 0x14 */ s32 firstKindCount;
    /* 0x18 */ Controller *slots[32];
    /* 0x98 */ u8 unk98[4];
    /* 0x9C */ s32 context;
};

typedef char ControllerSlotsOffsetCheck[offsetof(ControllerPool, slots) == 0x18 ? 1 : -1];
typedef char ControllerContextOffsetCheck[offsetof(ControllerPool, context) == 0x9C ? 1 : -1];
typedef char ControllerChildOffsetCheck[offsetof(Controller, child) == 0x74 && sizeof(Controller) == 0x78 ? 1 : -1];
typedef char ControllerLifecycleLayoutCheck[sizeof(ControllerVtable) == 0xc &&
    offsetof(ControllerVtable, lifetime.release) == 4 &&
    offsetof(ControllerLifecycleVtable, update) == 0xc &&
    offsetof(Controller, lifecycle.kind) == 8 && offsetof(Controller, lifecycle.flags) == 0xc &&
    sizeof(ControllerPool) == 0xa0 ? 1 : -1];


/* The two controller classes this pool creates (0xa4 and 0xbc bytes); both begin with a Controller. */
class ControllerFirstKind : public Controller {
public:
    ControllerFirstKind();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    u8 unk78[0xa4 - 0x78];
};
class ControllerSecondKind : public Controller {
public:
    ControllerSecondKind();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    u8 unk78[0xbc - 0x78];
};

#endif
