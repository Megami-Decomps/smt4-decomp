/* NON_MATCHING: retail tests the lookup with `cmp r0, #0` and copies it to r5 only on the non-null path (movne r5, r0); built uses movs r5, r0, and keeps the constant 4 in r0 instead of r1 */
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

ArchiveDevice *FUN_00197c78(const u16 *path);

/* Sends the path part after the "device:" prefix to the device named in `path`. */
u32 FUN_00188444(const u16 *path)
{
    ArchiveDevice *device = FUN_00197c78(path);
    u32 result;

    if (device == NULL) {
        result = 0xc8804465;
    } else {
        ArchiveRequest request;
        ArchiveRequest *req = &request;
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
