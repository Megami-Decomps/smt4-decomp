#ifndef CAMP_SCRIPTPANELRESOURCES_H
#define CAMP_SCRIPTPANELRESOURCES_H
#include "common.h"
#include <stddef.h>
struct ScriptProcess;
struct ListEntry20;
struct CampScriptPanelResources {
    union {
        /* 0x0000 */ u8 unk0000[0x90];
        struct {
            u8 unk0000[0x20];
            /* 0x0020 */ u32 flags;
            u8 unk0024[0x18];
            /* 0x003C */ s16 sceneId;
        } mikado;
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
    };
    /* 0x1128 */ void *scriptFileA;
    /* 0x112C */ void *messageFileA;
    /* 0x1130 */ ScriptProcess *scriptA;
    /* 0x1134 */ u8 unk1134[0x1C];
    /* 0x1150 */ void *scriptFileB;
    /* 0x1154 */ void *messageFileB;
    /* 0x1158 */ ScriptProcess *scriptB;
    /* 0x115C */ u8 unk115C[0xC];
    /* 0x1168 */ s8 keepUi;
    /* 0x1169 */ u8 unk1169[0xAB];
    /* 0x1214 */ s8 cacheLoaded;
    /* 0x1215 */ u8 unk1215[3];
    /* 0x1218 */ u32 cacheHandle;
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
#ifdef __cplusplus
extern "C" {
#endif

s32 inputIsQuestConfirmPressed(void);

#ifdef __cplusplus
}
#endif

#endif
