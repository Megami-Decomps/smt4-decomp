/* zlib deflateEnd: frees the deflate state's buffers and the state itself; Z_DATA_ERROR (-3) if the stream was still busy. */
#include "common.h"

extern "C" {

#define Z_OK 0
#define Z_DATA_ERROR (-3)
#define Z_STREAM_ERROR (-2)

#define INIT_STATE 42
#define EXTRA_STATE 69
#define NAME_STATE 73
#define COMMENT_STATE 91
#define HCRC_STATE 103
#define BUSY_STATE 113
#define FINISH_STATE 666

struct z_stream_s;

typedef void (*free_func)(void *opaque, void *address);

typedef struct deflate_state {
    /* 0x00 */ struct z_stream_s *strm;
    /* 0x04 */ s32 status;
    /* 0x08 */ void *pending_buf;
    /* 0x0C */ u8 unk0C[0x2C];
    /* 0x38 */ void *window;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ void *prev;
    /* 0x44 */ void *head;
} deflate_state;

typedef struct z_stream_s {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ deflate_state *state;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ free_func zfree;
    /* 0x28 */ void *opaque;
} z_stream;

#define TRY_FREE(strm, p) \
    do { \
        if (p) { \
            (strm)->zfree((strm)->opaque, (p)); \
        } \
    } while (0)

s32 deflateEnd(z_stream *strm)
{
    s32 status;

    if (strm == NULL || strm->state == NULL) {
        return Z_STREAM_ERROR;
    }
    status = strm->state->status;
    if (status != INIT_STATE && status != EXTRA_STATE && status != NAME_STATE && status != COMMENT_STATE
        && status != HCRC_STATE && status != BUSY_STATE && status != FINISH_STATE) {
        return Z_STREAM_ERROR;
    }
    TRY_FREE(strm, strm->state->pending_buf);
    TRY_FREE(strm, strm->state->head);
    TRY_FREE(strm, strm->state->prev);
    TRY_FREE(strm, strm->state->window);
    strm->zfree(strm->opaque, strm->state);
    strm->state = NULL;
    if (status != BUSY_STATE) {
        return Z_OK;
    }
    return Z_DATA_ERROR;
}

}
