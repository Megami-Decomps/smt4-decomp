#ifndef CLASSES_OBJBASE3C2EF0_H
#define CLASSES_OBJBASE3C2EF0_H

#include "classes/Obj422594.h"

/* The abstract layer between Obj422594 and the windows with vtables at 0x4221a4 and 0x4223ac: the
 * only slot both share is vfunc0c (_ZN13ObjBase3c2ef07vfunc0cEv), which asks the screen to do something with the
 * window's rectangle. The other methods are the windows' own. */
class ObjBase3c2ef0 : public Obj422594 {
public:
    virtual void vfunc08(void *param) = 0;
    virtual bool vfunc0c();
    virtual void vfunc10(u32 arg) = 0;
    virtual void vfunc14() = 0;
    virtual void vfunc18() = 0;
    virtual void vfunc1c() = 0;
};

#endif
