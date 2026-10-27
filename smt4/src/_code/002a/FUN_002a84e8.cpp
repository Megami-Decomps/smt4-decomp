/* NON_MATCHING: retail materialises the request pointer after the device (movne r6,sp after movne r5,r0) and keeps the constant 4 in r1 for the stm; the null test itself now matches. */
#include "common.h"

extern "C" {

int wstrlenU16(const u16 *s);

/* A mounted archive device; slot 2 services control requests. */
class ArchiveDevice {
public:
    virtual void unk00();
    virtual void unk04();
    virtual u32 control(void *request);
};

struct ArchiveRequest {
    u32 kind;
    const u16 *path;
    u32 size;
};

ArchiveDevice *FUN_002b5a5c(const u16 *path);

/* Sends the path part after the "device:" prefix to the device named in `path`. */
u32 FUN_002a84e8(const u16 *path)
{
    ArchiveDevice *found = FUN_002b5a5c(path);
    u32 result;

    if (found == NULL) {
        result = 0xc8804465;
    } else {
        ArchiveRequest request;
        ArchiveRequest *req = &request;
        ArchiveDevice *device = found;
        while (*path++ != ':') {
        }
        req->kind = 4;
        req->path = path;
        req->size = (wstrlenU16(path) + 1) * 2;
        result = device->control(req);
    }
    return result;
}

} /* extern "C" */
