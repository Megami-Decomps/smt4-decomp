#include "gamedata/PlayerGrowthDefaults.h"

/* Returns the hero's growth parameters from the first record of data table 9. */
extern "C" StatGrowthParameters playerGetGrowthParameters(void)
{
    return playerGrowthParameters();
}
