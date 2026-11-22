/* NON_MATCHING: 64 lines: uses PartnerSelectMenu and 4-arg partnerMenuStartPanelSlide; retail keeps the party-slot loop fallthrough in r4 via fp and outlines the 0x118 sound tail after pop. */
#include "ui/PartnerSelectMenu.h"
#include "ui/ButtonHelp.h"
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "common.h"

#include <string.h>

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sScreenPositionKeys[] = {
    {320, 0, 0, 0, 8, 0, 0},
    {-320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {0, 0, 320, 0, 4, 0, 0},
    {30, 0, 0, 0, 4, 0, 0},
    {-30, 0, 0, 0, 4, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {0, 0, 30, 0, 3, 0, 0},
};
static const UiSpriteScalarKey sScreenAlphaKeys[] = {
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
};

extern "C" {

extern u8 g_callbackOwnerSlots;
extern const char DAT_0052d820[];
extern const char DAT_0052d80c[];
extern const char DAT_0052d7f8[];

void __aeabi_memset4(void *destination, u32 size, s32 value);
void gridNavigationConfigure(void *list, s32 count, s32 rows, s32 columns, s32 a, s32 b);
void gameGlobalsSetOverlayActive(s32 arg);
void unitStatusResetSpriteState(void);
void sysPlaySe(u32 id);
void paramsClearPacket(void *packet);
u8 FUN_002857b8(void);

/* Starts the partner screen in `mode`: lists the owned partners (their party slot, 0 when not in
 * the party), finds the selected one, loads the help/message/script files, builds the list and
 * plays the matching sound. */
void partnerMenuHandleSelectionInput(PartnerSelectMenu *menu, u32 mode)
{
    menu->itemId = 0;
    menu->mode = (u8)mode;
    memset(menu->usable, 1, sizeof(menu->usable));
    s32 count = 0;
    u16 selectedId = 0;
    PartySlotA *selected = saveSlotFindSelected();

    if (selected != NULL) {
        selectedId = selected->id;
    }
    menu->current = -1;
    __aeabi_memset4(menu->slots, sizeof(menu->slots), -1);
    for (s32 i = 0; i < PARTNER_MENU_SLOTS; i++) {
        PartySlotA *unit = FUN_00187068(i);

        if ((unit->flags & 1) == 0) {
            continue;
        }
        if (unit->id == selectedId && selectedId != 0) {
            menu->current = count;
        }
        s32 j;
        for (j = 0; j < PARTNER_MENU_SLOTS; j++) {
            if (partyGetSlot((u16)j)->id == unit->id) {
                break;
            }
        }
        if (j == PARTNER_MENU_SLOTS) {
            j = 0;
        }
        menu->slots[count++] = j;
    }
    menu->count = count;
    asdLoadFileAsyncSimple(DAT_0052d820, (u32 *)&menu->helpFile, 0);
    asdLoadFileAsyncSimple(DAT_0052d80c, &menu->messageFile, 0);
    asdLoadFileAsyncSimple(DAT_0052d7f8, (u32 *)&menu->scriptTable, 0);
    if (menu->mode == 1) {
        gridNavigationConfigure(&menu->list, count, count, 1, 1, 1);
        sysPlaySe(0x11F);
    } else {
        s32 rows = count / PARTNER_MENU_COLUMNS;
        if (count % PARTNER_MENU_COLUMNS > 0) {
            rows++;
        }
        gridNavigationConfigure(&menu->list, count, rows, PARTNER_MENU_COLUMNS, 1, 1);
        gameGlobalsSetOverlayActive(1);
        unitStatusResetSpriteState();
        if (menu->mode != PARTNER_MENU_MODE_ITEM) {
            if (menu->count > 0) {
                if (menu->slots[menu->selected] == menu->slots[menu->current]) {
                    sysPlaySe(0x11B);
                } else {
                    sysPlaySe(0xF0);
                }
            } else {
                sysPlaySe(0x118);
            }
        } else if (menu->count > 0) {
            sysPlaySe(0xF0);
            buttonHelpSelectSlot(5, 1, 1, 1);
        } else {
            sysPlaySe(0x118);
        }
        paramsClearPacket(menu->unk010);
        paramsInit((UiResourceParameters *)menu->unk010, sScreenPositionKeys, sizeof(sScreenPositionKeys), sScreenAlphaKeys, sizeof(sScreenAlphaKeys), NULL, 0, 0, 0, NULL, 0);
        for (s32 i = 0; i < 4; i++) {
            uiSpriteStateInitFromSource((UiSpriteState *)((u8 *)menu + 0x30 + i * 0x8C), 0x11, 0, (UiResourceParameters *)menu->unk010, 0x6A, 1.0f);
        }
        partnerMenuStartPanelSlide(menu, 0, -1, 0);
        menu->slideDirection = 0;
    }
    menu->state = 1;
    g_callbackOwnerSlots = FUN_002857b8();
}

}
