/* NON_MATCHING: near (197 rows against 205): same control flow and calls; retail keeps the price in r7/menu flag in fp and tests the signed window/holder flag bytes with ldrsb, ours picks r8/sl and ldrb; retail also emits armcc nops around the calls */
#include "common.h"
#include "classes/Obj422448.h"
#include "code/Code0020.h"
#include "code/Code0023.h"
#include "shop/shopMain.h"

extern "C" {

struct ShopHolderInner {
    u8 pad00[0x60];
    s8 busy;                  /* 0x60 */
    u8 pad61[0x1F];
};

struct ShopHolder {
    u8 pad00[0x10];
    ShopHolderInner inner;    /* 0x10 */
};

struct StateWindow {
    u8 pad00[0x12];
    s8 active;                /* 0x12 */
    u8 pad13[5];
};

/* Skill-shop style list screen (observed fields only). */
struct SkillShopScreen {
    u8 pad00[0x14];
    u32 state;                /* 0x14 */
    u32 substate;             /* 0x18 */
    u8 pad1C[4];
    ShopHolder holder;        /* 0x20: value holder passed to the cursor helpers */
    u8 padB0[0x4AC];
    StateWindow window;       /* 0x55C */
    u8 pad574[0x2C];
    u32 scriptProcess;        /* 0x5A0 */
    u16 shownSkillId;         /* 0x5A4 */
    u8 pad5A6[2];
    s16 rowCount;             /* 0x5A8 */
};

struct SkillRecord {
    u16 helpId;               /* 0x00 */
    u8 pad02[0x9E];
    u16 skillId;              /* 0xA0 */
    u8 padA2[6];
};

u32 uiOwnerUpdateAnimationChannels(SkillShopScreen *screen);
s32 flaggedValueHolderGetTotal(ShopHolder *holder);
s32 messageTargetSetValue(u32 value, s32 arg);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 FUN_0027ee9c(void);
s8 uiStateGetFirstFlag(const void *state);
s8 uiSubStateGetReady(const StateWindow *window);
u32 FUN_002333f0(StateWindow *window);
s32 stateCounterBelowLimit(ShopHolder *holder, u32 value);
s32 FUN_00262cb0(u16 id);
s32 gameSlotTableGetHeader(void);
int scrScriptProcessStartEntry(u32 process, s32 entry);
int FUN_00288e68(...);
u32 aocIndexValueOrDefault(void);
int libc_strcpy(...);
int textEncodeFontSlot(...);
int FUN_0029ede8(...);
int messageMainSetTargetFlags(s32 flags);
int FUN_0029cc44(...);
int countdownSetModeFive(void);
int beginStatusPanelClose(void);
int FUN_0029ee6c(...);
int sortMenuCreate(...);
int FUN_0029e328(...);
int useCounterStart(void);
int FUN_0029dfc0(...);
int FUN_0029e0f8(void);
int FUN_0029dfa8(void);
SkillRecord *dataTable00FindById(s32 id);
int FUN_0029defc(...);
int statusPanelSetOpen(s32 open);

/* Per-frame update of the skill list screen: reacts to the menu/cancel/confirm buttons, charges or
 * rejects a purchase, and keeps the skill help panel in sync with the highlighted row. */
}

void Obj422448::FUN_003abed8()
{
    SkillShopScreen * screen = reinterpret_cast<SkillShopScreen *>(this);
    uiOwnerUpdateAnimationChannels(screen);
    u8 *base = (u8 *)screen;
    u32 price = *(u32 *)(base + flaggedValueHolderGetTotal(&screen->holder) * 0x20 + 0x5B4);
    messageTargetSetValue(-price, 0);

    s32 confirm = 0;
    s32 cancel = 0;
    s32 menuPressed = inputIsQuestMenuPressed();
    if (screen->rowCount > 0) {
        cancel = inputIsQuestCancelPressed();
        confirm = FUN_0027ee9c();
    }
    StateWindow *window = &screen->window;
    if (uiSubStateGetReady(window) != 0) {
        if (stateCounterBelowLimit(&screen->holder, FUN_002333f0(window)) != 0) {
            confirm = 1;
        }
    }
    u8 *rowBase = base + 0x5A8;
    if (FUN_00262cb0(*(u16 *)(rowBase + flaggedValueHolderGetTotal(&screen->holder) * 0x20 + 4)) == 0 && confirm != 0) {
        if ((u32)gameSlotTableGetHeader() < price) {
            scrScriptProcessStartEntry(screen->scriptProcess, 9);
            screen->state = 8;
            screen->substate = 0;
        } else {
            FUN_00288e68(*(u16 *)(rowBase + flaggedValueHolderGetTotal(&screen->holder) * 0x20 + 4));
            u8 text[36];
            libc_strcpy(text, aocIndexValueOrDefault());
            textEncodeFontSlot(20, text);
            FUN_0029ede8(24, price, -1, 0);
            scrScriptProcessStartEntry(screen->scriptProcess, 8);
            messageMainSetTargetFlags(1);
            screen->state = 5;
            screen->substate = 0;
        }
        FUN_002328b4();
    } else if (menuPressed != 0) {
        FUN_0029cc44(1);
        countdownSetModeFive();
        beginStatusPanelClose();
        FUN_0029ee6c(0, 0x323232FF);
        screen->state = 10;
        screen->substate = 0;
        FUN_00232848();
    } else if (cancel != 0) {
        sortMenuCreate(16, 0);
        FUN_0029e328(11);
        FUN_0029e328(7);
        FUN_0029e328(15);
        FUN_0029e328(17);
        FUN_0029e328(3);
        useCounterStart();
        screen->state = 4;
        screen->substate = 0;
        FUN_0029ee6c(0, 0x323232FF);
        FUN_002328b4();
    }

    if (screen->rowCount == 0) {
        FUN_0029dfc0(0);
        return;
    }
    if (FUN_0029e0f8() == 0) {
        return;
    }
    u16 skillId = *(u16 *)(rowBase + flaggedValueHolderGetTotal(&screen->holder) * 0x20 + 4);
    if (screen->shownSkillId == skillId) {
        return;
    }
    if (uiStateGetFirstFlag(&screen->holder.inner) != 0) {
        FUN_0029dfc0(0);
        return;
    }
    if (FUN_0029dfa8() != 0) {
        return;
    }
    screen->shownSkillId = skillId;
    SkillRecord *rec = dataTable00FindById(0);
    for (s32 i = 0; i <= 1200; i++, rec++) {
        if (rec->skillId == screen->shownSkillId) {
            u16 help = rec->helpId;
            if (help == 0) {
                return;
            }
            FUN_0029defc((s16)help, 0);
            FUN_0020349c(screen->shownSkillId);
            statusPanelSetOpen(1);
            return;
        }
    }
}
