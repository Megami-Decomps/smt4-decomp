#include "common.h"

/* The release slot is the deleting virtual destructor. */
class MapResource {
public:
    virtual ~MapResource();
};

extern "C" {

struct MapResourceState {
    u8 active;                         // 0x00
    u8 unk01[0x1B];                    // 0x01
    MapResource* resource;             // 0x1C
};

struct MapInterface {
    u8 unk00[0xCC5C];                  // 0x0000
    MapResourceState resourceState;     // 0xCC5C
};

extern MapInterface* g_mapIf;

void mapIfReleaseResource(void)
{
    MapResourceState* state = &g_mapIf->resourceState;
    if (state->resource != NULL) {
        delete state->resource;
        state->resource = NULL;
    }
    state->active = 0;
}

}
