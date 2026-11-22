/* NON_MATCHING: the parameters are built in registers and stored as four words as in retail; the
 * record loads and the HP/MP arithmetic are scheduled differently (retail loads the level before
 * packing the second and third words and computes HP's smlabb before MP's mla). */
#include "gamedata/DemonGrowthParameters.h"

/* Returns demon `id`'s growth parameters with its HP and MP at its base level. */
extern "C" StatGrowthParametersIV demonGetGrowthParameters(u32 id)
{
    StatGrowthParametersIV result;
    demonGrowthParametersIV(id, &result);
    return result;
}
