/* NON_MATCHING: register allocation only: retail keeps the save pointer in r2 and the +0x88 base in r1, built reuses r1 for both */
#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SpecialRecipeNotice.h"

/* Returns whether the special recipe's notice has been shown. */
extern "C" u32 saveHasShownSpecialRecipeNotice(s32 recipe)
{
    if (recipe < SPECIAL_RECIPE_COUNT) {
        if (recipe >= 0) {
            GameSaveBodyA *body = &g_gameDataBlocks.saveBlock->body;
            u8 *flag;
            if (recipe >= SPECIAL_RECIPE_FIRST_TAIL_ID) {
                flag = &body->specialRecipeTail.flags[recipe - SPECIAL_RECIPE_FIRST_TAIL_ID];
            } else {
                flag = &body->specialRecipeFlags.flags[recipe];
            }
            if (flag != NULL) {
                return (*flag & SPECIAL_RECIPE_NOTICE_SHOWN) >> SPECIAL_RECIPE_NOTICE_BIT;
            }
        }
    }
    return 0;
}
