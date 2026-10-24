#ifndef CLASSES_OBJ559608_H
#define CLASSES_OBJ559608_H

#include "common.h"

class Obj559608;

/* The online object list: a node is appended on construction and unlinked on destruction. */
struct OnlineObjectList;

/* The online system's global state; only the object list pointer is known. */
struct OnlineRegistry {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ OnlineObjectList *objects;
};

extern OnlineRegistry g_onlineRegistry;

extern "C" void onlineObjectListAdd(OnlineObjectList *list, Obj559608 *object);
extern "C" void onlineObjectListUnlink(OnlineObjectList *list, Obj559608 *object);

/* Neighbour pointers of a list node; both start empty. */
struct OnlineObjectLink {
    OnlineObjectLink() : next(NULL), previous(NULL) {}
    /* 0x00 */ Obj559608 *next;
    /* 0x04 */ Obj559608 *previous;
};

/* Base of the online objects (vtable 0x559608). It joins the online object list while it lives. */
class Obj559608 {
public:
    Obj559608();
    virtual ~Obj559608();
    /* 0x04 */ OnlineObjectLink link;
};

typedef char Obj559608SizeCheck[sizeof(Obj559608) == 0xC ? 1 : -1];

#endif
