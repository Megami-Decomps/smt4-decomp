/* NON_MATCHING: shop main state step (open, wait for the list, close, exit requests); written from the decompilation, the lazily created request record and the allocation null checks are not compared with retail */
#include "common.h"

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

struct ShopRequestRecord {
    /* 0x00 */ u8 pending;
    /* 0x04 */ s32 shopId;
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
extern ShopRequestRecord *DAT_00588eec;
extern s32 DAT_005f1b74;

void *asdOperatorNew(u32 size);
void asdOperatorDelete(void *block);
ShopList *FUN_0049c3c0(void *memory);
void FUN_0019ea5c(ShopList *list);
void placeWindowRunStateHandler(void);
void FUN_00499c84(void);
void _ZN9Obj55ca08D1Ev(void *detail);
void fileSlot17Acquire(s32 *slot);
void fileSlot17Release(s32 *slot);
s32 storyFlagRangeAnySet(void);
s32 isFlag10Set(void);
void setFlag10(void);
s32 lmapMainGetUnk74(void);
s32 gameStateIsFlagSetAndLarge(void);
void soundChannelStopAll(s32 mask);
void FUN_003d54f8(s32 a, s32 b);
void asdSequenceRequest(s32 type, s32 *args, s32 size);
void textFormatBuffer(char *out, const char *format, s32 a, u32 b);

static ShopRequestRecord *shopRequestRecordGet(void)
{
    if (DAT_00588eec == NULL) {
        ShopRequestRecord *record = (ShopRequestRecord *)asdOperatorNew(sizeof(ShopRequestRecord));
        DAT_00588eec = record;
        if (record != NULL) {
            record->pending = 0;
            record->shopId = 0;
        }
    }
    return DAT_00588eec;
}

/* Steps the shop. Returns -1 once the shop asks to be left, otherwise 0. */
s32 FUN_0027dda4(void)
{
    ShopSession *shop = g_shop;
    s32 slot[2];
    switch (shop->state) {
    case SHOP_STATE_OPEN:
        if (storyFlagRangeAnySet() != 0 && isFlag10Set() == 0)
            setFlag10();
        fileSlot17Acquire(slot);
        if (shop->openMode == 0) {
            ShopList *list = (ShopList *)asdOperatorNew(SHOP_LIST_SIZE);
            shop->list = list != NULL ? FUN_0049c3c0(list) : NULL;
        } else if (shop->openMode == 1) {
            ShopList *list = (ShopList *)asdOperatorNew(SHOP_LIST_SIZE);
            shop->list = list != NULL ? FUN_0049c3c0(list) : NULL;
            s32 mode = shop->listMode;
            if (mode == 8)
                mode = 8;
            shop->list->mode = mode;
        }
        FUN_0019ea5c(shop->list);
        shop->state = SHOP_STATE_WAIT_LIST;
        return 0;

    case SHOP_STATE_WAIT_LIST:
        if (shop == NULL || shop->list == NULL)
            return 0;
        placeWindowRunStateHandler();
        if ((shop->list->flags & 1) == 0)
            return 0;
        shop->state = SHOP_STATE_CLOSE;
        return 0;

    case SHOP_STATE_CLOSE:
        if (shop->list != NULL) {
            FUN_00499c84();
            if (shop->list != NULL) {
                _ZN9Obj55ca08D1Ev(shop->list->detail);
                asdOperatorDelete(shop->list);
            }
            fileSlot17Release(slot);
        }
        shop->state = SHOP_STATE_EXIT;
        return 0;

    case SHOP_STATE_EXIT:
        if (shop->hasMessage != 0) {
            u32 messageId;
            if (shop->shopId >= 100)
                messageId = shop->shopId == 0x6D ? 3 : 5;
            else
                messageId = shop->shopId == 8 ? 2 : 4;
            shopRequestRecordGet()->shopId = shop->shopId;
            shopRequestRecordGet()->pending = 1;
            slot[1] = -1;
            slot[0] = 999;
            char name[24];
            textFormatBuffer(name, "e%03d_%02d", 999, messageId);
            asdSequenceRequest(4, slot, 0x20);
        } else if (lmapMainGetUnk74() != 0) {
            s32 type = 6;
            s32 *args = NULL;
            s32 size = 0;
            if (gameStateIsFlagSetAndLarge() != 0) {
                slot[0] = DAT_005f1b74 - 200;
                args = slot;
                type = 0xE;
                size = 4;
            }
            asdSequenceRequest(type, args, size);
        } else if (shop->silentExit != 0) {
            FUN_003d54f8(0, 1);
            FUN_003d54f8(1, 0);
        } else {
            FUN_003d54f8(0, 1);
            FUN_003d54f8(1, 0);
            soundChannelStopAll(0xF);
        }
        return -1;
    }
    return 0;
}

} /* extern "C" */
