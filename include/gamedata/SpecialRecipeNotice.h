#ifndef GAMEDATA_SPECIAL_RECIPE_NOTICE_H
#define GAMEDATA_SPECIAL_RECIPE_NOTICE_H

#include "common.h"

/* The fusion catalogue checks bit 2 before adding a special recipe to its notice list. */
enum {
    SPECIAL_RECIPE_NOTICE_BIT = 2,
    SPECIAL_RECIPE_NOTICE_SHOWN = 1 << SPECIAL_RECIPE_NOTICE_BIT,
    SPECIAL_RECIPE_FIRST_TAIL_ID = 64,
    SPECIAL_RECIPE_COUNT = 72
};

#endif
