/* NON_MATCHING: the request-id store uses a different register and the basename lookup's two arguments are prepared in reverse order. */
#include "runtime/Stdio.h"
#include "gfx/VersionedTextureRequest.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
char *libc_strcpy(char *, const char *);
void asdMemFree(const void *);
void memClear(void *, u32);
s32 keyedRecordFindByName(const char *);
const u8 *libc_strrchr(const u8 *, u32);
extern const char DAT_004008c4[];

/* Twin of fileNameFromPath in smt4 FUN_003dbb40 and smt4a effectRequestByName. */
static __inline const char *fileNameFromPath(const char *path)
{
    const u8 *separator = libc_strrchr((const u8 *)path, '/');
    return (const char *)(separator + 1);
}

/* Replace the pending effect request, reusing a cached effect when its filename is known. */
u32 effectRequestByName(VersionedTextureOwner *owner, const char *effect)
{
    owner->flags &= ~0x10000;
    owner->flags &= ~0x20000;
    VersionedTextureRequest *request = &owner->request;
    request->id = 0xff;
    memClear(owner->request.name, sizeof(request->name));
    if (request->format) {
        asdMemFree(request->format);
        request->format = NULL;
    }
    request->flags = 0;
    char path[64] = {0};
    char formatted[128];
    memClear(formatted, 0x80);
    __2sprintf(formatted, DAT_004008c4, effect);
    libc_strcpy(path, formatted);
    char *fullPath = path;
    libc_strcpy(request->name, fileNameFromPath(fullPath));
    if (keyedRecordFindByName(request->name) == 0xff) {
        asdLoadFileAsyncSimple(fullPath, (u32 *)&request->format, 0);
        request->flags |= 1;
    }
    return 1;
}
}
