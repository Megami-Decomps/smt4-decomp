/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the request allocation. */
#include "AsdSDK/Source/Sys/File/AsdFile.h"

extern "C" {
extern AsdFileGlobals g_asdFile;
extern u32 g_asdFileMutex;             /* mutex guarding the list */

s32 FUN_002c40f8(s32 *index, u32 *handles, s32 count, s32 waitAll, s64 timeout);
s32 FUN_002c5254(s32 *out, u32 handle);
void FUN_002c526c(void);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void memClear(void *buf, u32 size);
s32 libc_strlen(const char *s);
s32 libc_strcmp(const char *a, const char *b);
char *libc_strcpy(char *dst, const char *src);
s32 FUN_002be624(char *dst, const char *format, ...);

/* Queues a load request for `path`. A path that names a device ("rom:", "patch:", ...) is used as
 * it is; otherwise the files the patch replaced come from "patch:/" and the rest from "rom:/". */
AsdFileRequest *asdFileQueueRequest(const char *path, u8 flag)
{
    s32 index;
    u32 handle;
    AsdFileRequest *request;
    AsdFileRequest *last;
    s32 len;
    s32 i;
    s32 hasDevice;

    handle = g_asdFileMutex;
    if (((u32)FUN_002c40f8(&index, &handle, 1, 0, -1) >> 31) != 0) {
        FUN_002c526c();
    }

    request = (AsdFileRequest *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdFileRequest), 1);
    memClear(request, sizeof(AsdFileRequest));
    if (g_asdFile.head == NULL) {
        g_asdFile.head = request;
    } else {
        last = g_asdFile.head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = request;
        request->prev = last;
    }

    len = libc_strlen(path);
    if (len > 8) {
        len = 8;
    }
    hasDevice = 0;
    for (i = 0; i < len; i++) {
        if (path[i] == ':') {
            hasDevice = 1;
            break;
        }
    }
    if (hasDevice) {
        libc_strcpy(request->path, path);
    } else if (libc_strcmp(path, "battle/event/BtlEvent064/BtlEvent064.mbm") == 0 ||
               libc_strcmp(path, "event/e007/e007.mbm") == 0 ||
               libc_strcmp(path, "event/quest/quest122.mbm") == 0) {
        FUN_002be624(request->path, "patch:/%s", path);
    } else {
        FUN_002be624(request->path, "rom:/%s", path);
    }

    request->state = ASD_FILE_QUEUED;
    request->flag = flag;
    request->buffer = NULL;
    request->userBuffer = 0;
    request->unk14 = 0;
    request->size = 0;
    request->alignment = 0x80;
    request->stream = NULL;
    request->lifetime = 1;
    request->lifetimeStep = 0;

    handle = g_asdFileMutex;
    if (((u32)FUN_002c5254(&index, handle) >> 31) != 0) {
        FUN_002c526c();
    }
    return request;
}

} /* extern "C" */
