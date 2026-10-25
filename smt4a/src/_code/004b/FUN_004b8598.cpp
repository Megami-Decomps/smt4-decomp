/* NON_MATCHING: prologue order only - retail schedules `sub sp` after `ldr r1,[r0,#144]; mov r7,r0`, armcc emits it right after the push */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DataTableSections.h"

extern "C" {

/* One mikado list entry: image names under g_mikadoPathPrefix, flags gating the alternate image and the entry's table type. */
typedef struct MikadoEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 name[0x3E];
    /* 0x40 */ char image[0x20];
    /* 0x60 */ s32 tableType;
    /* 0x64 */ u16 altFlagA;
    /* 0x66 */ u16 altFlagB;
    /* 0x68 */ char altImage[0x20];
} MikadoEntry;

typedef struct MikadoMenuEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s16 kind;
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ s8 listIndex;
} MikadoMenuEntry;

/* Local view of the mikado scene panel (see CampScriptPanelResources for the shared layout). */
typedef struct MikadoPanel {
    /* 0x0000 */ u8 unk0000[0x28];
    /* 0x0028 */ u32 state;
    /* 0x002C */ u32 stateArg;
    /* 0x0030 */ u8 unk0030[0xC];
    /* 0x003C */ s16 sceneId;
    /* 0x003E */ u8 unk003E[0x52];
    /* 0x0090 */ u32 textureNode;
    /* 0x0094 */ u8 unk0094[8];
    /* 0x009C */ u8 menu[0x107C];
    /* 0x1118 */ MikadoEntry *entry;
    /* 0x111C */ u8 unk111C[0xC];
    /* 0x1128 */ void *scriptFile;
    /* 0x112C */ void *messageFile;
    /* 0x1130 */ u8 unk1130[0x3C];
    /* 0x116C */ s32 keepWindow;
    /* 0x1170 */ u8 unk1170[0xA4];
    /* 0x1214 */ u8 cacheLoaded;
    /* 0x1215 */ u8 unk1215[3];
    /* 0x1218 */ u32 cacheHandle;
} MikadoPanel;

extern const char g_mikadoPathPrefix[];
extern int textFormatBuffer(u8 *destination, const char *format, ...);
extern int gameFlagIsSet(s32 flag);
extern int placeWinStartText(u8 *name);
extern void moveCameraCtrlCreateEntry(u32 handle, u8 *path, s32 index);
extern void linkSlotSetFlag1C(u32 handle, s32 enable);
extern void linkSlotSetFlag20(u32 handle, s32 enable);
extern void listSelectItem(u32 handle, s32 index);
extern void FUN_00407ab0(u32 handle, u8 *path, u8 *altPath);
extern void FUN_00407eb0(u32 handle, s32 kind, s32 flag);
extern void FUN_004080bc(u32 handle, s32 a, s32 b);
extern void mapSceneInitializeScriptAndEntry(MikadoPanel *panel);
extern MikadoMenuEntry *menu4CGetCurrentEntry(u8 *menu);

/* Once the panel's textures and scripts are loaded, enters state 3 and loads the current entry's images into the cache. */
void FUN_004b8598(MikadoPanel *panel)
{
    MikadoMenuEntry *current;
    u8 *typeEntries;
    s32 i;

    if (asdTMTexTableNodeIsLoaded(0x18, panel->textureNode) == 0) {
        return;
    }
    if (panel->scriptFile != NULL && panel->messageFile != NULL) {
        mapSceneInitializeScriptAndEntry(panel);
        panel->state = 3;
        panel->stateArg = 0;
        if (panel->entry->image[0] != '0') {
            u8 path[0x80];
            u8 altPath[0x80];
            u8 scratch[8];

            panel->cacheLoaded = 1;
            textFormatBuffer(path, "%s%s", g_mikadoPathPrefix, panel->entry->image);
            if ((panel->entry->altFlagA != 0 && gameFlagIsSet(panel->entry->altFlagA) != 0) ||
                (panel->entry->altFlagB != 0 && gameFlagIsSet(panel->entry->altFlagB) != 0)) {
                textFormatBuffer(altPath, "%s%s", g_mikadoPathPrefix, panel->entry->altImage);
                FUN_00407ab0(panel->cacheHandle, path, altPath);
            } else {
                FUN_00407ab0(panel->cacheHandle, path, NULL);
            }
            current = menu4CGetCurrentEntry(panel->menu);
            FUN_004080bc(panel->cacheHandle, 0, -1);
            FUN_00407eb0(panel->cacheHandle, current->kind, 1);
            if (panel->entry->tableType >= 0) {
                typeEntries = (u8 *)dataTable33Entries(scratch, panel->entry->tableType);
                if (typeEntries != NULL) {
                    for (i = 0; i < dataTable33TypeCount(scratch, panel->entry->tableType); i++) {
                        textFormatBuffer(path, "%s%s.bam", g_mikadoPathPrefix, typeEntries);
                        moveCameraCtrlCreateEntry(panel->cacheHandle, path, i);
                        typeEntries += 0x20;
                    }
                    listSelectItem(panel->cacheHandle, current->listIndex);
                }
            }
            if ((panel->sceneId == 4 || panel->sceneId == 3) && (current->kind == 0 || current->kind == 6)) {
                linkSlotSetFlag20(panel->cacheHandle, 1);
                linkSlotSetFlag1C(panel->cacheHandle, 0);
            } else {
                linkSlotSetFlag20(panel->cacheHandle, 0);
                linkSlotSetFlag1C(panel->cacheHandle, 1);
            }
        }
        if (panel->keepWindow != 1) {
            placeWinStartText(panel->entry->name);
        }
    }
}

} /* extern "C" */
