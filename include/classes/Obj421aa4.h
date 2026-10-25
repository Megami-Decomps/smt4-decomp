#ifndef CLASSES_OBJ421AA4_H
#define CLASSES_OBJ421AA4_H

#include "common.h"
#include <stddef.h>

/* A node of the sound manager's request list. */
struct Obj421aa4Node {
    union {
        /* 0x00 */ u8 unk00[4];
        /* 0x00 */ Obj421aa4Node *next;
    };
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 unk05[3];
    struct {
        /* 0x08 */ u32 sequence;
    } completion;
    /* 0x0C */ u32 stamp;
    /* 0x10 */ u32 id;
    /* 0x14 */ void *arg;
};

/* The sound manager: a request list and a running stamp at +0x184. */
struct Obj421aa4Manager {
    union {
        /* 0x000 */ u8 unk000[0x184];
        struct {
            u8 unk000[0x16c];
            /* 0x16C */ Obj421aa4Node *head;
            /* 0x170 */ Obj421aa4Node *tail;
            /* 0x174 */ u32 nextSequence;
            u8 unk178[0xc];
        } pending;
    };
    /* 0x184 */ u32 unk184;
    /* 0x188 */ u32 stamp;
};
typedef char Obj421aa4CommandLayoutCheck[sizeof(Obj421aa4Node) == 0x18 &&
    offsetof(Obj421aa4Node, type) == 4 && offsetof(Obj421aa4Node, completion.sequence) == 8 &&
    offsetof(Obj421aa4Node, stamp) == 0xc && sizeof(Obj421aa4Manager) == 0x18c &&
    offsetof(Obj421aa4Manager, pending.head) == 0x16c &&
    offsetof(Obj421aa4Manager, pending.tail) == 0x170 &&
    offsetof(Obj421aa4Manager, pending.nextSequence) == 0x174 ? 1 : -1];

/* A sound object (vtable at 0x421aa4, named after it until its real name is known): slot 0 sets it
 * up and announces it to the sound manager, slot 1 shuts it down. */
class Obj421aa4 {
public:
    virtual void init();       /* +0x00 */
    virtual void shutdown();   /* +0x04 */
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual bool vfunc18();
    virtual void vfunc1c();
    virtual u32 vfunc20();     /* the id the manager is told about */
    virtual void updateParameters(); /* +0x24 */

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04[6];
    /* 0x1C */ u32 unk1c[5];
    /* 0x30 */ f32 unk30[2];       /* 1.0 */
    /* 0x38 */ f32 unk38[5];       /* 0.0 */
    /* 0x4C */ u32 unk4c[3];
    /* 0x58 */ f32 unk58[2];       /* 1.0 */
    /* 0x60 */ f32 unk60;          /* 0.0 */
    /* 0x64 */ f32 unk64[2];       /* 1.0 */
    /* 0x6C */ u32 unk6c[2];
    /* 0x74 */ f32 unk74[2];       /* 1.0 */
    /* 0x7C */ u32 unk7c[2];
    /* 0x84 */ u8 active;
    /* 0x85 */ u8 unk85[5];
    /* 0x8A */ u8 unk8a[3];
    /* 0x8D */ u8 unk8d[3];
    /* 0x90 */ u32 unk90[2];
    /* 0x98 */ u8 unk98;
    /* 0x99 */ u8 unk99;
    /* 0x9A */ u8 unk9a[2];
    /* 0x9C */ s32 unk9c;          /* -1 */
    /* 0xA0 */ f32 unka0[2];       /* 1.0 */
    /* 0xA8 */ u32 unka8[2];
    /* 0xB0 */ f32 unkb0;          /* 1.0 */
    /* 0xB4 */ f32 unkb4;          /* 0.0 */
    /* 0xB8 */ f32 unkb8;          /* 1.0 */
    /* 0xBC */ f32 unkbc[6];       /* 0.0 */
};

#endif
