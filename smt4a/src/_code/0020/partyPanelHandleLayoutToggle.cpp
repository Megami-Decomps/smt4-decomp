#include "common.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

/* The party panel past PartyPanelStateA's canonical prefix (only the fields used here). */
struct PartyPanelMenu {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ s32 state;
    /* 0x020 */ u8 unk020[0xC];
    /* 0x02C */ s32 columns;
    /* 0x030 */ s32 pages;
    /* 0x034 */ u8 unk034[0xE];
    /* 0x042 */ s8 alternate;
    /* 0x043 */ u8 unk043[0x485];
    /* 0x4C8 */ UiSpriteKeyframeState alternateSprite;
    /* 0x4C8 */ u8 unk4C8[0xA10 - 0x4C8 - sizeof(UiSpriteKeyframeState)];
    /* 0xA10 */ void *characters[4];
    /* 0xA20 */ void *demons[0x18];
    /* 0xA80 */ u8 unkA80[0xC88 - 0xA80];
    /* 0xC88 */ ScrollSelection lists[4];
    /* 0xE18 */ u8 unkE18[0x1210 - 0xE18];
    /* 0x1210 */ u8 busy;
};

extern "C" {
extern PartyPanelMenu *g_partyPanel;
s32 FUN_001517b4(s32 key, s32 mode);
void scrollOwnerSelectIndex(ScrollSelection *owner, s32 index);
void objClearFlagPair(ScrollSelection *object);
void FUN_0026fa30(void);
void FUN_003f5220(void *widget, u32 slot);
void slotPlacementStartTransition(void *widget, u8 mode);
void FUN_0023e908(void);
void useCounterStart(void);
void sortMenuAcquire(u32 owner, u8 option);
void FUN_0020b718(s32 state, s32 rememberPrevious);
s32 FUN_003343f0(s32 value);

/* The party panel's help-view toggle: flips the alternate layout, reselects the matching list entry in
 * the list that takes over and restarts the widget placement transitions. Without the toggle key it opens
 * the sort menu instead. */
u32 partyPanelHandleLayoutToggle(s32 enabled)
{
    u32 result = 0;
    PartyPanelMenu *panel = g_partyPanel;
    if (FUN_001517b4(10, 1) != 0) {
        panel->alternate ^= 1;
        if (panel->alternate != 0)
            uiSpriteSetKeyframe(&panel->alternateSprite, 6, 0);
        else
            uiSpriteSetKeyframe(&panel->alternateSprite, 4, 0);
        eventQueueAddUniqueIfValid(0x100020e);
        switch (panel->state) {
        case 6:
            if (panel->alternate != 0) {
                scrollOwnerSelectIndex(&panel->lists[1], FUN_002a4878(&panel->lists[0]));
                FUN_002a4964(&panel->lists[1], panel->columns * 3 + FUN_002a4894(&panel->lists[0]));
            } else {
                if (FUN_002a4894(&panel->lists[1]) >= 3 && panel->pages > 1)
                    panel->columns = 1;
                else
                    panel->columns = 0;
                FUN_0026fa30();
                scrollOwnerSelectIndex(&panel->lists[0], FUN_002a4878(&panel->lists[1]));
                if (FUN_002a4894(&panel->lists[1]) >= 3) {
                    if (panel->pages > 1)
                        FUN_002a4964(&panel->lists[0], FUN_002a4894(&panel->lists[1]) - panel->columns * 3);
                    else
                        FUN_002a4964(&panel->lists[0], 2);
                } else {
                    FUN_002a4964(&panel->lists[0], FUN_002a4894(&panel->lists[1]));
                }
                objClearFlagPair(&panel->lists[0]);
            }
            break;
        case 8:
            if (panel->alternate != 0) {
                scrollOwnerSelectIndex(&panel->lists[3], FUN_002a4878(&panel->lists[2]));
                if (FUN_002a4894(&panel->lists[2]) < 1)
                    FUN_002a4964(&panel->lists[3], 0);
                else
                    FUN_002a4964(&panel->lists[3], panel->columns * 3 + FUN_002a4894(&panel->lists[2]));
            } else {
                if (FUN_002a4894(&panel->lists[3]) >= 4 && panel->pages > 1)
                    panel->columns = 1;
                else
                    panel->columns = 0;
                FUN_0026fa30();
                scrollOwnerSelectIndex(&panel->lists[2], FUN_002a4878(&panel->lists[3]));
                if (FUN_002a4894(&panel->lists[3]) >= 4) {
                    if (panel->pages > 1)
                        FUN_002a4964(&panel->lists[2], FUN_002a4894(&panel->lists[3]) - panel->columns * 3);
                    else
                        FUN_002a4964(&panel->lists[2], 3);
                } else {
                    FUN_002a4964(&panel->lists[2], FUN_002a4894(&panel->lists[3]));
                }
                objClearFlagPair(&panel->lists[2]);
            }
            break;
        }
        for (s32 i = 0; i < 4; i++) {
            FUN_003f5220(panel->characters[i], panel->columns);
            slotPlacementStartTransition(panel->characters[i], panel->alternate == 1);
        }
        for (s32 i = 0; i < 0x18; i++) {
            FUN_003f5220(panel->demons[i], panel->columns);
            slotPlacementStartTransition(panel->demons[i], panel->alternate == 1);
        }
        if (panel->state != 1)
            FUN_0023e908();
        result = 1;
    } else if (enabled != 0 && panel->busy == 0 && FUN_002a7410() == 0 && FUN_001517b4(9, 1) != 0) {
        sortMenuAcquire(0, 0);
        FUN_0031f208(2);
        FUN_0031f208(1);
        FUN_0031f208(4);
        FUN_0031f208(5);
        FUN_0031f208(0x1f);
        FUN_0031f208(3);
        useCounterStart();
        FUN_0020b718(0xf, 1);
        FUN_003343f0(1);
        eventQueueAddUniqueIfValid(0x100020e);
        result = 1;
    }
    return result;
}
}
