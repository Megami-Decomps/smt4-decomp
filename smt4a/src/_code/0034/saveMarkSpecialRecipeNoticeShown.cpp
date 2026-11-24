/* NON_MATCHING: the save block pointer is loaded into r2 and the flags base formed in r1 (retail); here the load reuses r1. */
#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SpecialRecipeNotice.h"

/* Marks the special recipe's notice as shown. */
extern "C" void saveMarkSpecialRecipeNoticeShown(s32 recipe)
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
                *flag |= SPECIAL_RECIPE_NOTICE_SHOWN;
            }
        }
    }
}
