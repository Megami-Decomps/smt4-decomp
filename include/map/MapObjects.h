#ifndef MAP_MAPOBJECTS_H
#define MAP_MAPOBJECTS_H

#include "common.h"

class MapObjectInstance {
public:
    virtual void vfunc00();
    virtual void vfunc04();
};

struct MapObjectEntry {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 unk15[0x27];
    /* 0x3C */ MapObjectInstance *object;
    /* 0x40 */ u8 unk40[8];
};
struct MapObjectWork {
    /* 0x000 */ MapObjectEntry entries[24];
};

#endif
