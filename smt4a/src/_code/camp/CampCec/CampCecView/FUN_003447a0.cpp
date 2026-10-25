/* NON_MATCHING: row-label loop uses r0 for entry count after copying entry to r1; retail retains entry in r0, loads count into r2, then loads the row handle through r1/r2 (211 vs 210 rows). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

#define CEC_VIEW_ROWS 3
#define CEC_VIEW_ENTRY_COUNT 32

/* A StreetPass mark entry (observed fields). */
struct CecMarkEntry {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 icon;
    /* 0x23 */ u8 unk23[0x11];
    /* 0x34 */ u16 shownCount;
    /* 0x36 */ u8 unk36[0x2A];
    /* 0x60 */ u16 count;
};

struct CecViewRecord {
    u32 word[5];
};

/* The CEC view screen's work area (observed fields), 0x14C bytes. */
struct CecViewWork {
    /* 0x000 */ u32 task;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 statusScene;
    /* 0x00C */ CecMarkEntry *current;
    /* 0x010 */ u8 unk010[0x68];
    /* 0x078 */ CecViewRecord headerRecords[2];
    /* 0x0A0 */ CecViewRecord rowRecords[5];
    /* 0x104 */ u32 rowSet[CEC_VIEW_ROWS];
    /* 0x110 */ u32 page;
    /* 0x114 */ s32 selected;
    /* 0x118 */ s32 top;
    /* 0x11C */ u32 unk11C;
    /* 0x120 */ s32 usedCount;
    /* 0x124 */ u8 unk124[4];
    /* 0x128 */ u32 unk128;
    /* 0x12C */ u8 unk12C[0xC];
    /* 0x138 */ u32 messageFile;
    /* 0x13C */ u8 loaded;
    /* 0x13D */ u8 loadedB;
    /* 0x13E */ u8 unk13E[2];
    /* 0x140 */ u32 unk140;
    /* 0x144 */ u32 pageDirty;
    /* 0x148 */ u32 unk148;
};

extern "C" {

extern CecViewWork *g_campCecView;

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 enabled);
void sysMemClear(void *memory, u32 size);
void taskCreateDraw(const char *name, s32 layer, u32 a, u32 b, void *callback, u32 c, u32 d, u32 parent);
void sysPlaySe(u32 id);
void asdLoadFileAsyncSimple(const char *path, u32 *file, u32 flags);
void rt_aeabi_memclr(void *memory, u32 size);
void FUN_00319aec(u32 value);
CecMarkEntry *gameDataGetMarkEntry(s32 index);
s32 playerSummaryIsIncomplete(const CecMarkEntry *entry);
void FUN_0036d4b0(s32 index);
void uiDrawExtendedRecordLabel(u32 rowSet, const CecMarkEntry *entry);
u32 campCecDrawSetCreate(void);
u32 textureRequestCacheGet(u32 page, u32 icon);
void characterInfoPanelPopulate(u32 page, CecMarkEntry *entry, u32 flag);
u32 campCecDrawPageCreate(void);
u32 overlayGetStatusScene(void);
void FUN_0025d6a0(void);
void FUN_002a2c78(void);
void campCecViewCreateEffect(void);
void campCecViewDrawEntries(void);

/* Creates the CEC view screen: its work area, process and draw tasks, then the three row sets and the
 * page for the first entry. */
void FUN_003447a0(void)
{
    CecViewWork *view;
    s32 i;

    if (g_campCecView == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecView.cpp", 130);
        g_campCecView = (CecViewWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(CecViewWork), 1);
    }
    view = g_campCecView;
    sysMemClear(view, sizeof(CecViewWork));
    view->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("CampCecView Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>((void *)FUN_0025d6a0), 0, 0);
    taskCreateDraw("CampCecView DrawUpLeft_b", 0x65, 0, 0, (void *)FUN_002a2c78, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawUpRight_b", 0xCC, 0, 0, (void *)FUN_002a2c78, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawUpLeft", 0x86, 0, 0, (void *)campCecViewCreateEffect, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawUpRight", 0xE2, 0, 0, (void *)campCecViewCreateEffect, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawDown", 0xEA, 0, 0, (void *)campCecViewDrawEntries, 0, 0, view->task);
    view->selected = 0;
    view->top = 0;
    view->unk11C = 0;
    view->usedCount = 0;
    view->unk128 = 0;
    view->loaded = 0;
    view->loadedB = 0;
    view->unk140 = 0;
    view->unk148 = 0;
    for (i = CEC_VIEW_ENTRY_COUNT - 1; i >= 0; i--) {
        if (playerSummaryIsIncomplete(gameDataGetMarkEntry(i)) != 0) {
            FUN_0036d4b0(i);
        }
    }
    for (i = 0; i < CEC_VIEW_ENTRY_COUNT; i++) {
        if (gameDataGetMarkEntry(i)->count != 0) {
            view->usedCount++;
        }
    }
    asdLoadFileAsyncSimple("camp/CecEdit_one_msg.mbm", &view->messageFile, 0);
    view->statusScene = overlayGetStatusScene();
    view->current = gameDataGetMarkEntry(view->selected);
    view->current->shownCount = view->current->count;
    for (i = 0; i < CEC_VIEW_ROWS; i++) {
        view->rowSet[i] = campCecDrawSetCreate();
    }
    view->page = campCecDrawPageCreate();
    {
        CecViewWork *shown = g_campCecView;

        for (i = 0; i < CEC_VIEW_ROWS; i++) {
            CecMarkEntry *entry = gameDataGetMarkEntry(shown->top + i);

            if (entry->count != 0) {
                uiDrawExtendedRecordLabel(shown->rowSet[i], entry);
            }
        }
        shown->current = gameDataGetMarkEntry(shown->selected);
        shown->current->shownCount = shown->current->count;
    }
    view->pageDirty = 1;
    characterInfoPanelPopulate(view->page, view->current, 0);
    {
        u8 icon = gameDataGetMarkEntry(0)->icon;

        if (FUN_00182054(icon) == 0) {
            textureRequestCacheGet(view->page, icon);
        }
    }
    for (i = 0; i < 2; i++) {
        rt_aeabi_memclr(&view->headerRecords[i], sizeof(CecViewRecord));
    }
    for (i = 0; i < 5; i++) {
        rt_aeabi_memclr(&view->rowRecords[i], sizeof(CecViewRecord));
        view->rowRecords[i].word[1] = 0x14A;
    }
    sysPlaySe(0xB4);
    FUN_00319aec(0);
}

} /* extern "C" */
