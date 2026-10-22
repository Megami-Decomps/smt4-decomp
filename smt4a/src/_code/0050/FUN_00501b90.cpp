/* NON_MATCHING: fixed-header read behavior is recovered; two outgoing-argument moves are reversed and the empty-read result path has one extra branch. */
#include "common.h"

struct HeaderReadInterface;

struct HeaderReadVtable {
    /* 0x00 */ void *unk00[13];
    /* 0x34 */ u32 (*read)(HeaderReadInterface *self, void *buffer, u32 capacity,
                         u32 *bytesRead, u32 handle, u32 mode, u32 kind);
};

struct HeaderReadInterface {
    /* 0x00 */ HeaderReadVtable *vtable;
};

extern "C" void sysMemClear(void *buffer, u32 size);

// Read a fixed-size header and reject an otherwise successful empty read.
extern "C" u32 FUN_00501b90(HeaderReadInterface *reader, void *buffer, u32 handle)
{
    if (handle == 0)
        return 0xe0e10bfd;
    u32 bytesRead = 0;
    sysMemClear(buffer, 96);
    u32 result = reader->vtable->read(reader, buffer, 96, &bytesRead, handle, 2, 18);
    if ((result << 22) != 0xfdc00000 && bytesRead == 0)
        result = 0xc8810bef;
    return result;
}
