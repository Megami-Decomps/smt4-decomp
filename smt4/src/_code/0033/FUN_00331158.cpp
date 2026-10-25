/* NON_MATCHING: 211 rows versus retail 209: successful selection shares its argument-setup tail with the final SELECT event instead of the common event-call tail. */
#include "common.h"
#include "shard/FUN_00299bc4.h"

extern "C" {

#define CAMP_LIST_A 11
#define CAMP_LIST_B 12
#define CAMP_LIST_C 13

#define CAMP_EVENT_SELECT 0x100016D
#define CAMP_EVENT_CANCEL 0x100016E

struct CampList {
    u8 data[0x64];
};

/* Camp work (observed fields only). */
struct CampWork {
    u8 pad00[0x14];
    u32 substep;               /* 0x14 */
    u32 state;                 /* 0x18 */
    s32 phase;                 /* 0x1C */
    u32 returnState;           /* 0x20: state to come back to */
    u32 previousState;         /* 0x24 */
    u8 pad28[4];
    u32 selectedId;            /* 0x2C */
    u8 pad30[1];
    u8 helpStatus;             /* 0x31 */
    u8 pad32[2];
    u8 headPart[0x98 - 0x34];  /* 0x34: object part */
    s8 category;               /* 0x98 */
    u8 pad99[0xB0 - 0x99];
    CampList listA;            /* 0x0B0 */
    CampList listB;            /* 0x114 */
    CampList listC;            /* 0x178 */
    u8 pad1DC[0x6D4 - 0x1DC];
    u8 timer[4];               /* 0x6D4 */
    u8 pad6D8[0xE02 - 0x6D8];
    s16 scrollTop;             /* 0xE02 */
    s16 scrollLines;           /* 0xE04 */
    s16 scrollSpacing;         /* 0xE06 */
    u8 padE08[4];
    u8 scrollState[0x147C - 0xE0C];  /* 0xE0C */
    u16 idTable[1];            /* 0x147C: ids indexed by list position */
};

extern CampWork *g_camp;

s32 guestWinRequestClose(void);
s32 FUN_0028fc60(u32 id);
void campReleaseScreenTouchRegions(CampList *list, s32 flag);
s32 dataTable15GetUnlockedEntryId(s32 category, u32 part);
void FUN_00299900(s32 arg);
void FUN_0029cc44(s32 arg);
void FUN_0029e328(s32 id);
void sortMenuCreate(s32 id, s32 arg);
void FUN_0029ee6c(s32 a, u32 color);
s32 FUN_0029efa8(CampList *list);
s32 FUN_0029efc0(CampList *list);
s32 FUN_0029efd8(CampList *list, s32 flag);
s32 uiScrollHandleActionsOrTouch(CampList *list, u32 text, u8 *state, s32 top, s32 lines, s32 spacing, s8 *touched, s32 a, s32 b);
void eventQueueAddUniqueIfValid(u32 event);
void timerStart(u8 *timer, s32 kind, s32 arg);
s32 FUN_002c1658(s32 button, s32 mode);
u32 objectPartRunUnlessLocked(u8 *part);
u8 buttonHelpGetStatus(void);
u32 asdTMTexTableEntryAt(u32 a, u32 b);

/* Switches the camp to `state`, remembering the previous one. */
static void campChangeState(u32 state)
{
    CampWork *camp = g_camp;

    camp->previousState = camp->state;
    camp->state = state;
    camp->phase = 0;
    camp->substep = 0;
}

/* Input handling for one of the three camp list screens (`kind` 11, 12 or 13). */
void FUN_00331158(s32 kind)
{
    CampWork *camp = g_camp;
    CampList *list = 0;

    if (kind == CAMP_LIST_A) {
        list = &camp->listA;
    } else if (kind == CAMP_LIST_B) {
        list = &camp->listB;
    } else if (kind == CAMP_LIST_C) {
        list = &camp->listC;
    }

    if (camp->phase == 0) {
        FUN_00299bc4(list, 1);
        camp->phase = camp->phase + 1;
        return;
    }
    if (camp->phase != 1) {
        return;
    }

    s8 touched = 0;
    u32 text = asdTMTexTableEntryAt(0x1D, 0x56D);
    s32 confirmed = uiScrollHandleActionsOrTouch(list, text, camp->scrollState, camp->scrollTop, camp->scrollLines,
                                                 camp->scrollSpacing, &touched, 0, 1);
    if (confirmed != 0 || FUN_0029efd8(list, 1) != 0) {
        u32 part = objectPartRunUnlessLocked(camp->headPart);
        FUN_00299900(dataTable15GetUnlockedEntryId(camp->category, part));
        return;
    }

    if ((FUN_002c1658(0, 1) | touched) != 0 && kind == CAMP_LIST_A) {
        s32 index = FUN_0029efc0(list) + FUN_0029efa8(list);
        u32 id = camp->idTable[index];
        if (FUN_0028fc60(id) != 0) {
            camp->selectedId = camp->idTable[index];
            timerStart(camp->timer, 3, 0);
            camp->returnState = 11;
            campChangeState(5);
            campReleaseScreenTouchRegions(list, 1);
            guestWinRequestClose();
            FUN_0029cc44(1);
            return eventQueueAddUniqueIfValid(CAMP_EVENT_SELECT);
        }
        return eventQueueAddUniqueIfValid(CAMP_EVENT_CANCEL);
    }

    if (FUN_002c1658(1, 1) != 0) {
        FUN_00299900(0);
        timerStart(camp->timer, 3, 0);
        camp->returnState = 6;
        campChangeState(5);
        campReleaseScreenTouchRegions(list, 1);
        return eventQueueAddUniqueIfValid(CAMP_EVENT_CANCEL);
    }

    if (FUN_002c1658(9, 1) == 0) {
        return;
    }
    if (kind == CAMP_LIST_B) {
        return;
    }
    if (kind == CAMP_LIST_A) {
        sortMenuCreate(3, 0);
        FUN_0029e328(12);
        FUN_0029e328(16);
        FUN_0029e328(3);
    } else if (kind == CAMP_LIST_C) {
        sortMenuCreate(4, 0);
        FUN_0029e328(33);
        FUN_0029e328(16);
        FUN_0029e328(3);
    }
    FUN_0029ee6c(0, 0x323232FF);
    camp->helpStatus = buttonHelpGetStatus();
    campChangeState(40);
    eventQueueAddUniqueIfValid(CAMP_EVENT_SELECT);
}

} /* extern "C" */
