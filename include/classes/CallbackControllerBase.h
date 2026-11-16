#ifndef CLASSES_CALLBACKCONTROLLERBASE_H
#define CLASSES_CALLBACKCONTROLLERBASE_H

#include "classes/CallbackControllerFlags.h"

struct CallbackControllerOwner;

/* Base of the callback controllers (kinds 0, 1 and 2): the controller's kind and the owner it is
 * associated with. Its vtable slots 0/1 are the destructors (the deleting one only frees the block). */
class CallbackControllerBase : public CallbackControllerFlags {
public:
    /* Starts out unowned. */
    explicit CallbackControllerBase(s32 kind) : kind(kind), owner(NULL) {}
    virtual ~CallbackControllerBase() {}
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;

    /* 0x08 */ s32 kind;
    /* 0x0C */ CallbackControllerOwner *owner;
};

typedef char CallbackControllerBaseSizeCheck[sizeof(CallbackControllerBase) == 0x10 ? 1 : -1];

#endif
