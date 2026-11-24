/* NON_MATCHING: register allocation only: retail loads the table pointer into r2 (built: r1) */
#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SpecialRecipeNotice.h"

extern "C" {

/* Marks the special recipe's notice as shown. */
void saveMarkSpecialRecipeNoticeShown(s32 recipe)
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
                *flag |= SPECIAL_RECIPE_NOTICE_SHOWN;
            }
        }
    }
}

} /* extern "C" */
