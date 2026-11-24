/* NON_MATCHING: register allocation only: retail loads the data-blocks pointer into r2 and adds 0x88 into r1; built uses r1 for both. */
#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SpecialRecipeNotice.h"

extern "C" {

/* Returns whether the special recipe's notice has been shown. */
u32 saveHasShownSpecialRecipeNotice(s32 recipe)
{
    if (recipe < SPECIAL_RECIPE_COUNT) {
        if (recipe >= 0) {
            GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
            u8 *flag;
            if (recipe >= SPECIAL_RECIPE_FIRST_TAIL_ID) {
                flag = &body->extendedFlagWords.specialRecipeFlags[recipe - SPECIAL_RECIPE_FIRST_TAIL_ID];
            } else {
                flag = &body->specialRecipeFlags[recipe];
            }
            if (flag != NULL) {
                return (*flag & SPECIAL_RECIPE_NOTICE_SHOWN) >> SPECIAL_RECIPE_NOTICE_BIT;
            }
        }
    }
    return 0;
}

} /* extern "C" */
