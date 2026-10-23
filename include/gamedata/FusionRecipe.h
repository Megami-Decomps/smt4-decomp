#ifndef GAMEDATA_FUSIONRECIPE_H
#define GAMEDATA_FUSIONRECIPE_H
#include "common.h"
#include <stddef.h>
struct FusionRecipe {
    u16 id;
    u16 ingredients[12];
};
typedef char FusionRecipeLayoutCheck[offsetof(FusionRecipe, ingredients) == 2 && sizeof(FusionRecipe) == 0x1A ? 1 : -1];
#endif
