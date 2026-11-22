#ifndef CAMP_SCRIPTPANELRESOURCES_H
#define CAMP_SCRIPTPANELRESOURCES_H
#include "common.h"
#include <stddef.h>
#include "shard/Shard004B.h"
#include "gfx/TransformInterpolation.h"
struct ScriptProcess;
struct TableGroupHeader;
struct MikadoRecord;
class MikadoTalkWorkA;
struct CampScriptPanelResources {
    union {
        /* 0x0000 */ u8 unk0000[0x90];
        struct {
            u8 unk0000[0x20];
            /* 0x0020 */ u32 flags;
            u32 unk0024;
            /* 0x0028 */ u32 state;
            /* 0x002C */ u32 step;         /* step within the state */
            /* 0x0030 */ s32 frame;        /* frames counted by the step */
            u8 unk0034[8];
            /* 0x003C */ s16 sceneId;
            u8 unk003E[2];
            /* 0x0040 */ s16 startEntryId; /* the list entry the menu opens on (0: none) */
            u8 unk0042[6];
            /* 0x0048 */ u8 exitRequest[4]; /* how to leave with the camp's resources kept: [0] map selection 100-199,
                                             * [1] below 100, [2] 200 and up, [3] save mode 2 */
            /* 0x004C */ u16 menuTotal;    /* flaggedValueHolderGetTotal of the menu */
        } mikado;
        /* 0x0000 */ TransformInterpolation scroll; /* the view's scroll towards the selected entry */
        struct {
            u8 prefix[0x28];
            u32 state, timer;
            u8 unk030[0x28];
            u8 animation[1];
        } transition;
    };
    /* 0x0090 */ u32 textureNode;
    union {
        /* 0x0094 */ u8 unk0094[0x1094];
        /* 0x0094 */ u32 textureImage;
        struct { u8 prefix[8]; u8 menu[1]; } selectionMenu;
        struct { u8 prefix[0x1088]; ListEntry20 *entry; } selected;
        struct {
            u8 prefix[8];
            /* 0x009C */ Menu4C menu;
            /* 0x1114 */ u8 table33[4];
            /* 0x1118 */ const MikadoRecord *record; /* the location shown */
            /* 0x111C */ ListEntry20 *entry;
            /* 0x1120 */ s32 group;
        } panel;
    };
    /* 0x1128 */ void *scriptFileA;
    /* 0x112C */ void *messageFileA;
    /* 0x1130 */ ScriptProcess *scriptA;
    /* 0x1134 */ u8 unk1134[4];
    /* 0x1138 */ void *talkScript;   /* "mikado/talk.bf" */
    /* 0x113C */ void *talkMessages; /* "mikado/talk.mbm" */
    /* 0x1140 */ u8 unk1140[4];
    /* 0x1144 */ TableGroupHeader *conditionNames; /* entry names of the condition script */
    /* 0x1148 */ u8 unk1148[4];
    /* 0x114C */ ScriptProcess *conditionScript;   /* runs a list entry's availability condition */
    /* 0x1150 */ void *scriptFileB;
    /* 0x1154 */ void *messageFileB;
    /* 0x1158 */ ScriptProcess *scriptB;
    /* 0x115C */ u8 unk115C[0xC];
    /* 0x1168 */ s8 keepUi;
    /* 0x1169 */ u8 unk1169[0xAB];
    /* 0x1214 */ s8 cacheLoaded;
    /* 0x1215 */ u8 unk1215[3];
    union {
        /* 0x1218 */ u32 cacheHandle;
        /* 0x1218 */ MikadoTalkWorkA *talkWork; /* the scene's camera controller, while cacheLoaded */
    };
    /* 0x121C */ void *cachedFiles[10];
};
typedef char CampScriptPanelResourceOffsets[(offsetof(CampScriptPanelResources, scriptA) == 0x1130 && offsetof(CampScriptPanelResources, cacheLoaded) == 0x1214 && sizeof(CampScriptPanelResources) == 0x1244) ? 1 : -1];
typedef char CampScriptPanelMikadoOffsets[offsetof(CampScriptPanelResources, mikado.flags) == 0x20 &&
    offsetof(CampScriptPanelResources, mikado.sceneId) == 0x3C &&
    offsetof(CampScriptPanelResources, textureImage) == 0x94 &&
    sizeof(CampScriptPanelResources) == 0x1244 ? 1 : -1];
typedef char CampScriptPanelTransitionOffsets[
    offsetof(CampScriptPanelResources, transition.state) == 0x28 &&
    offsetof(CampScriptPanelResources, transition.timer) == 0x2C &&
    offsetof(CampScriptPanelResources, transition.animation) == 0x58 &&
    offsetof(CampScriptPanelResources, selectionMenu.menu) == 0x9C &&
    offsetof(CampScriptPanelResources, selected.entry) == 0x111C &&
    sizeof(CampScriptPanelResources) == 0x1244 ? 1 : -1];
typedef char CampScriptPanelViewOffsets[
    offsetof(CampScriptPanelResources, mikado.step) == 0x2C &&
    offsetof(CampScriptPanelResources, mikado.exitRequest) == 0x48 &&
    offsetof(CampScriptPanelResources, mikado.menuTotal) == 0x4C &&
    offsetof(CampScriptPanelResources, panel.menu) == 0x9C &&
    offsetof(CampScriptPanelResources, panel.menu.inputLocked) == 0xA88 &&
    offsetof(CampScriptPanelResources, panel.record) == 0x1118 &&
    offsetof(CampScriptPanelResources, panel.group) == 0x1120 &&
    offsetof(CampScriptPanelResources, mikado.startEntryId) == 0x40 &&
    offsetof(CampScriptPanelResources, talkMessages) == 0x113C &&
    offsetof(CampScriptPanelResources, conditionNames) == 0x1144 &&
    offsetof(CampScriptPanelResources, conditionScript) == 0x114C &&
    offsetof(CampScriptPanelResources, keepUi) == 0x1168 &&
    offsetof(CampScriptPanelResources, talkWork) == 0x1218 &&
    offsetof(CampScriptPanelResources, cachedFiles) == 0x121C ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif

s32 inputIsQuestConfirmPressed(void);

#ifdef __cplusplus
}
#endif

#endif
