/* NON_MATCHING: selected-record address decomposition and shared result-call control flow differ. */
#include "common.h"

struct SelectableRecord {
    u8 unk00[0x38];
    u16 id; // 0x38
    u8 unk3a[0x116];
};
struct RecordSelection {
    u8 unk0000[0x452c];
    SelectableRecord records[36]; // 0x452c
    u8 unk746c[0x54];
    s32 selected; // 0x74c0
};
struct RecordQueryContext {
    u32 unk00;
    RecordSelection *selection; // 0x04
    SelectableRecord *record; // 0x08
};

extern "C" {
void scrSetResult(s32 result);
extern RecordQueryContext g_engineCleanupOwner;

// Return the selected record id, or the direct record id when no selector is present.
u32 FUN_003cc614(void)
{
    RecordQueryContext *context = &g_engineCleanupOwner;
    RecordSelection *selection = context->selection;
    if (selection != NULL) {
        scrSetResult(selection->records[selection->selected].id);
    } else if (context->record != NULL) {
        scrSetResult(context->record->id);
    }
    return 1;
}
}
