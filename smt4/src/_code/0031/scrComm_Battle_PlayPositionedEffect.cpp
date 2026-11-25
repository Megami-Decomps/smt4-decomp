/* NON_MATCHING: 54 lines: the effect-set names are pooled pc-relative here but are shared objects in retail (DAT_00400428/34, also used by scrComm_Battle_PlayCommonEffect); retail keeps FUN_002454c4's constant 1 in r4 across the copy, and stores the slot loop's spilled unit/member parameters separately where this build pairs them (strd).
 * Copying the names as extern __align(4) 9-byte records DAT_00400428/34 gives retail's __ARM_common_memcpy4_9
 * (w93-s17), but they are string literals, not a record type; the alignment only picks the helper. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlEffect.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlGlobals.h"
#include "code/Code0024.h"
#include "code/Code0028_Smt4.h"
#include <string.h>

extern "C" {
extern u32 g_btlScriptUnit;
extern u32 g_btlEvent;
extern BtlEffectOwner *g_btlAux;
extern const char DAT_00400440[];
s32 scrGetArg(s32 index);
s32 isEntryUsable(u32 event); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "u32" is incompatible with parameter of type "int *")
s32 FUN_0024550c(BtlEffectOwner *owner);
void btlReflectQueueParameterTargetWithFollowup(s32 actor, u32 unit, BtlActionRecord *target, u32 value, s32 effect, s32 lookup, s32 extra);
void FUN_00282820(s32 position, u32 first, u32 second, s32 listedId, s32 layer, u32 mode, u32 kind, const char *text);
u32 libc_strlen(const char *text);

/* FUN_001b1a48's body (plain static: retail inlines it late, spilling its parameters): spawns the slot block's text effects, suppressing the conditional (kind 12)
 * labels of inactive entries. */
static void spawnSlotTexts(s32 side, u32 first, const BtlEffectSlotBlock *slots, s32 spacing, u32 second,
    s32 listedId)
{
    BtlMainState *battle = btlGetMainState();
    for (s32 index = 0; index < 4; ++index) {
        const char *text = slots->entries[index].name;
        if (libc_strlen(text) && strcmp(text, DAT_00400440)) {
            u32 kind = slots->entries[index].id;
            s32 offset = FUN_0028299c((Owner *)g_btlAux) * spacing;
            u32 mode = 2;
            if (side < 0)
                mode = 3;
            switch (kind) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 12:
                if (kind == 12 && listedId >= 0) {
                    BtlEntry *target = btlMainFindEntryByListedId(battle, listedId);
                    if (target != NULL && (target->flags & 2) == 0)
                        break;
                }
                FUN_00282820(slots->entries[index].unk10 + offset, first, second, listedId, 6, mode, kind,
                    slots->entries[index].name);
                break;
            }
        }
    }
}

/* Loads the common up (or down, for a negative effect) effect set (scrComm_Battle_PlayCommonEffect opens with the
 * same block). Retail addresses the two names as objects shared with that command: one file's pooled literals. */
static __inline void loadCommonEffectSet(s32 effect)
{
    char name[32] = {0};
    if (effect < 0)
        strcpy(name, "commonDw");
    else
        strcpy(name, "commonUp");
    FUN_002454c4(g_btlAux, name, 1, 0);
}

/* Script command: plays the common up/down effect (by the sign of arg 1) at every living party unit. */
u32 scrComm_Battle_PlayPositionedEffect(void)
{
    u32 value = scrGetArg(0);
    s32 effect = scrGetArg(1);
    if (isEntryUsable(g_btlEvent) && !FUN_0024550c(g_btlAux))
        return 0;
    if (effect != 0) {
        loadCommonEffectSet(effect);
        BtlMainState *main = btlGetMainState();
        u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
        s32 placed = 0;
        BtlEffectSlotBlock *slots = g_btlAux->slots;
        for (s32 i = 0; i < 4; i++) {
            BtlEntry *entry = &btlGetMainState()->entries[i];
            if ((entry->flags & 1) == 0 || (entry->flags & 0x40) != 0)
                continue;
            s16 action = entry->ids[0];
            if (action < 0)
                continue;
            BtlActionRecord *target = &main->actions[action];
            btlReflectQueueParameterTargetWithFollowup(placed << 3, unit, target, value, effect, i << 3, -1);
            s32 member = target->memberId;
            spawnSlotTexts(effect, unit, slots, placed, member, member);
            placed++;
        }
    }
    return 1;
}
}
