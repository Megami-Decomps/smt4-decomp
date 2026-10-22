#include "ui/MessageMain.h"
extern "C" MessageGlobalsA g_messageMain;

struct MessageNumericBanner {
    MessageObject object;
    u8 unk60[0x14];
    s32 duration;
    u32 unk78;
    s32 value;
    s32 delta;
    s32 elapsed;
    s32 base;
    u8 unk8c;
    u8 state;
    u8 wideValue;
    u8 smallValue;
    u8 unk90;
    u8 alternateAnimation;
    u8 unk92[0xa6e];
    u8 sprite;
};

extern "C" {
void FUN_00165088(MessageObject *object, u32 mode);
void uiSpriteSelectAnim(void *sprite, s32 animation);
}

static __inline void messageNumericReset(MessageNumericBanner *banner, s32 value)
{
    banner->value = value;
    banner->duration = 10;
    banner->elapsed = 0;
    banner->base = value;
}

static __inline void messageRequestClose(MessageObject *object)
{
    if (object != NULL && object->close.state != 0) {
        FUN_00165088(object, object->close.mode);
        object->close.state = 3;
        object->close.pending = 0;
    }
}

extern "C" u32 messageDismissNumericBanner(s32 close)
{
    MessageNumericBanner *banner = reinterpret_cast<MessageNumericBanner *>(g_messageMain.panel);
    if (banner->state == 3) {
        if (banner->wideValue != 0) {
            messageNumericReset(banner, banner->base + banner->delta);
            if (banner->value <= 0) {
                banner->value = 0;
            }
            if (banner->value > 999999999) {
                banner->value = 999999999;
            }
            banner->state = 0;
        }
        if (banner->smallValue != 0) {
            messageNumericReset(banner, banner->base + banner->delta);
            if (banner->value <= 0) {
                banner->value = 0;
            }
            if (banner->value > 99) {
                banner->value = 99;
            }
            banner->state = 0;
        }
    }
    if (close != 0 && banner->object.close.mode == 11 && banner->object.close.state != 0) {
        if (banner->state == 0 || banner->state == 2) {
            banner->state = 4;
            if (banner->alternateAnimation != 0) {
                uiSpriteSelectAnim(&banner->sprite, 2);
            } else {
                uiSpriteSelectAnim(&banner->sprite, 7);
            }
            messageRequestClose(reinterpret_cast<MessageObject *>(g_messageMain.state));
            messageRequestClose(&banner->object);
        }
        return 0;
    }
    if (banner->state == 0 || banner->state == 2 || banner->state == 1) {
        banner->state = 4;
        uiSpriteSelectAnim(&banner->sprite, 2);
    }
    return 1;
}
