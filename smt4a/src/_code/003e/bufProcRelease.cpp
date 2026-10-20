#include "shard/Shard003E.h"

extern "C" {

typedef struct BufProc {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *buffer;
    /* 0x08 */ u32 scriptProcess;
} BufProc;

extern void asdMemFree(void *ptr);
extern void scrScriptProcessDestroy(u32 process);

/* Releases the buffer (+4) and the script process (+8) and returns the object. */
BufProc *bufProcRelease(BufProc *obj)
{
    if (obj->buffer != NULL) {
        asdMemFree(obj->buffer);
        obj->buffer = NULL;
    }
    if (obj->scriptProcess != 0) {
        scrScriptProcessDestroy(obj->scriptProcess);
        obj->scriptProcess = 0;
    }
    return obj;
}

} /* extern "C" */
