/* Destructor: restores the vtable, runs the base destructor, and notifies the global listener (if any) that this object's handle is gone. */
#include "common.h"

extern "C" {

struct Listener;

typedef struct {
    void *slots00[3];                                      /* 0x00 */
    void (*onRelease)(Listener *self, u32 handle);          /* 0x0c */
} ListenerVtbl;

struct Listener {
    const ListenerVtbl *vtbl; /* 0x00 */
};

typedef struct {
    u8 unk00[0x48];      /* 0x00 */
    Listener *listener;  /* 0x48 */
} ListenerTable;

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 unk04[0x38];   /* 0x04 */
    u32 handle;       /* 0x3c */
} HandleObject;

extern u8 DAT_0055afcc;
extern ListenerTable g_listenerTable;

void _ZN9Obj558be04stopEv(HandleObject *self);

HandleObject *handleObjectDtor(HandleObject *self)
{
    self->vtbl = &DAT_0055afcc;
    _ZN9Obj558be04stopEv(self);
    if (g_listenerTable.listener != NULL) {
        g_listenerTable.listener->vtbl->onRelease(g_listenerTable.listener, self->handle);
    }
    return self;
}

} /* extern "C" */
