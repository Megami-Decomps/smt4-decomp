/* NON_MATCHING: the dispatch (pivot at state 3, empty case 1) now matches retail; retail lays the `return 1` exit for states 0/99 at the end with the other exit, the build returns it inline. */
#include "map/mapDepart.h"
#include "event/3dEvent/3dEventEffect.h"

extern "C" {
s32 textFormatBuffer(char *destination, const char *format, ...);
extern MapDepartWork *g_mapDepartWork;

// Advance asynchronous loading of the optional sky and the destination map's model archive.
u32 FUN_002d1ce0()
{
    // Word fields inside the prefix's byte padding at +0x16 cannot be inserted without realignment.
    struct LoadView {
        u8 unk00[0x14];
        s16 state;
        u16 unk16;
        s32 skyId;
        s16 mapId;
        s16 areaId;
        void *model;
        u32 modelState;
        void *sky;
        u32 skyState;
    };
    LoadView *work = reinterpret_cast<LoadView *>(g_mapDepartWork);
    char path[128];
    switch (work->state) {
    case 0:
    case 99:
        return 1;
    case 1:
        break;
    case 2:
        if (work->skyId <= 0) {
            work->state = 10;
        } else {
            textFormatBuffer(path, "map/sky/sky_%02d.bam", work->skyId);
            asdLoadFileAsyncNoCallback(path, &reinterpret_cast<LoadView *>(g_mapDepartWork)->sky, 3, 0x80);
            ++g_mapDepartWork->state;
        }
        break;
    case 3:
        if (work->sky != NULL) {
            work->modelState = 4;
            work->state = 10;
        }
        break;
    case 10:
        textFormatBuffer(path, "map/m%03d/m%03d_%02d.bam", work->mapId, work->mapId, work->areaId);
        asdLoadFileAsyncNoCallback(path, &reinterpret_cast<LoadView *>(g_mapDepartWork)->model, 3, 0x80);
        ++g_mapDepartWork->state;
        break;
    case 11:
        if (work->model != NULL) {
            work->modelState = 4;
            work->state = 99;
        }
        break;
    }
    return 0;
}
}
