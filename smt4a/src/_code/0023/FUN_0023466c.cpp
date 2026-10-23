/* NON_MATCHING: table lookup null/bounds registers and popup-field store grouping differ. */
#include "gamedata/DataTable.h"

struct PopupConditionRecord {
    s32 id;
    s32 kind;
    s16 requiredFlag;
    s16 blockingFlag;
    s16 argument;
    s16 unk0e;
    s16 message;
    u8 unk12[0xe];
};
struct PopupMessageResource {
    u32 unk00;
    u8 header[0x20];
    char text[1];
};
/* The canonical MapRandomPopupPrefixA ends at 0x18; this local view accesses
 * additional fields without extending that shared prefix. */
struct PopupTriggerStateView {
    s32 state;
    s32 phase;
    u8 unk08[0xc];
    const char *text;
    s32 trigger;
    const void *header;
};

extern "C" {
extern PopupTriggerStateView *g_popupState;
s32 gameFlagIsSet(s32 flag);
void gameFlagSetValue(s32 flag, s32 value);
PopupMessageResource *FUN_00365bc4(s32 message);

/* Activate the first matching kind-seven popup and mark its blocking flag. */
void FUN_0023466c(s32 id, s32 argument)
{
    DataTableView<PopupConditionRecord> table(0x43, 0);
    s32 count = (s32)table.count;
    for (u32 i = 0; (s32)i < count; ++i) {
        DataTableView<PopupConditionRecord> current(0x43, 0);
        PopupConditionRecord *record = current.at(i);
        if (record->kind == 7 && record->id == id &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
            (record->blockingFlag == 0 || !gameFlagIsSet(record->blockingFlag)) &&
            record->argument == argument) {
            PopupMessageResource *message = FUN_00365bc4(record->message);
            PopupTriggerStateView *popup = g_popupState;
            popup->phase = 0;
            popup->state = 9;
            popup->text = message->text;
            popup->trigger = record->id;
            popup->header = message->header;
            gameFlagSetValue(record->blockingFlag, 1);
            return;
        }
    }
}
}
