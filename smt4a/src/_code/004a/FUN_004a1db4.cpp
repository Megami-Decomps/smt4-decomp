/* NON_MATCHING: readable rewrite compiles (172 vs 173 rows); retail uses a larger callee-saved set (push {r3-r9,lr}) and different register allocation */
#include "common.h"

// Selection state of the animated page UI.
struct AnimatedPageSelection {
    u8 selected;        // 0x00
    u8 pad[3];
    s32 page;           // 0x04
};

// Quest/status menu screen: only the members the update touches.
struct StatusMenu {
    u8 unk00[0x14];
    u32 state;              // 0x14
    u32 stateArg;           // 0x18
    u8 unk1c[4];
    u8 list[8];             // 0x20 (flagged value holder)
    s32 itemCount;          // 0x28
    u8 unk2c[0xc8 - 0x2c];
    u8 pointer[0xdc - 0xc8];    // 0xc8
    u8 rowSprite[0xa874 - 0xdc];// 0xdc
    s16 mode;               // 0xa874
};

extern "C" {

extern AnimatedPageSelection g_animatedPageSelection;

s32 useCounterIsFinished(void);
void entryDispatchUpdate(void* sprite, s32 mode);
u32 vec2GetXInt(void* sprite);
u32 vec2GetYInt(void* sprite);
void pointConvertToFloat(void* pointer, u32 x, u32 y);
s32 gameGetMode(void);
s32 statusDownGetFlag(void);
s32 FUN_0035db94(void);
void uiSpriteBankApplyPreset(void* sprites, s32 preset);
s32 flaggedValueHolderGetTotal(void* list);
void FUN_004a8750(u32 id, s32 page, s32 arg);
void FUN_0037c8e4(s32 a, s32 b);
s32 FUN_002a4b28(u16 id);
void panelSetTarget(s32 target, s32 arg);
void messageSetActiveMode(s32 mode);
s32 FUN_002a482c(void* list);
s32 FUN_0031d174(void* list);
s32 statusDownGetMode(void);
s32 inputIsQuestConfirmPressed(void);
void sendEvent100020D(void);
void sendEvent100020E(void);
void FUN_004a3b48(StatusMenu* menu);
void ifTouchGetButtonHelpValue(void);
void sysPlaySe(void);
void FUN_004d0100(void* list);
void FUN_004d01f8(void* list);
void FUN_00183f58(s32 a, s32 b, s32 c, s32 d);

#define MENU_BYTE(menu, offset) (*(reinterpret_cast<u8*>(menu) + (offset)))

// Per-frame update of the status menu: follows the cursor, handles page changes and confirm.
void FUN_004a1db4(StatusMenu* menu)
{
    if (useCounterIsFinished() == 0) return;

    entryDispatchUpdate(menu->rowSprite, menu->mode);
    void* sprite = reinterpret_cast<u8*>(menu) + menu->mode * 0x8c + 0xfc;
    u32 y = vec2GetYInt(sprite);
    u32 x = vec2GetXInt(sprite);
    pointConvertToFloat(menu->pointer, x, y);

    if (gameGetMode() != 0 && statusDownGetFlag() == 0) {
        menu->state = 0xc;
        menu->stateArg = 0;
        u16 mode = (FUN_0035db94() == 1) ? 8 : 10;
        menu->mode = mode;
        uiSpriteBankApplyPreset(menu->rowSprite, mode);
        if (MENU_BYTE(menu, 0x860) != 0) return;
        u16 id = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(menu) + flaggedValueHolderGetTotal(menu->list) * 0x20 + 0x868);
        FUN_004a8750(id, MENU_BYTE(menu, 0x861), 0);
        FUN_0037c8e4(1, 0);
        if (FUN_002a4b28(id) != 0) {
            panelSetTarget(-(s32)id, 0);
            return;
        }
        messageSetActiveMode(1);
        return;
    }
    if (gameGetMode() != 0) return;
    if (menu->itemCount < 1) return;

    s32 cursor = FUN_002a482c(menu->list);
    s32 page = FUN_0031d174(menu->list);
    if (statusDownGetMode() != 1) {
        if (statusDownGetMode() != -1) {
            if (MENU_BYTE(menu, 0x860) != 1) {
                if (FUN_002a482c(menu->list) == cursor && FUN_0031d174(menu->list) == page) return;
                sendEvent100020D();
                return;
            }
            if (inputIsQuestConfirmPressed() != 0) {
                s8 next = MENU_BYTE(menu, 0x861) + 1;
                MENU_BYTE(menu, 0x861) = next;
                if (next > 1) MENU_BYTE(menu, 0x861) = 0;
                sendEvent100020E();
                MENU_BYTE(menu, 0x863) = 1;
                g_animatedPageSelection.page = -1;
                FUN_004a3b48(menu);
                ifTouchGetButtonHelpValue();
                sysPlaySe();
            }
        } else {
            FUN_004d01f8(menu->list);
        }
    } else {
        FUN_004d0100(menu->list);
    }
    if (MENU_BYTE(menu, 0x860) == 1) {
        if (MENU_BYTE(menu, 0x861) != 1) {
            FUN_00183f58(2, 4, 0x41, 1);
        } else {
            FUN_00183f58(2, 4, 0x40, 1);
        }
    }
    if (FUN_002a482c(menu->list) == cursor && FUN_0031d174(menu->list) == page) return;
    sendEvent100020D();
}

} /* extern "C" */
