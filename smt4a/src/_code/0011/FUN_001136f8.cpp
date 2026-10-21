/* NON_MATCHING: stack layout only: retail packs the 88- and 20-byte buffers at sp+4/sp+92 with no 8-byte alignment and the position/size ints at sp+112/116 */
/* Builds a request from the entry's position and size, hands it to chunkStreamFlush and returns 1. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 x;
    /* 0x10 */ s32 size;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 offset;
} Entry;

typedef struct Request {
    u32 unk00[22];
} Request;

typedef struct Handle {
    u32 unk00[5];
} Handle;

extern void FUN_002ea668(Request *request);
extern void chunkStreamFlush(u32 owner, s32 *position, s32 *size, s32 flag, Request *request);
extern void strAssign(u32 target, Handle *handle, s32 length, s32 arg);

s32 FUN_001136f8(u32 owner, Entry *entry, u32 target)
{
    Request request;
    Handle handle;
    s32 position;
    s32 size;

    FUN_002ea668(&request);
    position = entry->x + entry->offset;
    size = entry->size;
    chunkStreamFlush(owner, &position, &size, 1, &request);
    strAssign(target, &handle, 0x10, -1);
    return 1;
}

}
