#ifndef GAMEDATA_TABLE_ENTRY_REF_H
#define GAMEDATA_TABLE_ENTRY_REF_H
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "gamedata/ItemCodeInfo.h"

/* An item-property entry looked up from a table; the debug build tracks its release. */
struct TableEntryRef {
    ItemPropertyResource *entry;
    ~TableEntryRef() { asdDebugHookPtr(this); }
};
#endif
