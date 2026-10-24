#ifndef CLASSES_OBJ558CBC_H
#define CLASSES_OBJ558CBC_H

#include "classes/Obj55980c.h"
#include "classes/OnlineResult.h"

class Obj558cbc;
class Obj558cbcListener;
class Obj5594d4;

/* The 0x128-byte session object whose vtable is at 0x558650 (named after it until its real name
 * is known). Its constructor takes the slot index and the listener. */
class Obj558650 {
public:
    Obj558650(u8 slot, Obj558cbcListener *listener);
    virtual ~Obj558650();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void notify(u16 value);
    virtual void finish();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void vfunc24();
    virtual void vfunc28();
    virtual void vfunc2c();
    virtual void vfunc30();
    virtual void vfunc34();
    virtual void vfunc38();
    virtual void vfunc3c();
    virtual void vfunc40();
    virtual void vfunc44();
    virtual void vfunc48();
    virtual void vfunc4c();
    virtual void vfunc50();
    virtual void vfunc54();
    virtual void vfunc58();
    virtual void vfunc5c();
    virtual OnlineResult close();
    /* Reports the session's result to the Obj5594d4 it is being registered with. */
    virtual OnlineResult registerWith(Obj5594d4 *owner);

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x124];
};

/* A node of the registered-session list: linked in a ring around the list's sentinel node. */
struct SessionNode {
    /* 0x00 */ SessionNode *next;
    /* 0x04 */ SessionNode *prev;
    /* 0x08 */ Obj558650 *session;
};

/* The list of registered sessions: its nodes come from a small element pool (free list, then block cursor). */
struct SessionList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *freeNodes;
    /* 0x08 */ void *blockCursor;
    /* 0x0C */ void *blockEnd;
    /* 0x10 */ SessionNode *sentinel;
    /* 0x14 */ u32 count;
};

/* The 0x78-byte object whose vtable is at 0x5594d4 (named after it until its real name is
 * known): built for an Obj558cbc, it keeps a list of the sessions registered with it. */
class Obj5594d4 {
public:
    Obj5594d4(Obj558cbc *owner, u8 mode, u8 flagA, u8 flagB);
    virtual ~Obj5594d4();

    /* Asks the session for its result and appends it to the list at 0x5c. */
    void registerSession(Obj558650 *session, s32 flag);

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x58];
    /* 0x5C */ SessionList sessions;
    /* 0x74 */ u8 unk74[4];
};

typedef char Obj5594d4SizeCheck[sizeof(Obj5594d4) == 0x78 ? 1 : -1];

/* The listener's primary interface (its vtable is not named yet): slot 5 is notify. */
class Obj558cbcListenerBase {
public:
    virtual ~Obj558cbcListenerBase();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void notify(u16 value);

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x84];
};

/* The second interface of the listener, at offset 0x88, whose speed Obj558cbc's constructor sets. */
class Obj558cbcListenerPart {
public:
    virtual ~Obj558cbcListenerPart();
    virtual void partVfunc08();

    void setValue(f32 newValue);

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ f32 value;
};

/* The listener that Obj558cbc reports to. */
class Obj558cbcListener : public Obj558cbcListenerBase, public Obj558cbcListenerPart {
public:
    virtual ~Obj558cbcListener();
};

class Obj558cbc : public Obj55980c {
public:
    Obj558cbc(u8 slot, Obj558cbcListener *listener);
    virtual ~Obj558cbc();

    /* Gives the slot's connection settings the name taken from the system table. */
    void applySlotName();

    /* 0x0C */ Obj558650 *session;
    /* 0x10 */ Obj558650 *child10;
    /* 0x14 */ Obj558650 *child14;
    /* 0x18 */ Obj5594d4 *child18;
    /* 0x1C */ u8 active;
    /* 0x1D */ u8 unk1d[3];
    /* 0x20 */ Obj558cbcListener *listener;
    /* 0x24 */ u8 slot;
    /* 0x25 */ u8 unk25;
    /* 0x26 */ u16 token;
};

#endif
