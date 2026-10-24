/* NON_MATCHING: retail keeps the 16 zeroed words and the list links in fp/sl-based stores scheduled after the second payload copy and loads the help context through a VFP register (vldr s16); the build orders the stores and registers differently. */
#include "battle/btlHelp.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
BtlMainStateA *btlGetMainState(void);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
void rt_memcpy_w(void *destination, const void *source, u32 bytes);
BtlHelpEntryA *FUN_00200a68(u32 id, u16 message, u32 first, u32 second, const void *combatant, u8 mode,
                            u32 argument, u32 context);
BtlHelpEntryA *FUN_004c8e30(u32 first, u32 second, u32 third);

// Queues a help entry showing two combatant snapshots side by side; with one snapshot (or none) it falls back to the
// single-combatant help entry. Returns NULL while a blocked battle state is active.
BtlHelpEntryA *FUN_004c9220(u32 first, const void *snapshotA, const void *snapshotB, u8 mode)
{
    // The shared entry's byte padding ends at 0x872; keep a word-aligned local view.
    struct PairedHelpEntryView {
        u16 type;
        s16 kind;
        u16 state;
        u16 phase;
        u32 first;
        f32 context;
        u8 snapshotA[0x408];
        u8 snapshotB[0x408];
        u8 mode;
        u8 unk821[3];
        u32 row;
        u32 column;
        u32 values[16];
        u32 counter;
        u16 frame;
        s16 dialogIndex;
        BtlHelpEntryA *next;
        BtlHelpEntryA *prev;
        u32 unk87C;
    };
    typedef char PairedHelpEntryViewOffsets[offsetof(PairedHelpEntryView, mode) == 0x820 &&
                                                    offsetof(PairedHelpEntryView, values) == 0x82C &&
                                                    offsetof(PairedHelpEntryView, next) == 0x874 &&
                                                    sizeof(PairedHelpEntryView) == 0x880
                                                ? 1
                                                : -1];

    BtlMainStateA *battle = btlGetMainState();
    u64 blockedStates = static_cast<u64>(g_btlHelp.blockedStates[0]) |
                        (static_cast<u64>(g_btlHelp.blockedStates[1]) << 32);
    u64 blockedTransitions = static_cast<u64>(g_btlHelp.blockedTransitions[0]) |
                             (static_cast<u64>(g_btlHelp.blockedTransitions[1]) << 32);
    if ((battle->stateFlags64.bits & blockedStates) != 0 || (battle->stateFlags64.bits & blockedTransitions) != 0) {
        return NULL;
    }
    if (snapshotA == NULL) {
        return FUN_004c8e30(first, 0, mode);
    }
    if (snapshotB == NULL) {
        return FUN_00200a68(1, 0, first, battle->helpMessages.context, snapshotA, mode, 13, 0);
    }

    f32 context = *reinterpret_cast<f32 *>(&battle->helpMessages.context);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 191);
    PairedHelpEntryView *entry = static_cast<PairedHelpEntryView *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(PairedHelpEntryView), 1));
    entry->type = 2;
    entry->kind = 0;
    entry->state = 0;
    entry->phase = 0;
    entry->first = first;
    entry->context = context;
    rt_memcpy_w(entry->snapshotA, snapshotA, sizeof(entry->snapshotA));
    rt_memcpy_w(entry->snapshotB, snapshotB, sizeof(entry->snapshotB));
    entry->mode = mode;
    entry->counter = 0;
    entry->row = 13;
    entry->column = 14;
    entry->frame = 0;
    entry->dialogIndex = 1;
    for (s32 i = 0; i < 16; ++i) {
        entry->values[i] = 0;
    }
    entry->next = NULL;
    entry->prev = NULL;

    BtlHelpEntryA *message = reinterpret_cast<BtlHelpEntryA *>(entry);
    BtlHelpListA *list = g_btlHelp.list;
    if (list->head == NULL)
        list->head = message;
    if (list->tail == NULL)
        list->tail = message;
    else {
        list->tail->next = message;
        entry->prev = list->tail;
        list->tail = message;
    }
    list->count++;
    return message;
}
}
