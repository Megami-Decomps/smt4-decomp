/* mobiclip_ctrl/helper_S4FsReader: the Mobiclip movie file reader. A worker thread streams the
 * movie from its source into a 256 KiB ring buffer that the player drains. */
#ifndef MOBICLIP_CTRL_S4FSREADER_H
#define MOBICLIP_CTRL_S4FSREADER_H

#include "common.h"

/* The allocator the Mobiclip player is given (slots 0 and 1, no destructor). */
class S4Allocator {
public:
    virtual void *allocate(u32 size, u32 alignment) = 0;
    virtual void release(void *block) = 0;
};

/* The file source the reader pulls from (a file or an in-memory stream). Only the slots the
 * reader uses are named. */
class S4StreamSource {
public:
    virtual ~S4StreamSource();
    virtual void unk08() = 0;
    /* Moves the source's read position to `position`; `whence` 0 is from the start. */
    virtual void seek(s64 position, s32 whence) = 0;
    virtual void unk10() = 0;
    virtual void unk14() = 0;
    virtual void unk18() = 0;
    virtual void unk1C() = 0;
    virtual void unk20() = 0;
    /* The number of bytes the source holds. */
    virtual u32 getSize() = 0;
    virtual void unk28() = 0;
    /* Reads `size` bytes at `buffer`; returns the bytes read. */
    virtual u32 read(void *buffer, u32 size) = 0;
};

#define S4_FS_READER_RING_SIZE 0x40000   /* bytes in the ring buffer */
#define S4_FS_READER_CHUNK_SIZE 0x10000  /* most the thread reads in one go */

struct S4FsReader {
    /* 0x00 */ volatile s64 consumed;               /* bytes the player has drained */
    /* 0x08 */ volatile s64 produced;               /* bytes read from the source so far */
    /* 0x10 */ s64 limit;                  /* the position the source ends at */
    /* 0x18 */ s64 requested;              /* the position the player has asked for */
    /* 0x20 */ u8 *ring;                   /* the ring buffer */
    /* 0x24 */ u8 *scratch;                /* contiguous copy of a block that wraps the ring */
    /* 0x28 */ u32 scratchSize;            /* bytes the scratch block holds */
    /* 0x2C */ u32 chunkSize;              /* most that is handed out in one go */
    /* 0x30 */ u32 threadHandle;           /* the reader thread (nn::os::Thread: handle, joined flag) */
    /* 0x34 */ u8 threadJoined;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ S4StreamSource *source;
    /* 0x3C */ S4Allocator *allocator;
    /* 0x40 */ u8 lock[0xc];               /* nn::os::CriticalSection guarding the positions */
    /* 0x4C */ u32 dataEvent;              /* signaled to ask the thread for more data */
    /* 0x50 */ u32 stopEvent;              /* signaled to stop the thread */
    /* 0x54 */ u32 wakeup[2];              /* handles the thread waits on (data requested / stop) */
};

#endif
