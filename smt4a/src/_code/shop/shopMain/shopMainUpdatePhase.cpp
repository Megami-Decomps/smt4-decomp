#include "common.h"
#include <stdio.h>
#include "game/GameStateA.h"
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "shop/ShopSequenceRequest.h"
#include "shard/W6_W6Match5_SequencePacket.h"
#include "shard/W6_W6Match2_EntrySequence.h"

#define SHOP_STATE_OPEN 0
#define SHOP_STATE_WAIT_LIST 1
#define SHOP_STATE_CLOSE 2
#define SHOP_STATE_EXIT 3
#define SHOP_LIST_SIZE 0x1605C

struct ShopList {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0xB04];
    /* 0x0B08 */ u8 detail[0x38];
    /* 0x0B40 */ s32 mode;
};

struct ShopSession {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 state;
    /* 0x06 */ u8 openMode;
    /* 0x07 */ u8 unk07;
    /* 0x08 */ s32 shopId;
    /* 0x0C */ u8 silentExit;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ s32 listMode;
    /* 0x14 */ u8 hasMessage;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ ShopList *list;
};

extern "C" {
extern ShopSession *g_shop;

void asdOperatorDelete(void *block);
ShopList *FUN_0049c3c0(void *memory, s32 mode, s32 kind, s32 sub);
void FUN_0019ea5c(ShopList *list);
void placeWindowRunStateHandler(void);
void FUN_00499c84(void);
u8 *_ZN9Obj55ca08D1Ev(void *detail);
void fileSlot17Acquire(s32 *slot);
void fileSlot17Release(s32 *slot);
s32 storyFlagRangeAnySet(void);
void setFlag10(void);
s32 lmapMainGetUnk74(void);
s32 gameStateIsFlagSetAndLarge(void);
void soundChannelStopAll(s32 mask);
void titleSetSlotValueState2(s32 a, s32 b);

/* Steps the shop. Returns -1 once the shop asks to be left, otherwise 0. */
s32 shopMainUpdatePhase(u32 process)
{
    ShopSession *shop = g_shop;
    switch (shop->state) {
    case SHOP_STATE_OPEN: {
        if (storyFlagRangeAnySet() != 0 && isFlag10Set() == 0)
            setFlag10();
        /* retail passes a stack address the file-slot reference functions ignore */
        s32 slot[2];
        fileSlot17Acquire(slot);
        s32 sub = shop->shopId;
        s32 kind = 0;
        if (sub >= 100) {
            kind = 1;
            sub -= 100;
        }
        switch (shop->openMode) {
        case 0: {
            void *memory = asdOperatorNew(SHOP_LIST_SIZE);
            shop->list = memory != NULL ? FUN_0049c3c0(memory, 0, kind, sub) : NULL;
            break;
        }
        case 1: {
            void *memory = asdOperatorNew(SHOP_LIST_SIZE);
            ShopList *list = memory != NULL ? FUN_0049c3c0(memory, 1, kind, sub) : NULL;
            shop->list = list;
            s32 mode = shop->listMode;
            if (mode == 8)
                list->mode = 8;
            else
                list->mode = mode;
            break;
        }
        }
        FUN_0019ea5c(shop->list);
        shop->state = SHOP_STATE_WAIT_LIST;
        break;
    }
    case SHOP_STATE_WAIT_LIST:
        if (shop != NULL && shop->list != NULL) {
            placeWindowRunStateHandler();
            if (shop->list->flags & 1)
                shop->state = SHOP_STATE_CLOSE;
        }
        break;
    case SHOP_STATE_CLOSE:
        if (shop->list != NULL) {
            s32 slot[2];
            FUN_00499c84();
            if (shop->list != NULL)
                asdOperatorDelete((u8 *)_ZN9Obj55ca08D1Ev(shop->list->detail) - 0xB08);
            fileSlot17Release(slot);
        }
        shop->state = SHOP_STATE_EXIT;
        break;
    case SHOP_STATE_EXIT: {
        if (shop->hasMessage != 0) {
            s32 which;
            if (shop->shopId >= 100) {
                if (shop->shopId == 0x6D)
                    which = 3;
                else
                    which = 5;
            } else {
                if (shop->shopId == 8)
                    which = 2;
                else
                    which = 4;
            }
            shopGetQueuedRequest()->screen = shop->shopId;
            shopGetQueuedRequest()->pending = 1;
            NamedSceneSequence request;
            request.id = 999;
            request.slot = -1;
            sprintf(request.name, "e%03d_%02d", request.id, which);
            asdSequenceRequest(4, &request, sizeof(request));
        } else if (lmapMainGetUnk74() != 0) {
            if (gameStateIsFlagSetAndLarge() != 0) {
                s32 arguments[2];
                arguments[0] = g_gameState.savedMapId - 200;
                asdSequenceRequest(14, arguments, 4);
            } else {
                asdSequenceRequest(6, NULL, 0);
            }
        } else if (shop->silentExit != 0) {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
        } else {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
            soundChannelStopAll(15);
        }
        return -1;
    }
    }
    return 0;
}

} /* extern "C" */
