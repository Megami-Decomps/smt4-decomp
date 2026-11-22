#ifndef CLASSES_OBJ532300_H
#define CLASSES_OBJ532300_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteState.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "map/LmapDestinationListsA.h"

/* A position or size of the navigation display, in pixels. */
struct NaviPanelPoint {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
};

/* One row of the panel's map list. */
struct NaviPanelListEntry {
    /* 0x00 */ s16 enabled;
    /* 0x02 */ s16 id;
};

class Obj532300;
extern "C" void naviPanelInitialize(Obj532300 *panel);
extern "C" void naviPanelDrawFrame(Obj532300 *panel);

/* The map navigation panel: its state handlers are the member-function pointers listed in the
 * table at 0x532300 (named after it until the real name is known), kept in 17 slots at +0x13F8. */
class Obj532300 {
public:
    typedef void (Obj532300::*Handler)();

    /* Clears the handler slots, then installs the state handlers. */
    void resetHandlers();

    void FUN_0048e408();
    void uiAdvanceConditionalScreenSprite();
    void FUN_00487124();
    void FUN_0048bd2c();
    void FUN_0048b8a4();
    void FUN_0048ce38();
    void FUN_0048d1c8();
    void FUN_0048d358();
    void FUN_0048d11c();
    void FUN_0048a4c0();
    void selectionNotificationAdvanceEntryAnimations();
    void FUN_00490898();
    void FUN_0048bad0();
    void FUN_0048c1c0();

protected:
    /* 0x00000 */ u8 unk00000;
    /* 0x00001 */ u8 unk00001[3];
    /* 0x00004 */ s32 step;
    /* 0x00008 */ s32 state;
    /* 0x0000C */ s8 unk0000C;               /* -1 at the start */
    /* 0x0000D */ u8 unk0000D[3];
    /* 0x00010 */ u32 flags;
    /* 0x00014 */ s32 unk00014;
    /* 0x00018 */ u8 unk00018[0x3D];
    /* 0x00055 */ u8 unk00055;
    /* 0x00056 */ u8 touchSelected[6];       /* a word and a halfword, cleared together (FUN_001a90e0) */
    /* 0x0005C */ s8 mode;
    /* 0x0005D */ u8 unk0005D;
    /* 0x0005E */ u8 unk0005E[6];
    /* 0x00064 */ s8 selectedMap;
    /* 0x00065 */ u8 infoPending;
    /* 0x00066 */ u8 unk00066[0x100];
    /* 0x00166 */ u8 unk00166[0x320];
    /* 0x00486 */ u8 unk00486;
    /* 0x00487 */ u8 unk00487;
    /* 0x00488 */ s32 unk00488;
    /* 0x0048C */ s32 unk0048C;
    /* 0x00490 */ s32 unk00490;
    /* 0x00494 */ s32 unk00494;
    /* 0x00498 */ s32 unk00498;
    /* 0x0049C */ s32 unk0049C;
    /* 0x004A0 */ s32 unk004A0;
    /* 0x004A4 */ s32 unk004A4;
    /* 0x004A8 */ s32 unk004A8;
    /* 0x004AC */ f32 unk004AC[3];
    /* 0x004B8 */ s32 unk004B8;
    /* 0x004BC */ s32 pulseTimer;            /* counts up to 10 in both pulse states */
    /* 0x004C0 */ s32 pulseState;
    /* 0x004C4 */ s32 stepTimer;
    /* 0x004C8 */ s32 stepState;
    /* 0x004CC */ u8 scene[4];
    /* 0x004D0 */ EmptyRange cursorRect;
    /* 0x004E4 */ SpritePresetBank spriteBank;
    /* 0x00C20 */ UiResourceParameters parameters;   /* the animation resource of the sprites below */
    /* 0x00C40 */ UiSpriteState entries[6];
    /* 0x00F88 */ u8 unk00F88[0x118];
    /* 0x010A0 */ UiSpriteState auxiliary[2];
    /* 0x011B8 */ UiSpriteState headings[2];
    /* 0x012D0 */ u8 listActive;
    /* 0x012D1 */ u8 listFlags[2];
    /* 0x012D3 */ u8 unk012D3;
    /* 0x012D4 */ s32 listCursor;
    /* 0x012D8 */ s32 listScroll;
    /* 0x012DC */ UiSpriteState listSprite;
    /* 0x01368 */ u8 groupFlags[3];
    /* 0x0136B */ u8 unk0136B;
    /* 0x0136C */ UiSpriteState groupSprite;
    /* 0x013F8 */ Handler handlers[17];
    /* 0x01480 */ s32 textureIndex;
    /* 0x01484 */ NaviPanelPoint view;         /* 160, 120 at the start: half the lower screen (FUN_0048d67c reads it as the view's size) */
    /* 0x0148C */ NaviPanelPoint origins[32];
    /* 0x0158C */ NaviPanelPoint centers[32];
    /* 0x0168C */ NaviPanelPoint extents[32];
    /* 0x0178C */ LmapDestinationEntryA destinations[256];
    /* 0x07B8C */ s32 destinationCount;
    /* 0x07B90 */ u8 refresh[2];             /* one redraw request per screen */
    /* 0x07B92 */ u8 discovered;             /* a revealed cell was newly discovered */
    /* 0x07B93 */ u8 unk07B93;
    /* 0x07B94 */ LmapDestinationEntryA extraDestinations[24];
    /* 0x084F4 */ s32 extraDestinationCount;
    /* 0x084F8 */ u8 unk084F8[0x18008];
    /* 0x20500 */ u8 unk20500;
    /* 0x20501 */ u8 unk20501;
    /* 0x20502 */ u16 unk20502;
    /* 0x20504 */ s16 unk20504;               /* -1 at the start */
    /* 0x20506 */ u8 unk20506[0xA];
    /* 0x20510 */ s32 selectedIcon;
    /* 0x20514 */ u8 unk20514[0x14];
    /* 0x20528 */ NaviPanelListEntry list[32];
    /* 0x205A8 */ s32 listCount;
    /* 0x205AC */ u8 unk205AC;
    /* 0x205AD */ u8 unk205AD[0x7F];
    /* 0x2062C */ u32 unk2062C[2];
    /* 0x20634 */ u8 unk20634;
    /* 0x20635 */ u8 unk20635[3];
    /* 0x20638 */ NaviPanelPoint categoryView;
    /* 0x20640 */ s32 categoryState;
    /* 0x20644 */ u8 mapChangeRequested;
    /* 0x20645 */ s8 specialTexturesLoaded;
    /* 0x20646 */ u8 unk20646[2];
    /* 0x20648 */ NaviPanelPoint mapView;
    /* 0x20650 */ u8 unk20650[4];

