/* Forwards the three arguments to the service object's slot-6 method, installing the default service object if none is set. */
#include "common.h"

extern "C" {

struct Service;

typedef struct {
    void *slots00[6];                                              /* 0x00 */
    void (*handle)(Service *self, u32 arg1, u32 arg2, u32 arg3);    /* 0x18 */
} ServiceVtbl;

struct Service {
    const ServiceVtbl *vtbl; /* 0x00 */
};

typedef struct {
    u8 unk00[8];         /* 0x00 */
    Service *service;    /* 0x08 */
} ServiceTable;

extern ServiceTable g_systemTable;
extern Service DAT_00630424;

void serviceDispatch(u32 arg1, u32 arg2, u32 arg3)
{
    if (g_systemTable.service == NULL) {
        g_systemTable.service = &DAT_00630424;
    }
    g_systemTable.service->vtbl->handle(g_systemTable.service, arg1, arg2, arg3);
}

} /* extern "C" */
