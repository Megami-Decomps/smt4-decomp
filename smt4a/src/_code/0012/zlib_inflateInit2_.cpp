#include "common.h"

extern "C" {

#define Z_STREAM_ERROR  (-2)
#define Z_MEM_ERROR     (-4)
#define Z_VERSION_ERROR (-6)
#define Z_STREAM_SIZE   56

typedef void *(*ZAlloc)(void *opaque, u32 items, u32 size);
typedef void (*ZFree)(void *opaque, void *address);

typedef struct InflateState {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ void *window;
} InflateState;

/* zlib's z_stream (56 bytes). */
typedef struct ZStream {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ const char *msg;
    /* 0x1C */ InflateState *state;
    /* 0x20 */ ZAlloc zalloc;
    /* 0x24 */ ZFree zfree;
    /* 0x28 */ void *opaque;
    /* 0x2C */ u8 unk2C[0xC];
} ZStream;

/* Default allocator and free callbacks (local Thumb functions, addresses with the Thumb bit set). */
#define Z_DEFAULT_ALLOC ((ZAlloc)0x001289e1)
#define Z_DEFAULT_FREE ((ZFree)0x001289ed)

int FUN_00128648(ZStream *strm, int windowBits);

/* zlib inflateInit2_: validates the version ("1...") and stream size, installs default allocators, allocates the 0x1bcc-byte inflate state and resets the stream. */
int zlib_inflateInit2_(ZStream *strm, int windowBits, const char *version, int streamSize)
{
    InflateState *state;
    int ret;

    if (version == NULL || version[0] != '1' || streamSize != Z_STREAM_SIZE) {
        return Z_VERSION_ERROR;
    }
    if (strm == NULL) {
        return Z_STREAM_ERROR;
    }
    strm->msg = NULL;
    if (strm->zalloc == NULL) {
        strm->opaque = NULL;
        strm->zalloc = Z_DEFAULT_ALLOC;
    }
    if (strm->zfree == NULL) {
        strm->zfree = Z_DEFAULT_FREE;
    }
    state = (InflateState *)strm->zalloc(strm->opaque, 1, 0x1bcc);
    if (state == NULL) {
        return Z_MEM_ERROR;
    }
    strm->state = state;
    state->window = NULL;
    ret = FUN_00128648(strm, windowBits);
    if (ret != 0) {
        strm->zfree(strm->opaque, state);
        strm->state = NULL;
    }
    return ret;
}

} /* extern "C" */
