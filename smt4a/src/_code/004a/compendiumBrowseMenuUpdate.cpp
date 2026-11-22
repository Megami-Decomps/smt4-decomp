/* NON_MATCHING: 6 lines: retail computes the entry array's base (menu + 0x864) into a saved register before the
 * flaggedValueHolderGetTotal call; this build adds it after the call. Only a single-use base pointer local
 * reproduces it (steering, not kept; same pattern as smt4 devilListUpdatePreview). */
#include "ui/ButtonHelp.h"
#include "common.h"
#include "code/Code002a.h"
#include "shard/Shard004A.h"
#include "sys/RuntimeObjects_EntryDispatch.h"
#include "ui/UiSpriteApi.h"

/* Selection state of the animated page UI. */
struct AnimatedPageSelection {
    /* 0x00 */ u8 selected;
    /* 0x01 */ u8 pad[3];
    /* 0x04 */ s32 page;
};

/* Compendium/status menu entry (0x20 bytes; id halfword at +4). */
struct StatusMenuEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];

    u16 getId() const { return id; }
};

/* Quest/status menu screen: only the members the update touches. */
struct StatusMenu {
    /* 0x0000 */ u8 unk00[0x14];
    /* 0x0014 */ u32 state;
    /* 0x0018 */ u32 stateArg;
    /* 0x001C */ u8 unk1c[4];
    /* 0x0020 */ u8 list[8];             /* flagged value holder */
    /* 0x0028 */ s32 itemCount;
    /* 0x002C */ u8 unk2c[0x94 - 0x2c];
    /* 0x0094 */ s8 compendiumPercent;
    /* 0x0095 */ u8 unk95[0xc8 - 0x95];
    /* 0x00C8 */ u8 pointer[0xdc - 0xc8];
    /* 0x00DC */ u8 rowSprite[0x860 - 0xdc];
    /* 0x0860 */ s8 tabsActive;
    /* 0x0861 */ s8 tabPage;
    /* 0x0862 */ u8 unk862;
    /* 0x0863 */ u8 refreshFlag;
    /* 0x0864 */ StatusMenuEntry entries[1];
    /* 0x0884 */ u8 unk884[0xa874 - 0x884];
    /* 0xA874 */ s16 mode;
};

extern "C" {

extern AnimatedPageSelection g_animatedPageSelection;

s32 useCounterIsFinished(void);
void pointConvertToFloat(void *pointer, u32 x, u32 y);
s32 gameGetMode(void);
s32 statusDownGetFlag(void);
s32 FUN_0035db94(void);
void uiSpriteBankApplyPreset(void *sprites, s32 preset);
s32 FUN_004a8750(u16 id, u8 page, s32 arg, s32 highPercent, s32 extra);
void messageBannerInitCounter(s32 a, s32 b);
s32 compendiumEntryIsRegistered(u16 id);
void panelSetTarget(s32 target, s32 arg);
void messageSetActiveMode(s32 mode);
s32 FUN_0031d174(void *list); /* declcheck: local (Code0031_Smt4a.h declares void return) */
s32 statusDownGetMode(void);
s32 inputIsQuestConfirmPressed(void);
void sendEvent100020D(void);
void sendEvent100020E(void);
void FUN_004a3b48(StatusMenu *menu);
void ifTouchGetButtonHelpValue(void);
void sysPlaySe(void);
void listCursorStepForward(void *list);
void listCursorStepBack(void *list);

/* Updates the status menu cursor, tab page toggle, and selection preview for one frame. */
void compendiumBrowseMenuUpdate(StatusMenu *menu)
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
        if (menu->tabsActive != 0) {
            return;
        }
        s16 id = menu->entries[flaggedValueHolderGetTotal((const FlaggedValueHolder *)menu->list)].getId();
        s32 price = FUN_004a8750((u16)id, (u8)menu->tabPage, 0, menu->compendiumPercent >= 100, 0);
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
    if (menu->itemCount <= 0) {
        return;
    }

    s32 cursor = resourceDispatchTaggedOperation(menu->list);
    s32 page = FUN_0031d174(menu->list);
    if (statusDownGetMode() == 1) {
        listCursorStepForward(menu->list);
    } else if (statusDownGetMode() == -1) {
        listCursorStepBack(menu->list);
    } else if (menu->tabsActive == 1) {
        if (inputIsQuestConfirmPressed() != 0) {
            s8 next = menu->tabPage + 1;
            menu->tabPage = next;
            if (next > 1) {
                menu->tabPage = 0;
            }
            sendEvent100020E();
            menu->refreshFlag = 1;
            g_animatedPageSelection.page = -1;
            FUN_004a3b48(menu);
            ifTouchGetButtonHelpValue();
            sysPlaySe();
        }
    }
    if (menu->tabsActive == 1) {
        if (menu->tabPage == 1) {
            buttonHelpSelectSlot(2, 4, 0x40, 1);
        } else {
            buttonHelpSelectSlot(2, 4, 0x41, 1);
        }
    }
    if (resourceDispatchTaggedOperation(menu->list) == cursor && FUN_0031d174(menu->list) == page) {
        return;
    }
    sendEvent100020D();
}

} /* extern "C" */
