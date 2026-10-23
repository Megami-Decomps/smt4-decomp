/* NON_MATCHING: filename buffers start eight bytes later; flags/name addressing and saved path register differ. */
#include "gfx/VersionedTextureRequest.h"

extern "C" {
void asdLoadFileAsyncSimple(const char *, const char **, u32);
void textFormatBuffer(char *, const char *, ...);
char *libc_strcpy(char *, const char *);
void asdMemFree(const void *);
void memClear(void *, u32);
s32 keyedRecordFindByName(const char *);
char *FUN_002522e0(char *, s32);
extern const char DAT_004008c4[];

// Replace the pending effect request, reusing a cached effect when its filename is known.
u32 FUN_003db258(VersionedTextureOwner *owner, const char *effect)
{
    owner->flags &= ~0x30000;
    VersionedTextureRequest *request = &owner->request;
    request->id = 0xff;
    memClear(request->name, sizeof(request->name));
    if (request->format) {
        asdMemFree(request->format);
        request->format = NULL;
    }
    request->flags = 0;
    char path[64] = {0};
    char formatted[128];
    memClear(formatted, 0x80);
    textFormatBuffer(formatted, DAT_004008c4, effect);
    libc_strcpy(path, formatted);
    char *basename = FUN_002522e0(path, '/');
    libc_strcpy(request->name, basename + 1);
    if (keyedRecordFindByName(request->name) == 0xff) {
        asdLoadFileAsyncSimple(path, &request->format, 0);
        request->flags |= 1;
    }
    return 1;
}
}
