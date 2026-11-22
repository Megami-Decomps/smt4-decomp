/* NON_MATCHING: 4 lines, one register: retail tests the camera mode in r1 (`ldr r1, [unit, #0x594]; cmp r1, #9;
 * ldreq r0, [aux]; bleq FUN_004f5f90`), the build in r0. Passing the mode as a second argument of FUN_004f5f90 gives
 * exactly that call site, but its body never reads r1 and the plain call then moves the entry-mask test at the top
 * (the mask loads as two words: 81 lines, 8 with the best helper form), so the one-argument prototype stays. */
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlEffectNames.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "battle/BtlEffectFiles.h"
#include "battle/BattleHelpers.h"
#include "battle/BattleHelpers_VariantB.h"
#include "battle/btlDebug.h"
#include "code/Code004f_Smt4a.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/SkillDataLookup.h"
#include "util/Random.h"
#include "AsdSDK/AsdMemUtil.h"

struct EntrySentinelTable;
struct EntryTable;
struct BattleUiOwner;
struct BtlStateB;

extern "C" {

extern void *g_btlAux;

s32 FUN_003e7adc(BtlMainStateA *state);
void FUN_004e69e8(BtlMainStateA **owner, BtlUnitA *unit, s32 forced);
void btlResetEntryCounters(EntrySentinelTable *table);
void entryTableInvalidate(EntryTable *table);
void FUN_004f6e68(BtlEffectFiles *work);
void dispatchBattleCommandUiVariant(BattleUiOwner *owner, BtlUnitA *context);
u32 runFourUpdates(u32 obj);
s32 btlFindSelectionIndexByOrdinal(const BtlMainStateA *state, s32 ordinal);
void FUN_004e638c(BtlMainGlobalsA *globals, BtlUnitA *unit, s32 primaryId, s32 secondaryId, s32 option);
void FUN_004e1f58(BtlMainGlobalsA *globals, const BtlUnitA *action, s32 alternate);
void btlSwitchId4CE4(BtlStateB *state, s32 id);
void FUN_0015f490(u32 id, s32 kind, f32 scale, u32 argument, u32 variant);
void FUN_003ece9c(BtlMainStateA *state);
void FUN_0047f08c(s32 id, u32 context);
u32 FUN_0047f584(void);
u32 FUN_004ab594(BtlUiA *ui);

/* Starts a unit's queued action: clears the unit's per-action work, may turn the action of an entry under one of
 * the g_btlAction masks into skill 0x8F, snapshots every listed entry's HP, picks the camera, the command UI and the
 * effect entry, switches the battle sound for the commands that have one, and plays the actor's voice line and the
 * message that announces the action. */
void btlUnitStartAction(BtlMainGlobalsA *globals, BtlUnitA *unit)
{
    unit->unk570 = 0;
    unit->unk574 = 0;
    unit->unk00C = 0;
    unit->unk584 = 0;
    unit->unk588 = 0;
    unit->unk58C = 0;
    unit->unk56C = 0;
    unit->unk01C = 0;

    /* An entry under this mask may act at random: half the time its command becomes skill 0x8F with no targets. */
    if (battleMaskIntersects(unit->entry->flags, g_btlAction.buttons.confirmAlt) && FUN_003e7adc(globals->state) == 0 &&
        (unit->flags & 0x200) == 0) {
        s16 kind = unit->data->actionKind;
        if ((kind == 1 || kind == 2 || kind == 6 || kind == 8) && (s32)randRange(99) < 50) {
            unit->data->actionKind = 2;
            unit->data->actionArg = 0x8F;
            unit->flags |= 0x100000;
            sysMemClear(unit->targets, sizeof(unit->targets));
            FUN_004fbeac(0, 0, 0, 0x48, 0);
        }
    }

    for (s32 i = 0; i < BTL_UNIT_TARGET_PAIR_COUNT; i++) {
        unit->pairs[i].entry = -1;
        unit->pairs[i].value = 0;
    }
    unit->unk59C = 0;
    btlUnitClearRecordFields(globals, globals->state->unitRecord.currentSlot);

    /* Every listed entry's HP and maximum as the action begins. */
    for (s32 id = 0; id < 109; id++) {
        unit->targetStates[id].hp = 0;
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(globals->state, id);
        if (entry != NULL) {
            unit->targetStates[id].hp = entry->data.hp;
            unit->targetStates[id].recoveryPercent = entry->data.maxHp;
        }
    }

    FUN_004e69e8(&globals->state, unit, 0);
    btlResetEntryCounters((EntrySentinelTable *)globals->state);
    entryTableInvalidate((EntryTable *)g_btlAux);
    FUN_004f6e68((BtlEffectFiles *)g_btlAux);
    if (unit->cameraMode == 9) {
        FUN_004f5f90((ObjectOwner *)g_btlAux);
    }
    dispatchBattleCommandUiVariant((BattleUiOwner *)globals, unit);
    runFourUpdates((u32)g_btlAux);

    s32 preferFirst = 0;
    if (btlFindSelectionIndexByOrdinal(globals->state, 1) >= 0) {
        preferFirst = 1;
    }
    BtlEffectNameEntry *effect =
        (BtlEffectNameEntry *)btlEffectFindPreferredName((BtlEffectNameOwner *)g_btlAux, preferFirst);
    if (effect != NULL) {
        FUN_004e638c(globals, unit, effect->primaryId, effect->secondaryId, 0);
    } else {
        FUN_004e638c(globals, unit, 0xFFFF, 0, 0);
    }
    FUN_004e1f58(globals, unit, 0);
    obj4FSlots28Reset((Obj4FSlots28 *)g_btlAux);
    g_btlCamera->flags = (g_btlCamera->flags & ~0x1000000) | 0x4000;

    switch (unit->data->actionKind) {
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 11:
        btlSwitchId4CE4((BtlStateB *)globals->state, globals->state->actionSoundId);
        break;
    }

    if (btlScriptUnitHasFlags(globals->state) != 0) {
        return;
    }

    /* The skill the action uses (its own, or the one its item casts) and whether that skill is of category 3. */
    bool category3 = false;
    s32 skillId = 0;
    if (unit->data->actionKind == 2) {
        skillId = unit->data->actionArg;
    } else if (unit->data->actionKind == 8) {
        ConsumableRecordA *item = itemTableGetItemRecord(unit->data->actionArg);
        if (item != NULL) {
            skillId = item->skillId;
        }
    }
    if (skillId > 0) {
        SkillDataRecordA *skill = skillDataFindById(skillId);
        if (skill != NULL && skill->sort.category == 3) {
            category3 = true;
        }
    }

    /* The actor's voice line: 10 for the random action, else 6 for a category 3 skill and 5 otherwise. */
    s16 kind = unit->data->actionKind;
    if ((kind == 1 || kind == 2 || kind == 8) && (unit->data->flags & 6) != 0) {
        if ((unit->flags & 0x100000) != 0) {
            FUN_0015f490(unit->data->id, 10, 0.9f, 0, 0);
        } else if (category3) {
            FUN_0015f490(unit->data->id, 6, 0.9f, 0, (u16)skillId);
        } else {
            FUN_0015f490(unit->data->id, 5, 0.9f, 0, (u16)skillId);
        }
    }
    if ((unit->data->flags & 8) != 0) {
        FUN_003ece9c(globals->state);
    }

    /* The message that announces the action. */
    if ((unit->data->flags & 1) != 0) {
        switch (unit->data->actionKind) {
        case 1:
            FUN_0047f08c(-1, 0);
            break;
        case 2:
            FUN_0047f08c(unit->data->actionArg, 0);
            break;
        case 8:
            FUN_0047f08c(0, unit->data->actionArg);
            break;
        case 9:
        case 10:
            if (FUN_003e7adc(globals->state) != 0 && FUN_004ab594(g_btlUiBlock) == 0) {
                FUN_0047f584();
            }
            break;
        }
    }
}

} /* extern "C" */
