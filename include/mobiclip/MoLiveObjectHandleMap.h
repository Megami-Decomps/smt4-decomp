#ifndef MOBICLIP_MOLIVEOBJECTHANDLEMAP_H
#define MOBICLIP_MOLIVEOBJECTHANDLEMAP_H

#include "mobiclip/MoLiveContainers.h"

/* The red-black tree behind MoLive::ObjectHandleMap, instantiated explicitly as retail's translation unit does. */
template class __rw::__rb_tree<u32, MoLive::ObjectHandleEntry, __rw::__select1st<MoLive::ObjectHandleEntry, u32>, std::less<u32>, MoLive::ObjectHandleAllocator>;

/* A handle table is built, copied and extended by the same code; this is what makes the tree's node allocation (_C_get_link) a function of its own. */
extern "C" void moLiveObjectHandleMapSample(const MoLive::ObjectHandleAllocator &allocator, u32 key, const MoLive::ObjectHandle &handle, MoLive::ObjectHandleMap &out)
{
    MoLive::ObjectHandleMap table(std::less<u32>(), allocator);
    table.insert(MoLive::ObjectHandleEntry(key, handle));
    MoLive::ObjectHandleMap copy(table);
    out = copy;
    MoLive::ObjectHandleMap another(std::less<u32>(), allocator);
    another.insert(MoLive::ObjectHandleEntry(key + 1, handle));
    out.insert(MoLive::ObjectHandleEntry(key + 2, handle));
}

#endif
