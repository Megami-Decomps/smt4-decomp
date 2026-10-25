/* NON_MATCHING: packed-entry option clearing uses AND rather than retail's halfword shift pair. */
#include "shard/S2Scene3a.h"
#include "addon/AocEntryKind.h"
#include "gamedata/PartyMoney.h"

extern "C" {
void FUN_00408184(u32 kind, u32 amount);
u32 aocGetContentFlags(u16 id);
void gameDataAddCappedPoints(u32 points);
void FUN_0049cd18(const Scene3aEntry *entry, s32 quantity, u32 flags);

void FUN_004963f8(Scene3a *scene)
{
    // Apocalypse places this transaction buffer beyond the shared scene prefix.
    struct TransactionSceneView {
        u8 unk00000[0x9ffc];
        Scene3aTransactionRecord records[0x2000];
        u16 count;
        u8 unk15ffe[2];
        u32 totalAmount;
    };
    typedef char TransactionSceneLayoutCheck[offsetof(TransactionSceneView, records) == 0x9ffc &&
        offsetof(TransactionSceneView, count) == 0x15ffc &&
        offsetof(TransactionSceneView, totalAmount) == 0x16000 ? 1 : -1];
    TransactionSceneView *work = (TransactionSceneView *)scene;
    partyAddMoneyClampedForward(work->totalAmount);
    FUN_00408184(0x1f, work->totalAmount);
    for (s32 index = 0; index < work->count; ++index) {
        u16 id = work->records[index].id;
        s32 quantity = work->records[index].quantity;
        if (id == 0) {
            return;
        }
        Scene3aEntry entry;
        if (aocEntryGetKindForward(id) == 10) {
            gameDataAddCappedPoints(aocGetContentFlags(id) * quantity);
            entry.id = id;
            entry.attributes.options = 0;
            FUN_0049cd18(&entry, -quantity, 0);
        } else {
            entry.id = id;
            entry.attributes.options = 0;
            FUN_0049cd18(&entry, quantity, 0);
        }
    }
}
}
