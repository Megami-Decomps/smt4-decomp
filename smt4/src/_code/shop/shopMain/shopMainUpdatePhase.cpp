#include "common.h"
#include <stdio.h>
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "game/GameState.h"
#include "shop/ShopSequenceRequest.h"
#include "shard/W6_W6Match5_SequencePacket.h"
#include "shard/W6_W6Match2_EntrySequence.h"

/* The shop main (only the fields read here). */
struct ShopMain {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 phase;
    /* 0x06 */ u8 sceneMode;
    /* 0x07 */ u8 unk07;
    /* 0x08 */ s32 screen;
    /* 0x0C */ u8 silent;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ s32 selection;
    /* 0x14 */ u8 requestPending;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u8 *scene;
};

extern "C" {

extern ShopMain *g_shop;


s32 storyFlagRangeAnySet(void);
void setFlag10(void);
void fileSlot17Acquire(s32 *slot);
void fileSlot17Release(s32 *slot);
u8 *FUN_003a5e30(void *memory, s32 mode, s32 kind, s32 sub);
void shopResetMessageState(u8 *scene);
void sceneRunLoadingPhaseUpdate(void);
void FUN_003a3914(void);
u32 _ZN9Obj55ca08D1Ev(u8 *touch);
void asdMemFreeNonNull(u8 *block);
s32 FUN_00287304(void);
s32 gameStateIsFlagSetAndLarge(void);
void titleSetSlotValueState2(s32 a, s32 b);
void soundChannelStopAll(s32 channel);

/* Steps the shop main: 0 builds the scene (unless a story screen takes over), 1 waits for it to
 * load, 2 destroys it, 3 requests the next sequence. Returns -1 when the shop is done. */
u32 shopMainUpdatePhase(void)
{
    ShopMain *shop = g_shop;
    switch (shop->phase) {
    case 0: {
        s32 screen;
        if (storyFlagRangeAnySet() != 0 && isFlag10Set() == 0 && (screen = shop->screen) != 6 && screen != 7 &&
            screen != 9 && screen != 10 && screen != 11 && screen != 12 && screen != 0x69 && screen != 0x6E &&
            screen != 0x6F && screen != 0x70 && screen != 0x71) {
            shop->requestPending = 1;
            setFlag10();
            shop->phase = 3;
            break;
        }
        /* retail passes a stack address the file-slot reference functions ignore */
        s32 slot[2];
        fileSlot17Acquire(slot);
        s32 sub = shop->screen;
        s32 kind = 0;
        if (sub >= 100) {
            kind = 1;
            sub -= 100;
        }
        switch (shop->sceneMode) {
        case 0: {
            void *memory = asdOperatorNew(0x15D6C);
            shop->scene = memory != NULL ? FUN_003a5e30(memory, 0, kind, sub) : NULL;
            break;
        }
        case 1: {
            void *memory = asdOperatorNew(0x15D6C);
            u8 *scene = memory != NULL ? FUN_003a5e30(memory, 1, kind, sub) : NULL;
            shop->scene = scene;
            /* the scene's selection word sits at +0x860 */
            s32 selection = shop->selection;
            if (selection == 8)
                *(s32 *)(scene + 0x860) = 8;
            else
                *(s32 *)(scene + 0x860) = selection;
            break;
        }
        }
        shopResetMessageState(shop->scene);
        shop->phase = 1;
        break;
    }
    case 1:
        if (shop != NULL && shop->scene != NULL) {
            sceneRunLoadingPhaseUpdate();
            if (*(u32 *)shop->scene & 1)
                shop->phase = 2;
        }
        break;
    case 2:
        if (shop->scene != NULL) {
            s32 slot[2];
            FUN_003a3914();
            if (shop->scene != NULL)
                asdMemFreeNonNull((u8 *)_ZN9Obj55ca08D1Ev(shop->scene + 0x828) - 0x828);
            fileSlot17Release(slot);
        }
        shop->phase = 3;
        break;
    case 3: {
        if (shop->requestPending != 0) {
            s32 which;
            if (shop->screen >= 100) {
                if (shop->screen == 0x6D)
                    which = 2;
                else
                    which = 4;
            } else {
                if (shop->screen == 8)
                    which = 1;
                else
                    which = 3;
            }
            shopGetQueuedRequest()->screen = shop->screen;
            shopGetQueuedRequest()->pending = 1;
            NamedSceneSequence request;
            request.id = 0x4B;
            request.slot = -1;
            sprintf(request.name, "e%03d_%02d", request.id, which);
            asdSequenceRequest(4, &request, sizeof(request));
        } else if (FUN_00287304() != 0) {
            if (gameStateIsFlagSetAndLarge() != 0) {
                s32 arguments[2];
                arguments[0] = g_gameState.savedMapId - 200;
                asdSequenceRequest(14, arguments, 4);
            } else {
                asdSequenceRequest(6, NULL, 0);
            }
        } else if (shop->silent != 0) {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
        } else {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
            soundChannelStopAll(15);
        }
        return 0xFFFFFFFF;
    }
    }
    return 0;
}

} /* extern "C" */
