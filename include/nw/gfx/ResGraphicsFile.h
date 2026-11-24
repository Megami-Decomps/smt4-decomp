#ifndef NW_GFX_RESGRAPHICSFILE_H
#define NW_GFX_RESGRAPHICSFILE_H

#include "common.h"

/* A NintendoWare resource accessor (nw::gfx::ResGraphicsFile by its use; the name is inferred): one pointer to
 * the resource's data, passed by value. The texture set-up (IV FUN_002bd498, Apocalypse FUN_0015d8e0) takes the
 * file its texture references are resolved against; a texture built in memory passes an empty one, which
 * retail constructs in a register of its own instead of loading a literal zero. */
struct ResGraphicsFile {
    void *data;

    ResGraphicsFile(void *data_ = NULL) : data(data_) {}
};

#endif
