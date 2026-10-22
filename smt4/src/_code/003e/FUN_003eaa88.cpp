#include "classes/Obj42251c.h"

/* Compare the parameter values relevant to this record kind. */
extern "C" s32 FUN_003eaa88(const Obj42251cData *record, const Obj42251cData *other)
{
    return other->unk04 == record->unk04
        && other->unk08 == record->unk08
        && other->flags == record->flags
        && other->first == record->first
        && other->second == record->second
        && other->third == record->third
        && other->fourth == record->fourth
        && other->fifth == record->fifth
        && other->sixth == record->sixth
        && other->lowNibble == record->lowNibble;
}
