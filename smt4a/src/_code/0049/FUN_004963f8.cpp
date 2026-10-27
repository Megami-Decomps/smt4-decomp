#include "shard/S2Scene3a.h"
#include "gamedata/AocItemRef.h"
#include "addon/AocEntryKind.h"
#include "gamedata/PartyMoney.h"

extern "C" {
void FUN_00408184(u32 kind, u32 amount);
void gameDataAddCappedPoints(u32 points);
void FUN_0049cd18(const AocItemRef *entry, s32 quantity, u32 flags);

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
        AocItemRef entry;
        if (aocEntryGetKindForward(id) == 10) {
            gameDataAddCappedPoints(aocGetContentFlags(id) * quantity);
            entry.unk02Bit0 = 0;
            entry.scaled = 0;
            entry.percent = 0;
            entry.id = id;
            FUN_0049cd18(&entry, -quantity, 0);
        } else {
            entry.unk02Bit0 = 0;
            entry.scaled = 0;
            entry.percent = 0;
            entry.id = id;
            FUN_0049cd18(&entry, quantity, 0);
        }
    }
}
}
