#include "mobiclip_ctrl/S4FsReader.h"

/* Reports whether the requested position has reached the end of the movie source. */
extern "C" u32 readerIsAtEnd(const S4FsReader *reader)
{
    if (reader->requested == reader->limit) {
        return 1;
    }
    return 0;
}
