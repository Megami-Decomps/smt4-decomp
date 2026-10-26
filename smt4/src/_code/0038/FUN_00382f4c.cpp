/* NON_MATCHING: readable rebuild of a shop/menu choice handler (the draft's lost return of FUN_002c1658 restored as its condition; the two small byte tables it indexes are read as the draft's raw addresses); armcc here shares the result tail and the choice-result reloads differently. */
#include "common.h"
#include "code/Code0023_Smt4.h"

/* The choice menu (only the fields the handler reads). */
struct ChoiceMenu {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 subState;
    /* 0x00C */ u8 unk00C[0xC];
    /* 0x018 */ u8 inTown;
    /* 0x019 */ u8 unk019[7];
    /* 0x020 */ u8 table[0x5A4];
    /* 0x5C4 */ u32 **script;
    /* 0x5C8 */ u8 unk5C8[0x78D];
    /* 0xD55 */ u8 closed;
    /* 0xD56 */ u8 unkD56[0x266];
    /* 0xFBC */ s32 result;
};

extern "C" {
extern const u8 DAT_00405718[];
extern const u8 DAT_0040571b[];

s32 scrRunOpcodesStub(u32 script);
s32 messageWindowIsState1(void);
s32 messageTargetGetValue(void);
u32 dataTable28Sub1GetRecord(void *table, u8 index);
void FUN_0029ee6c(u32 record, u32 color);
s32 FUN_002d8e10(void);
s32 FUN_002485b8(void);
void FUN_0029cc44(s32 flag);
void messageBannerInitSelection(s32 a, s32 b);
void messageTargetSetValue(u32 value, s32 flag);
void messageMainSetTargetFlags(s32 flags);
s32 FUN_002c1658(s32 a, s32 b);
s32 gameFlagIsSet(u32 flag);
void eventQueueAddUnique(s32 event);
void FUN_00269dc8(void);
void FUN_00223cf0(void);
void FUN_002636b0(void);
void FUN_002f6208(void);
s32 messageMainGetChoiceResult(void);
void messageBannerBeginClose(void);

/* Handles the choice window: while its script runs it previews the highlighted record and, once
 * the choice is made, starts the matching sub-state (or closes). Records the choice in `result`. */
void FUN_00382f4c(ChoiceMenu *menu)
{
    if (scrRunOpcodesStub(**menu->script) != 2) {
        if (messageWindowIsState1() != 0) {
            s32 value = messageTargetGetValue();
            const u8 *table = menu->inTown == 0 ? DAT_00405718 : DAT_0040571b;
            FUN_0029ee6c(dataTable28Sub1GetRecord(menu->table, table[value]), 0x323232FF);
            if (value != -1) {
                if (menu->inTown != 0) {
                    if (value != 0) {
                        if (FUN_002d8e10() != 0)
                            FUN_0029cc44(0);
                    } else if (FUN_002485b8() == 0) {
                        messageBannerInitSelection(1, 0);
                        messageTargetSetValue(0xFFFFFF9C, 0);
                        messageMainSetTargetFlags(1);
                    }
                }
                if (FUN_002c1658(10, 1) != 0 && gameFlagIsSet(0x24) != 0) {
                    eventQueueAddUnique(0x100016F);
                    FUN_00269dc8();
                    FUN_00223cf0();
                    FUN_002636b0();
                    menu->closed = 0;
                    menu->result = messageTargetGetValue();
                    if (menu->inTown != 0 && messageTargetGetValue() == 0) {
                        menu->closed = 1;
                        FUN_0029cc44(0);
                    }
                    FUN_002f6208();
                    menu->state = 11;
                    menu->subState = 0;
                }
            }
        }
        return;
    }
    FUN_002355ac(0);
    s32 choice = messageMainGetChoiceResult();
    if (menu->inTown != 0) {
        switch (choice) {
        case 0:
            FUN_002636b0();
            menu->state = 7;
            menu->subState = 0;
            break;
        case 1:
            if (FUN_002485b8() != 0)
                FUN_0029cc44(0);
            FUN_002636b0();
            menu->state = 8;
            menu->subState = 0;
            break;
        case 2:
            if (FUN_002485b8() != 0)
                FUN_0029cc44(0);
            FUN_002636b0();
            menu->subState = 0;
            menu->state = 9;
            break;
        case 3:
            if (FUN_002485b8() != 0)
                FUN_0029cc44(0);
            FUN_002636b0();
            menu->state = 10;
            menu->subState = 0;
            FUN_0029cc44(0);
            break;
        case -1:
            if (FUN_002485b8() != 0)
                FUN_0029cc44(0);
            messageBannerBeginClose();
            menu->state = 15;
            menu->subState = 0;
            break;
        }
    } else {
        if (choice != -1) {
            if (choice == 0) {
                FUN_002636b0();
                menu->state = 8;
                menu->subState = 0;
            } else if (choice == 1) {
                FUN_002636b0();
                menu->state = 9;
                menu->subState = 0;
            } else if (choice == 2) {
                FUN_002636b0();
                menu->state = 10;
                menu->subState = 0;
            }
        } else {
            menu->subState = 0;
            menu->state = 15;
            messageBannerBeginClose();
        }
    }
    if (messageMainGetChoiceResult() != -1)
        menu->result = messageMainGetChoiceResult();
    else
        menu->result = 0;
}

} /* extern "C" */
