#include "common.h"
#include "nn/Result.h"

extern "C" {

/* The words a freshly built stream is initialized from (vtable pointer, the virtual base's
 * pointer at 0x20 and a second word at 0x24; same layout as saveMediaReadBuffer). */
typedef struct StreamTemplate {
    /* 0x00 */ u32 *vtable;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 virtualBase;
    /* 0x24 */ u32 second;
} StreamTemplate;

struct LocalStream;

extern StreamTemplate DAT_00420b20;

nn::Result romFileStreamOpen(LocalStream *stream, u32 name, u32 mode);
nn::Result archiveStreamOpenConverted(LocalStream *stream, u32 name, u32 mode);
nn::Result romFileOpenForWrite(LocalStream *stream, u32 name, u32 mode);
nn::Result requestSubmitRecordById(LocalStream *stream, u32 name, u32 mode);
u32 fileOwnerCloseA(LocalStream *stream);
u32 fileOwnerCloseB(LocalStream *stream);
u32 fileOwnerCloseC(LocalStream *stream);
u32 fileOwnerCloseD(LocalStream *stream);
void fileHandleClose(LocalStream *stream, u32 flags); // declcheck: local (the stream's close passes a second word, 0, that the shared one-argument prototype drops)

} /* extern "C" */

/* A stream object on the stack with RAII close and virtual-base vtable setup. */
struct LocalStream {
    /* 0x00 */ u32 words[2];
    /* 0x08 */ u32 owner[5];

    LocalStream()
    {
        owner[0] = 0;
        owner[1] = 0;
        owner[2] = 0;
        owner[3] = 0;
        owner[4] = 0;
        words[0] = (u32)DAT_00420b20.vtable;
        *(u32 *)((u8 *)this + ((s32 *)words[0])[-12]) = DAT_00420b20.virtualBase;
        words[1] = DAT_00420b20.second;
    }

    ~LocalStream()
    {
        fileHandleClose(this, 0);
    }

    nn::Result open(s32 kind, u32 name, u32 mode)
    {
        nn::Result result;
        switch (kind) {
        case 0:
            result = romFileStreamOpen(this, name, mode);
            break;
        case 1:
            result = archiveStreamOpenConverted(this, name, mode);
            break;
        case 2:
            result = romFileOpenForWrite(this, name, mode);
            break;
        case 3:
            result = requestSubmitRecordById(this, name, mode);
            break;
        }
        return result;
    }

    void close(s32 kind)
    {
        switch (kind) {
        case 0:
            fileOwnerCloseC(this);
            break;
        case 1:
            fileOwnerCloseB(this);
            break;
        case 2:
            fileOwnerCloseA(this);
            break;
        case 3:
            fileOwnerCloseD(this);
            break;
        }
    }
};

/* Opens and immediately closes a save-media stream of `kind` (0-3) to test whether `name` exists. */
extern "C" u32 FUN_002d5e44(s32 kind, u32 name)
{
    LocalStream stream;
    nn::Result result = stream.open(kind, name, 2);
    if (!nnResultIsSuccess(result)) {
        return 0;
    }
    stream.close(kind);
    return 1;
}
