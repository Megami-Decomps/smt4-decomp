#include "gamedata/PlayerGrowthDefaults.h"
#include "code/Code004c_Smt4a.h"

/* Returns the hero's growth parameters from the first record of data table 9 (its argument is not read). */
extern "C" StatGrowthParameters playerGetGrowthParameters(s32)
{
    return playerGrowthParameters();
}
