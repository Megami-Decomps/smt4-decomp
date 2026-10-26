#include "common.h"

extern "C" {

class RequestObject { public: virtual void unused(); virtual void release(); };
struct MapRequest { u8 active; u8 unk01[0x1b]; RequestObject *object; };
struct MapInterface { u8 unk0000[0xcbdc]; MapRequest request; };
extern MapInterface *g_mapIf;

void mapIfReleaseHandle(void)
{
    MapRequest *request = &g_mapIf->request;
    if (request->object != NULL) {
        request->object->release();
        request->object = NULL;
    }
    request->active = 0;
}

} /* extern "C" */
