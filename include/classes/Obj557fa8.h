#ifndef CLASSES_OBJ557FA8_H
#define CLASSES_OBJ557FA8_H

#include "common.h"
#include "classes/MobiclipAudioDecoder.h"

/* The audio decoder of kind 0 (vtable at 0x557fa8, named after it until its real name is known):
 * it holds a handle object at +4 that its destructor releases. The deleting destructor and the
 * other slots live elsewhere. */
class Obj557fa8 : public MobiclipAudioDecoder {
public:
    Obj557fa8() : handle(NULL) {}
    virtual ~Obj557fa8();
    virtual void initialize(u32 first, u32 second);   /* +0x08 */
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void *vfunc18();   /* returns the handle object */

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *handle;
};

#endif
