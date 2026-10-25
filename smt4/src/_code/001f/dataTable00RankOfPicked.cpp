#include "common.h"
#include "gamedata/SpriteTemplatePreferredDevil.h"

extern "C" {

typedef struct Record001fa498 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 rank;
} Record001fa498;

Record001fa498 *dataTable00FindById(u32 id);

/* Byte at +2 of the data-table-00 record for the id spriteTemplateGetPreferredDevilId picks for `index`. */
u8 dataTable00RankOfPicked(s32 index)
{
    return dataTable00FindById(spriteTemplateGetPreferredDevilId(index))->rank;
}

} /* extern "C" */
