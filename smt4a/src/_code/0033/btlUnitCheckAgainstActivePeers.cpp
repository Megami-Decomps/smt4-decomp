/* NON_MATCHING: 46 lines: retail loads battle->roster once before the gather loop (the build reloads it every
 * iteration), and the 0x40000 loop's index and remainder registers are swapped. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
void sysMemClear(void *, u32);

u32 btlUnitCheckAgainstActivePeers(const BattleRosterRecordA *unit, u32 conditions)
{
    s32 index;
    if (!(conditions & 0x60000))
        return 0;
    if (unit->render.flags & 0x10)
        return 0;
    BtlMainStateA *battle = btlGetMainState();
    const BattleRosterRecordA *peers[50];
    sysMemClear(peers, sizeof(peers));
    u32 count = 0;
    for (index = 0; index < 50; ++index) {
        const BattleRosterRecordA *peer = &battle->roster[index + 4];
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
