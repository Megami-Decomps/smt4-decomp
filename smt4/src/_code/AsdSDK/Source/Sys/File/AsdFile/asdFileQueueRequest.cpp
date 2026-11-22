/* NON_MATCHING: 4 lines, store scheduling only: retail stores size (+0x18) before loading the 0x80 alignment constant, this build after the lifetime address. */
#include <stdio.h>
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "AsdSDK/AsdMemAlloc.h"
#include <string.h>
#include "AsdSDK/AsdDebug.h"
#include "sys/HandleWait.h"

extern "C" {
/* The files the 1.2.0 patch replaced: they load from "patch:/". */
static const char s_patchedBtlEvent064[] = "battle/event/BtlEvent064/BtlEvent064.mbm";
static const char s_patchedE007[] = "event/e007/e007.mbm";
static const char s_patchedQuest122[] = "event/quest/quest122.mbm";

extern AsdFileGlobals g_asdFile;
extern u32 g_asdFileMutex;             /* mutex guarding the list */

void memClear(void *buf, u32 size);
s32 libc_strlen(const char *s);
char *libc_strcpy(char *dst, const char *src);

/* asdLoadFileHasDevice's body: a device prefix ends with a colon within the first eight path characters. */
static u32 pathHasDevice(const char *path)
{
    s32 length = libc_strlen(path);
    if (length > 8)
        length = 8;
    for (s32 index = 0; index < length; ++index) {
        if (path[index] == ':')
            return 1;
    }
    return 0;
}

/* Queues a load request for `path`. A path that names a device ("rom:", "patch:", ...) is used as
 * it is; otherwise the files the patch replaced come from "patch:/" and the rest from "rom:/". */
AsdFileRequest *asdFileQueueRequest(const char *path, u8 flag)
{
    AsdFileRequest *request;
    AsdFileRequest *last;

    handleWait(g_asdFileMutex, -1);

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp", 198);
    request = (AsdFileRequest *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdFileRequest), 1);
    memClear(request, sizeof(AsdFileRequest));
    if (g_asdFile.head == NULL) {
        g_asdFile.head = request;
    } else {
        last = g_asdFile.head;
        for (;;) {
            AsdFileRequest *next = last->next;
            if (next == NULL) {
                break;
            }
            last = next;
        }
        last->next = request;
        request->prev = last;
    }

    if (pathHasDevice(path)) {
        libc_strcpy(request->path, path);
    } else if (strcmp(path, s_patchedBtlEvent064) != 0 && strcmp(path, s_patchedE007) != 0 &&
               strcmp(path, s_patchedQuest122) != 0) {
        sprintf(request->path, "rom:/%s", path);
    } else {
        sprintf(request->path, "patch:/%s", path);
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

    semaphoreRelease(g_asdFileMutex, 1);
    return request;
}

} /* extern "C" */
