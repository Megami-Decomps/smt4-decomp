/* Builds the fusion preview of two units from their ids (a tail call into the function that follows). */
#include "common.h"
#include "gamedata/UnitStats.h"
#include "gamedata/PackedIdentifiers.h"
#include "code/Code0026_Smt4.h"

extern "C" {

u32 fusionBuildPreviewResult(void *unit, u16 first, u16 second, PackedIdentifiers *result);

u32 fusionBuildPreviewFromUnits(void *unit, StatBlock *first, StatBlock *second, PackedIdentifiers *result)
{
    return fusionBuildPreviewResult(unit, first->id, second->id, result);
}

} /* extern "C" */
