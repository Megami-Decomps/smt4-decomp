/* NON_MATCHING: presentation-pointer lifetime, maximum-HP reload and eligibility-flag lowering differ. */
#include "shard/Shard0033.h"
#include "shard/Shard0032.h"
#include "gamedata/Table00.h"
#include "gamedata/UnitPresentationInfo.h"
#include <string.h>
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
extern ObjBRef g_gameGlobals;
void FUN_002cb55c(UnitPresentationInfo *, void *, u32);
void unitInitializeFromTemplate(u32, UnitRecord *);
void unitRecordBuild(s32, UnitRecord *);
void FUN_0026fd50(UnitPresentationInfo *, UnitRecord *, s32, u32);
Table00Record *dataTable00FindById(u16);
s32 FUN_002b4dcc(UnitRecord *);
void FUN_0034dae0(UnitPresentationInfo *, s32);

/* Build the player's or selected demon's presentation and update selection eligibility. */
void FUN_0031f718(s32 id, s32 useBaseStats, u32 flags)
{
    /* The shared session opaque range starts at 0x1391; a typed union there would shift it. */
    struct PresentationView { u8 unk0000[0x1390]; UnitPresentationInfo info; };
    /* Keep Table00Record's original halfword alignment. */
    struct BaseStatsView { u16 id, flags; u32 hp, mp; };
    typedef char PresentationOffsets[
        offsetof(PresentationView, info) == 0x1390 &&
        offsetof(BaseStatsView, hp) == 4 && offsetof(BaseStatsView, mp) == 8 ? 1 : -1];
    ObjB *session = g_gameGlobals.instance;
    UnitPresentationInfo *info = &((PresentationView *)session)->info;
    UnitRecord unit;
    bool allowed = true;
    session->sessionDisplay.active = 1;
    if (id < 0) {
        FUN_002cb55c(info, gameGetPlayerData(), flags);
        session->unk2017 = 0;
    } else if (useBaseStats) {
        unitInitializeFromTemplate((u16)id, &unit);
        session->unk2017 = 7;
        FUN_0026fd50(info, &unit, 0, flags);
        Table00Record *record = dataTable00FindById((u16)id);
        if (record != NULL) {
            const BaseStatsView *base = (const BaseStatsView *)record;
            info->hp = base->hp;
            info->mp = base->mp;
            info->maximumHp = FUN_002b4dcc(&unit);
            info->maximumMp = base->mp;
            if (info->maximumHp < 0)
                info->maximumHp = base->hp;
        }
        if (gameProgressIsAdvanced()) {
            session->unk2017 = 16;
            memset(unit.skillList.skills, 0, sizeof(unit.skillList.skills));
            FUN_0034dae0(info, id);
        }
    } else {
        unitRecordBuild((u16)id, &unit);
        session->unk2017 = 1;
        FUN_0026fd50(info, &unit, 0, flags);
    }
    session->unk20B0 = 1;
    if (id >= 0) {
        Table00Record *record = dataTable00FindById((u16)id);
        if (record == NULL) {
            allowed = false;
        } else {
            allowed = !(record->flags & 0x400);
            if (g_gameGlobals.instance != NULL && g_gameGlobals.instance->unk2017 == 17)
                allowed = false;
        }
    }
    session->sessionEligibility.allowed = allowed;
    if (!allowed && session->sessionSelection.pending)
        session->sessionSelection.pending = 0;
}
}
