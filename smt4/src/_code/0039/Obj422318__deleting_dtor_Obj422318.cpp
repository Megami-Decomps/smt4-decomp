/* NON_MATCHING: same statements; retail loads the child into r1 and the vtable address into r2 first and calls through r0/r2 with a mov r0, r1; armcc keeps the child in r0 here. */
#include "classes/Obj422318.h"

/* The child as the deleting destructor sees it: slot 1 destroys it. */
class Obj422318ChildCall {
public:
    virtual void vfunc00();
    virtual void destroy();
};

extern "C" {

/* The deleting destructor of Obj422318 itself: armcc only emits it together with the inline
 * destructor, so it stays in C form. */
void _ZN9Obj422318D0Ev(Obj422318 *self);

extern u8 _ZTV9Obj422318[];

}

/* Deletes the child, releases the model-manager handle and frees the object. */
void _ZN9Obj422318D0Ev(Obj422318 *self)
{
    *(const void **)self = _ZTV9Obj422318 + 8;
    if (self->child != NULL) {
        ((Obj422318ChildCall *)self->child)->destroy();
        self->child = NULL;
    }
    if (self->handle != 0) {
        asdMdlManagerMarkDestroy(self->handle);
        asdMdlManagerDestroy(reinterpret_cast<AsdMdlObject *>(self->handle));
        self->handle = 0;
    }
    asdMemFreeNonNull(self);
}
