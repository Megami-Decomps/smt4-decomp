/* The demon a sprite template prefers for a table index. */
#ifndef SMT4_GAMEDATA_SPRITETEMPLATEPREFERREDDEVIL_H
#define SMT4_GAMEDATA_SPRITETEMPLATEPREFERREDDEVIL_H

#include "common.h"

extern "C" {

/* The id of the demon that data table 0 picks for `index`. */
u32 spriteTemplateGetPreferredDevilId(s32 index);

/* The byte of DAT_00447620 for the demon picked for `kind`. */
u8 spriteTemplateGetDevilTableByte(s32 kind);

} /* extern "C" */

#endif
