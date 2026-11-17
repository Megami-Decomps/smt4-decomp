#include "common.h"
#include "gamedata/Table00Lookup.h"
#include "gamedata/SpriteTemplatePreferredDevil.h"

extern "C" {

/* Level of the data-table-00 record for the id spriteTemplateGetPreferredDevilId picks for `index`. */
u8 dataTable00RankOfPicked(s32 index)
{
    return dataTable00FindById(spriteTemplateGetPreferredDevilId(index))->level;
}

} /* extern "C" */
