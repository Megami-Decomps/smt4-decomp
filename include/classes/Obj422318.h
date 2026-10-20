#ifndef CLASSES_OBJ422318_H
#define CLASSES_OBJ422318_H

#include "common.h"

extern "C" {
int asdMemFreeNonNull(void *block);
int asdMdlManagerMarkDestroy(u32 handle);
int asdMdlManagerDestroy(u32 handle);
}

/* The child an Obj422318 deletes on destruction. */
class Obj422318Child {
public:
    virtual ~Obj422318Child();
};

/* The base of the objects with vtables at 0x4222ac and 0x42233c (named after its own vtable,
 * 0x422318, until its real name is known): a child object and a model-manager handle released on
 * destruction. */
class Obj422318 {
public:
    /* Deletes the child, then marks the handle for destruction and destroys it. */
    virtual ~Obj422318()
    {
        if (child != NULL) {
            delete child;
            child = NULL;
        }
        if (handle != 0) {
            asdMdlManagerMarkDestroy(handle);
            asdMdlManagerDestroy(handle);
            handle = 0;
        }
    }
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

/* public: the base's own deleting destructor (_ZN9Obj422318D0Ev) is still C form and reaches the fields. */
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x64];
    /* 0x68 */ Obj422318Child *child;
    /* 0x6C */ u32 handle;
};

#endif
