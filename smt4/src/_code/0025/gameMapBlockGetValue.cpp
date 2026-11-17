#include "gamedata/MapSaveBlock.h"

extern "C" {

s32 gameMapBlockGetValue(s32 index)
{
    return (s8)gameGetMapBlock()->placeStates[index]; /* read signed here */
}

} /* extern "C" */
