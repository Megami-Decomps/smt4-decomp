/* NON_MATCHING: 26 lines. Retail copies the device into r5 and the request's address (sp) into r6 under the null
 * test (movne) and keeps a 16-byte frame, which a pointer variable to the request and a second device variable
 * reproduce (6 lines), but those are only register steering; the wave 77 review removed them. */
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
u32 archiveDeviceSendPathRequest(const u16 *path)
{
    ArchiveDevice *device = FUN_00197c78(path);
    u32 result;

    if (device == NULL) {
        result = 0xc8804465;
    } else {
        ArchiveRequest request;
        while (*path++ != ':') {
        }
        request.kind = 4;
        request.path = path;
        request.size = (wstrlenU16(path) + 1) * 2;
        result = device->control(&request);
    }
    return result;
}

} /* extern "C" */
