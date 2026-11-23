#include "common.h"
#include "code/Code0031_Smt4a.h"
#include "gamedata/GameDataAccess_Shard0031.h"

extern "C" {

/* unit-local: the list's selection holder as this dispatcher sees it (kind byte, then the entry at 0x10) */
typedef struct ObjFUN_0031d174 {
    /* 0x00 */ u8 type;
    /* 0x01 */ u8 unk01[15];
    /* 0x10 */ u8 body[1];
} ObjFUN_0031d174;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak s32 FUN_0031d174_hook(void *body);

/* The holder's current value (the selected row, for the list drawers): read from its entry unless it is of type 1. */
s32 FUN_0031d174(void *list)
{
    ObjFUN_0031d174 *obj = (ObjFUN_0031d174 *)list;
    if (obj->type == 1) {
        return FUN_0031d174_hook(obj->body);
    }
    return flaggedEntryGetValueA((FlaggedEntry *)obj->body);
}

} /* extern "C" */