    friend void naviPanelInitialize(Obj532300 *panel);
    friend void naviPanelDrawFrame(Obj532300 *panel);
    friend struct Obj532300LayoutCheck;
};

struct Obj532300LayoutCheck {
    char touchSelected[offsetof(Obj532300, touchSelected) == 0x56 ? 1 : -1];
    char selectedMap[offsetof(Obj532300, selectedMap) == 0x64 ? 1 : -1];
    char unk00486[offsetof(Obj532300, unk00486) == 0x486 ? 1 : -1];
    char pulseTimer[offsetof(Obj532300, pulseTimer) == 0x4BC ? 1 : -1];
    char cursorRect[offsetof(Obj532300, cursorRect) == 0x4D0 ? 1 : -1];
    char spriteBank[offsetof(Obj532300, spriteBank) == 0x4E4 ? 1 : -1];
    char parameters[offsetof(Obj532300, parameters) == 0xC20 ? 1 : -1];
    char auxiliary[offsetof(Obj532300, auxiliary) == 0x10A0 ? 1 : -1];
    char listActive[offsetof(Obj532300, listActive) == 0x12D0 ? 1 : -1];
    char listSprite[offsetof(Obj532300, listSprite) == 0x12DC ? 1 : -1];
    char groupSprite[offsetof(Obj532300, groupSprite) == 0x136C ? 1 : -1];
    char handlers[offsetof(Obj532300, handlers) == 0x13F8 ? 1 : -1];
    char textureIndex[offsetof(Obj532300, textureIndex) == 0x1480 ? 1 : -1];
    char origins[offsetof(Obj532300, origins) == 0x148C ? 1 : -1];
    char destinationCount[offsetof(Obj532300, destinationCount) == 0x7B8C ? 1 : -1];
    char extraDestinationCount[offsetof(Obj532300, extraDestinationCount) == 0x84F4 ? 1 : -1];
    char unk20500[offsetof(Obj532300, unk20500) == 0x20500 ? 1 : -1];
    char selectedIcon[offsetof(Obj532300, selectedIcon) == 0x20510 ? 1 : -1];
    char list[offsetof(Obj532300, list) == 0x20528 ? 1 : -1];
    char unk2062C[offsetof(Obj532300, unk2062C) == 0x2062C ? 1 : -1];
    char mapView[offsetof(Obj532300, mapView) == 0x20648 ? 1 : -1];
    char size[sizeof(Obj532300) == 0x20654 ? 1 : -1];
};

#endif
