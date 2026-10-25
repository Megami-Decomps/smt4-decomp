/* NON_MATCHING: retail copies the animation points as integer word pairs (ldr/str, not ldrd/strd), keeps the panel's tail fields in a different base register, and orders the link-slot flag calls differently (about 140 diff lines). */
#include "camp/ScriptPanelResources.h"
#include "shard/Shard004B.h"
#include "shard/Shard004A.h"

/* The quest menu panel as FUN_004b7694 drives it: the focus animation and the selection tracker. */
struct QuestPoint {
    f32 x, y;
};

/* The fields of a menu entry that the quest panel reads. */
struct QuestEntry {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 screenX;
    /* 0x24 */ s16 screenY;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ s16 kind; /* 0 and 6 do not hold a linked slot */
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ s8 listIndex;
};

struct QuestLinkSlot {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s8 occupied;
};

struct QuestInputOwner;

struct QuestPanel {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 flags;
    /* 0x0024 */ u8 unk0024[4];
    /* 0x0028 */ u32 state;
    /* 0x002C */ u32 timer;
    /* 0x0030 */ u8 unk0030[0xC];
    /* 0x003C */ s16 sceneId;
    /* 0x003E */ u8 unk003E[0xE];
    /* 0x004C */ u16 total;
    /* 0x004E */ u8 unk004E[0xA];
    /* 0x0058 */ QuestPoint origin;
    /* 0x0060 */ QuestPoint from;
    /* 0x0068 */ QuestPoint to;
    /* 0x0070 */ QuestPoint current;
    /* 0x0078 */ QuestPoint segmentFrom;
    /* 0x0080 */ QuestPoint segmentTo;
    /* 0x0088 */ u32 progress;
    /* 0x008C */ u32 duration;
    /* 0x0090 */ u8 unk0090[0xC];
    /* 0x009C */ Menu4C menu;
    /* 0x1114 */ u8 unk1114[4];
    /* 0x1118 */ QuestInputOwner *input;
    /* 0x111C */ u8 unk111C[0xF8];
    /* 0x1214 */ u8 linked;
    /* 0x1215 */ u8 unk1215[3];
    /* 0x1218 */ QuestLinkSlot *link;
};
typedef char QuestPanelOffsets[
    offsetof(QuestPanel, menu) == 0x9C && offsetof(QuestPanel, segmentTo) == 0x80 &&
    offsetof(QuestPanel, link) == 0x1218 ? 1 : -1];

struct QuestInputOwner {
    /* 0x00 */ u8 unk00[0x86];
    /* 0x86 */ s16 locked;
};

struct QuestPendingState {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ s16 pendingExit;
};

extern "C" {
extern QuestPendingState DAT_005f16fc;
QuestEntry *menu4CGetCurrentEntry(void *menu);
QuestEntry *menu4CGetEntry(void *menu);
s32 FUN_004babd8(void *menu);
void linkSlotSetFlag1C(QuestLinkSlot *slot, s32 value);
void linkSlotSetFlag20(QuestLinkSlot *slot, s32 value);
void FUN_00407eb0(QuestLinkSlot *slot, s32 kind, s32 unused);
void uiClampScrollOffset(void *panel, QuestPoint *point);
void FUN_004b8ba0(void *panel);
void listSelectItem(void);
void mapRecordResumePoint(void);
void sendEvent100020E(void);
void sendEvent100020F(void);
bool gameFlagIsSet(u32 index);
bool inputIsQuestMenuPressed(void);

/* Per-frame update of the quest menu: follow the selection with the focus animation and handle confirm/menu input. */
void FUN_004b7694(QuestPanel *panel)
{
    QuestEntry *before = menu4CGetCurrentEntry(&panel->menu);
    bool empty = FUN_004babd8(&panel->menu) != 0;
    if (panel->linked != 0 && (panel->sceneId == 4 || panel->sceneId == 3)) {
        bool blocked = (before->kind != 0 && before->kind != 6) || panel->link->occupied != 0;
        linkSlotSetFlag20(panel->link, !blocked);
        linkSlotSetFlag1C(panel->link, blocked);
    }
    if (menu4CGetCurrentEntry(&panel->menu) != before || (panel->flags & 0x40000000) != 0) {
        s16 x = menu4CGetCurrentEntry(&panel->menu)->screenX;
        s32 y = menu4CGetCurrentEntry(&panel->menu)->screenY;
        f32 targetX = (f32)x;
        panel->flags |= 0x1000;
        f32 targetY = (f32)y;
        panel->from = panel->origin;
        panel->to.x = targetX - 200.0f;
        panel->to.y = targetY - 120.0f;
        uiClampScrollOffset(panel, &panel->from);
        uiClampScrollOffset(panel, &panel->to);
        panel->segmentFrom = panel->current;
        panel->segmentTo.x = (f32)x;
        panel->segmentTo.y = (f32)y;
        panel->duration = 10;
        panel->progress = 0;
        panel->total = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(&panel->menu));
        if (panel->linked != 0) {
            QuestEntry *current = menu4CGetEntry(&panel->menu);
            s32 kind = current->kind;
            if (((panel->sceneId != 4 && panel->sceneId != 3) || (kind != 0 && kind != 6)) ||
                (before->kind != 0 && before->kind != 6)) {
                FUN_00407eb0(panel->link, kind, 0);
            }
            if (current->listIndex >= 0) {
                listSelectItem();
            }
        }
    }
    u32 flags = panel->flags;
    if (empty != 0) {
        if ((flags & 0x40000000) == 0) {
            sendEvent100020E();
        }
    } else if ((flags & 0x40000000) == 0) {
        if (DAT_005f16fc.pendingExit != 0) {
            panel->state = 8;
            panel->timer = 0;
            return;
        }
        if ((flags & 0x80) != 0 || (gameFlagIsSet(0x404) && inputIsQuestConfirmPressed())) {
            panel->flags &= ~0x80;
            mapRecordResumePoint();
            panel->state = 7;
            panel->timer = 0;
            return;
        }
        if (!inputIsQuestMenuPressed()) {
            return;
        }
        if (panel->input->locked != 0) {
            return;
        }
        FUN_004b8ba0(panel);
        sendEvent100020F();
        return;
    }
    panel->flags = (panel->flags & ~0x40000000) | 0x2000;
    panel->menu.unk9EE = 1;
}
}
