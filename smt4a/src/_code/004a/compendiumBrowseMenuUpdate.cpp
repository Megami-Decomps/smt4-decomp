#include "status/CompendiumBrowse.h"
#include "ui/ButtonHelp.h"
#include "common.h"
#include "code/Code002a.h"
#include "shard/Shard004A.h"
#include "sys/RuntimeObjects_EntryDispatch.h"
#include "ui/UiSpriteApi.h"
#include "code/Code0031_Smt4a.h"

/* Selection state of the animated page UI. */
struct AnimatedPageSelection {
    /* 0x00 */ u8 selected;
    /* 0x01 */ u8 pad[3];
    /* 0x04 */ s32 page;
};

extern "C" {

extern AnimatedPageSelection g_animatedPageSelection;

s32 useCounterIsFinished(void);
void pointConvertToFloat(void *pointer, u32 x, u32 y);
s32 gameGetMode(void);
s32 statusDownGetFlag(void);
s32 FUN_0035db94(void);
void uiSpriteBankApplyPreset(void *sprites, s32 preset);
s32 compendiumComputeSummonCost(u16 id, u8 page, s32 arg, s32 highPercent, s32 extra);
void messageBannerInitCounter(s32 a, s32 b);
s32 compendiumEntryIsRegistered(u16 id);
void panelSetTarget(s32 target, s32 arg);
void messageSetActiveMode(s32 mode);
s32 statusDownGetMode(void);
s32 inputIsQuestConfirmPressed(void);
void sendEvent100020D(void);
void sendEvent100020E(void);
void ifTouchGetButtonHelpValue(void);
void sysPlaySe(void);
void listCursorStepForward(void *list);
void listCursorStepBack(void *list);

/* Updates the status menu cursor, tab page toggle, and selection preview for one frame. */
void compendiumBrowseMenuUpdate(CompendiumBrowseWorkA *menu)
{
    if (useCounterIsFinished() == 0) {
        return;
    }

    entryDispatchUpdate((DispatchEntrySet *)menu->rowSprite, menu->mode);
    void *sprite = (u8 *)menu + menu->mode * 0x8c + 0xfc;
    u32 y = vec2GetYInt((const UiSpriteState *)sprite);
    u32 x = vec2GetXInt((const UiSpriteState *)sprite);
    pointConvertToFloat(menu->pointer, x, y);

    if (gameGetMode() != 0 && statusDownGetFlag() == 0) {
        menu->state = 0xc;
        menu->stateArg = 0;
        if (FUN_0035db94() == 1) {
            menu->mode = 8;
        } else {
            menu->mode = 10;
        }
        uiSpriteBankApplyPreset(menu->rowSprite, menu->mode);
        if (menu->browse.page.tabsActive != 0) {
            return;
        }
        s16 id = compendiumSelectedId(menu);
        s32 price = compendiumComputeSummonCost((u16)id, (u8)menu->browse.page.tabPage, 0, menu->compendiumPercent >= 100, 0);
        messageBannerInitCounter(1, 0);
        if (compendiumEntryIsRegistered((u16)id) != 0) {
            panelSetTarget(-price, 0);
            return;
        }
        messageSetActiveMode(1);
        return;
    }
    if (gameGetMode() != 0) {
        return;
    }
    if (menu->holder.count <= 0) {
        return;
    }

    s32 cursor = resourceDispatchTaggedOperation(&menu->holder);
    s32 page = FUN_0031d174(&menu->holder);
    if (statusDownGetMode() == 1) {
        listCursorStepForward(&menu->holder);
    } else if (statusDownGetMode() == -1) {
        listCursorStepBack(&menu->holder);
    } else if (menu->browse.page.tabsActive == 1) {
        if (inputIsQuestConfirmPressed() != 0) {
            s8 next = menu->browse.page.tabPage + 1;
            menu->browse.page.tabPage = next;
            if (next > 1) {
                menu->browse.page.tabPage = 0;
            }
            sendEvent100020E();
            menu->browse.page.viewing = 1;
            g_animatedPageSelection.page = -1;
            compendiumRefreshStatusPreview(menu);
            ifTouchGetButtonHelpValue();
            sysPlaySe();
        }
    }
    if (menu->browse.page.tabsActive == 1) {
        if (menu->browse.page.tabPage == 1) {
            buttonHelpSelectSlot(2, 4, 0x40, 1);
        } else {
            buttonHelpSelectSlot(2, 4, 0x41, 1);
        }
    }
    if (resourceDispatchTaggedOperation(&menu->holder) == cursor && FUN_0031d174(&menu->holder) == page) {
        return;
    }
    sendEvent100020D();
}

} /* extern "C" */
