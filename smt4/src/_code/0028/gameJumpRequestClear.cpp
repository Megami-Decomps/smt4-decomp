/* NON_MATCHING: aggregate copy groups the two unspecified transform values into vstmia. */
#include "map/MapJumpTransition.h"

struct SaveJumpRequestBody {
    /* 0x00000 */ u8 unk00000[0x24b84];
    /* 0x24B84 */ MapJumpRequest jumpRequest;
};
extern "C" SaveJumpRequestBody *gameDataBlocksGetSaveData();

// Clear the destination and translation; the remaining transform values are unspecified.
extern "C" void gameJumpRequestClear()
{
    MapJumpRequest *destination = &gameDataBlocksGetSaveData()->jumpRequest;
    MapJumpRequest request;
    *destination = request;
}
