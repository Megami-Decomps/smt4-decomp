/* NON_MATCHING: folded roster-plus-four addressing changes saved registers/frame size and the first comparison-loop register allocation. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
BtlMainStateA *btlGetMainState();
void sysMemClear(void *, u32);

u32 btlUnitCheckAgainstActivePeers(const BattleRosterRecordA *unit, u32 conditions)
{
    if (!(conditions & 0x60000))
        return 0;
    if (unit->render.flags & 0x10)
        return 0;
    BtlMainStateA *battle = btlGetMainState();
    const BattleRosterRecordA *peers[50];
    sysMemClear(peers, sizeof(peers));
    u32 count = 0;
    const BattleRosterRecordA *roster = battle->roster;
    for (s32 index = 0; index < 50; ++index) {
        const BattleRosterRecordA *peer = &roster[index + 4];
        u32 flags = peer->render.flags;
        if ((flags & 1) && (flags & 2) && (flags & 0x80) &&
            !(flags & 0x10) && peer->render.group != unit->render.group)
            peers[count++] = peer;
    }
    if (conditions & 0x20000) {
        for (s32 index = 0; index < count; ++index)
            if (unit->render.position[0] > peers[index]->render.position[0])
                return 1;
    } else if (conditions & 0x40000) {
        for (s32 index = 0; index < count; ++index)
            if (unit->render.position[0] < peers[index]->render.position[0])
                return 1;
    }
    return 0;
}
}
