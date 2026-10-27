/* NON_MATCHING: readable rewrite, control flow and instruction set match retail; remaining diffs: retail keeps r2/r3 across the uiClampScrollOffset calls (needs multifile), converts both centre values before the subtractions (vstmia of corner), sign-extends the page and the owner flag with ldrsb/sxth, and shares one base register for the model block. */
#include "common.h"
#include "ui/ScreenObject.h"

/* The model object the info panel shows (observed prefix). */
struct PanelModelOwner {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s8 locked;
};

/* What the panel's selection currently points at. */
struct PanelSelection {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 centerX;
    /* 0x24 */ s16 centerY;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ s16 kind;
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ s8 modelIndex;
};

struct PanelRecord {
    /* 0x00 */ u8 unk00[0x86];
    /* 0x86 */ u16 locked;
};

struct PanelPair {
    u32 first;
    u32 second;
};

struct PanelPoint {
    f32 x;
    f32 y;
};

/* The info panel's work area (only the fields the update touches). */
struct PanelWork {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 flags;
    /* 0x0024 */ u8 unk0024[4];
    /* 0x0028 */ u32 state;
    /* 0x002C */ u32 phase;
    /* 0x0030 */ u8 unk0030[0xC];
    /* 0x003C */ s16 mode;
    /* 0x003E */ u8 unk003E[0xE];
    /* 0x004C */ s16 page;
    /* 0x004E */ u8 unk004E[0xA];
    /* 0x0058 */ PanelPair view;
    /* 0x0060 */ PanelPair viewCopy;
    /* 0x0068 */ PanelPoint corner;
    /* 0x0070 */ PanelPair target;
    /* 0x0078 */ PanelPair targetCopy;
    /* 0x0080 */ PanelPoint center;
    /* 0x0088 */ s32 scrollFrame;
    /* 0x008C */ s32 scrollLength;
    /* 0x0090 */ u8 unk0090[0xC];
    /* 0x009C */ u8 selection[0x632];
    /* 0x06CE */ u8 refreshed;
    /* 0x06CF */ u8 unk06CF[0x68D];
    /* 0x0D5C */ PanelRecord *record;
    /* 0x0D60 */ u8 unk0D60[0xF8];
    /* 0x0E58 */ u8 recordShown;
    /* 0x0E59 */ u8 unk0E59[3];
    /* 0x0E5C */ PanelModelOwner *modelOwner;
    /* 0x0E60 */ u32 files[10];
    /* 0x0E88 */ u32 fileSizes[10];
};

/* The fields of g_gameState this update reads. */
struct PanelGameState {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ u16 questMenuBlocked;
};

#define PANEL_FLAG_LOCKED 0x40000000
#define PANEL_FLAG_REFRESH 0x1000
#define PANEL_FLAG_CONFIRM 0x80

extern "C" {

extern PanelGameState g_gameState;

PanelSelection *FUN_0022b8c0(void *selection);
PanelSelection *FUN_0022b238(void *selection);
s32 FUN_003bb620(void *selection);
s32 flaggedValueHolderGetTotal(void *selection);
void modelSetVisible(PanelModelOwner *owner, s32 visible);
void nodeOwnerSetEnabled(PanelModelOwner *owner, s32 enabled);
void FUN_00234cd8(PanelModelOwner *owner, s32 kind, s32 flag);
void objModelDestroy(PanelModelOwner *owner);
void objModelCreateFromSource(PanelModelOwner *owner, u32 file, u32 size);
void FUN_002328b4(void);
void FUN_00232848(void);
void FUN_002758d8(void);
void FUN_003b9c00(PanelWork *work);
s32 gameFlagIsSet(u32 flag);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestMenuPressed(void);

/* Keeps the info panel's model, scroll position and page in step with the selection, then handles
 * the panel's confirm / menu input. */
void FUN_003b875c(PanelWork *work)
{
    bool selectionMoved = false;
    PanelSelection *previous = FUN_0022b8c0(work->selection);
    if (FUN_003bb620(work->selection) != 0) {
        selectionMoved = true;
    }

    if (work->recordShown != 0 && (work->mode == 4 || work->mode == 3)) {
        if ((previous->kind == 0 || previous->kind == 6) && work->modelOwner->locked == 0) {
            modelSetVisible(work->modelOwner, 1);
            nodeOwnerSetEnabled(work->modelOwner, 0);
        } else {
            modelSetVisible(work->modelOwner, 0);
            nodeOwnerSetEnabled(work->modelOwner, 1);
        }
    }

    if (FUN_0022b8c0(work->selection) != previous || (work->flags & PANEL_FLAG_LOCKED) != 0) {
        s16 x = FUN_0022b8c0(work->selection)->centerX;
        s16 y = FUN_0022b8c0(work->selection)->centerY;

        work->flags |= PANEL_FLAG_REFRESH;
        work->viewCopy.first = work->view.first;
        work->viewCopy.second = work->view.second;
        work->corner.x = (f32)x - 200.0f;
        work->corner.y = (f32)y - 120.0f;
        uiClampScrollOffset(reinterpret_cast<ScreenObject *>(work), reinterpret_cast<f32 *>(&work->viewCopy));
        uiClampScrollOffset(reinterpret_cast<ScreenObject *>(work), &work->corner.x);
        work->targetCopy.first = work->target.first;
        work->targetCopy.second = work->target.second;
        work->center.x = (f32)x;
        work->center.y = (f32)y;
        work->scrollLength = 10;
        work->scrollFrame = 0;
        s16 page = flaggedValueHolderGetTotal(work->selection);
        work->page = page;
        if (work->recordShown != 0) {
            PanelSelection *current = FUN_0022b238(work->selection);
            s32 kind = current->kind;

            if (!(work->mode == 4 || work->mode == 3) || (kind != 0 && kind != 6) ||
                (previous->kind != 0 && previous->kind != 6)) {
                FUN_00234cd8(work->modelOwner, kind, 0);
            }
            if (current->modelIndex >= 0) {
                objModelDestroy(work->modelOwner);
                u32 *slot = &work->files[current->modelIndex];
                objModelCreateFromSource(work->modelOwner, slot[0], slot[10]);
            }
        }
    }

    if (selectionMoved) {
        if ((work->flags & PANEL_FLAG_LOCKED) == 0) {
            FUN_002328b4();
        }
    } else if ((work->flags & PANEL_FLAG_LOCKED) == 0) {
        if (g_gameState.questMenuBlocked != 0) {
            work->state = 8;
            work->phase = 0;
            return;
        }
        if ((work->flags & PANEL_FLAG_CONFIRM) != 0 ||
            (gameFlagIsSet(0x404) != 0 && inputIsQuestConfirmPressed() != 0)) {
            work->flags &= ~PANEL_FLAG_CONFIRM;
            FUN_002758d8();
            work->state = 7;
            work->phase = 0;
            return;
        }
        if (inputIsQuestMenuPressed() != 0 && work->record->locked == 0) {
            FUN_003b9c00(work);
            FUN_00232848();
        }
        return;
    }
    work->flags = (work->flags & ~PANEL_FLAG_LOCKED) | 0x2000;
    work->refreshed = 1;
}

} /* extern "C" */
