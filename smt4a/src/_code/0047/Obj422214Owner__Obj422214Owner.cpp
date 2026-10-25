#include "classes/Obj422214Owner.h"

extern "C" {
void sysMemClear(void *buffer, u32 size);
}

/* Empty save-data buffers start at the epoch used by the archive reader. */
Obj422214Owner::Obj422214Owner() : modified()
{
    sysMemClear(header, sizeof(header));
    sysMemClear(directory, sizeof(directory));
    sysMemClear(contents, sizeof(contents));
    modified = nn::fnd::DateTime(1970, 1, 1, 0, 0, 0, 0);
    flags[0] = 0;
    flags[1] = 0;
    flags[2] = 0;
    flags[3] = 0;
    flags[4] = 0;
    flags[5] = 0;
    flags[6] = 0;
    flags[7] = 0;
}
