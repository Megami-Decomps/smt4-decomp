#include "common.h"

/* A map destruction object owned by the hakai state; deleted through its virtual destructor. */
class MapHakaiObject {
public:
    virtual ~MapHakaiObject();
};

struct MapHakaiPart {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x27];
    /* 0x28 */ u8 loaded;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ MapHakaiObject *object;
    /* 0x30 */ u8 unk30[0x24];
};

typedef char MapHakaiPartSizeCheck[sizeof(MapHakaiPart) == 0x54 ? 1 : -1];

struct MapHakai {
    /* 0x00 */ u8 unk00[0x20];
    union {
        /* 0x20 */ MapHakaiObject *objects[2][8]; /* 7 used per row */
        struct {
            /* 0x20 */ u8 unk20[0x3c];
            /* 0x5C */ MapHakaiPart parts[16];
        } partView;
    };
};

extern "C" {

extern MapHakai *g_mapHakai;

/* Delete every loaded part object and every row object of the hakai state. */
void mapHakaiDeleteObjects(void)
{
    for (s32 i = 0; i < 16; ++i) {
        MapHakaiPart *part = &g_mapHakai->partView.parts[i];
        if (part->active && part->loaded && part->object != NULL) {
            delete part->object;
            part->object = NULL;
        }
    }
    for (s32 row = 0; row < 2; ++row) {
        for (s32 i = 0; i < 7; ++i) {
            if (g_mapHakai->objects[row][i] != NULL) {
                delete g_mapHakai->objects[row][i];
                g_mapHakai->objects[row][i] = NULL;
            }
        }
    }
}

} /* extern "C" */
