/* NON_MATCHING: retail keeps the 16 zeroed words and the list links in fp/sl-based stores scheduled after the second payload copy and loads the help context through a VFP register (vldr s16); the build orders the stores and registers differently. */
#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
BtlHelpEntryA *FUN_00200a68(u32 id, u16 message, u32 first, u32 second, const void *combatant, u8 mode,
                            u32 argument, u32 context);
BtlHelpEntryA *FUN_004c8e30(u32 first, u32 second, u32 third);

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

/* Creates a type-`type` entry holding two snapshots and appends it to the help list (btlHelp.cpp's creator for
 * this message, inlined here as FUN_00200a68's creator is not; retail keeps its constant arguments in saved
 * registers across the allocation).
 * The trace lines are those of a run of creators above their callers (FUN_00200a68's at 150, then 191, 237, 275):
 * btlHelpAppendMessage (0x4c8894) traces 237 but FUN_004c9220 (0x4c9220), placed after it, traces 191. */
static __inline BtlHelpEntryA *helpPairedEntryCreate(u16 type, u32 first, f32 context, const void *snapshotA,
    const void *snapshotB, u8 mode, u32 row, u32 column)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 191);
    PairedHelpEntryView *entry = static_cast<PairedHelpEntryView *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(PairedHelpEntryView), 1));
    entry->type = type;
    entry->kind = 0;
    entry->state = 0;
    entry->phase = 0;
    entry->first = first;
    entry->context = context;
    __aeabi_memcpy4(entry->snapshotA, snapshotA, sizeof(entry->snapshotA));
    __aeabi_memcpy4(entry->snapshotB, snapshotB, sizeof(entry->snapshotB));
    entry->mode = mode;
    entry->counter = 0;
    entry->row = row;
    entry->column = column;
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

// Queues a help entry showing two combatant snapshots side by side; with one snapshot (or none) it falls back to the
// single-combatant help entry. Returns NULL while a blocked battle state is active.
BtlHelpEntryA *FUN_004c9220(u32 first, const void *snapshotA, const void *snapshotB, u8 mode)
{
    BtlMainStateA *battle = btlGetMainState();
    if ((battle->stateFlags64.bits & g_btlHelp.blockedStates) != 0 || (battle->stateFlags64.bits & g_btlHelp.blockedTransitions) != 0) {
        return NULL;
    }
    if (snapshotA == NULL) {
        return FUN_004c8e30(first, 0, mode);
    }
    if (snapshotB == NULL) {
        return FUN_00200a68(1, 0, first, battle->helpMessages.context, snapshotA, mode, 13, 0);
    }

    return helpPairedEntryCreate(2, first, *reinterpret_cast<f32 *>(&battle->helpMessages.context), snapshotA, snapshotB,
                                 mode, 13, 14);
}
}
