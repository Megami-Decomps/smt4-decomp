#ifndef W4_W4MATCH5_DATATABLE_H
#define W4_W4MATCH5_DATATABLE_H

#include "common.h"
#include "gamedata/DataTable.h"
#include "gfx/RenderTransformState.h"
#include "shard/W6_W6Match5_MatrixCommand.h"

/* The data-table accessors the game's data code calls (twin names in both games). */
extern "C" {

void *dataTableGet(s32 table, s32 slot);

}

/* File-local accessor for a data table section. The original code reaches dataTableGet through
 * a small function that armcc inlines (it materialises the arguments in call order). */
static void *dataTableGetSection(s32 table, s32 slot)
{
    return dataTableGet(table, slot);
}

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00187d90(MatrixCommandSource *source, const f32 *matrix);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_002c0a84(void);

#ifdef __cplusplus
}
#endif

#endif
