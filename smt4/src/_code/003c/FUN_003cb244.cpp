/* NON_MATCHING: zero-value register lifetime, history-index address synthesis and empty-selection return placement differ. */
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "battle/ActionKindSelection.h"
#include "shard/W6_W6Match3_BattleQueue.h"
#include <stddef.h>

extern "C" {
extern BtlActionGlobals g_btlAction;

// Commit the selected action and retain it in the command's five-entry history ring.
u32 FUN_003cb244(ActionStateChannels *channels, ActionKindSelection *selection)
{
    struct CommandFields { u16 kind, id, option, target; };
    struct HistoryCommand {
        u8 unk000[0x14C];
        CommandFields current, previous;
        CommandFields history[5];
        s32 historyIndex;
    };
    struct SelectionView {
        u8 unk00[0x28];
        HistoryCommand *command;
        u16 index;
    };
    struct BattleSelectionView {
        u8 unk0000[0x2F20];
        CommandFields selected;
    };
    struct SelectionOwner { BattleSelectionView *battle; };
    typedef char CommandHistoryOffsets[offsetof(HistoryCommand, current) == 0x14C &&
        offsetof(HistoryCommand, previous) == 0x154 &&
        offsetof(HistoryCommand, history) == 0x15C &&
        offsetof(HistoryCommand, historyIndex) == 0x184 &&
        offsetof(SelectionView, index) == 0x2C ? 1 : -1];
    // Command history and selection index extend beyond their canonical prefixes.
    SelectionView *work = reinterpret_cast<SelectionView *>(selection);
    btlPruneInvalidQueuedEntries(reinterpret_cast<BtlMainState *>(channels->entries[0].owner));
    ActionStateChannels *active = static_cast<ActionStateChannels *>(g_btlAction.data);
    active->entries[channels->entries[0].owner->current].pending = 29;
    SelectionOwner *owner = reinterpret_cast<SelectionOwner *>(channels);
    if (work->command == NULL) {
        owner->battle->selected.kind = 0;
        owner->battle->selected.id = 0;
        owner->battle->selected.option = 0;
        owner->battle->selected.target = 0;
    } else {
        owner->battle->selected.kind = work->index;
        owner->battle->selected.id = work->command->current.kind;
        owner->battle->selected.option = work->command->current.id;
        owner->battle->selected.target = 0;
        work->command->previous.kind = work->command->current.kind;
        work->command->previous.id = work->command->current.id;
        work->command->previous.option = work->command->current.option;
        work->command->previous.target = work->command->current.target;
        s32 index = work->command->historyIndex;
        if (index < 5) {
            work->command->history[index].kind = work->command->current.kind;
            work->command->history[index].id = work->command->current.id;
            work->command->history[index].option = work->command->current.option;
            work->command->history[index].target = work->command->current.target;
        }
        if (++work->command->historyIndex > 4) {
            work->command->historyIndex = 0;
        }
    }
    return 1;
}
}
