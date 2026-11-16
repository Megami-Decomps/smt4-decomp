#include "ui/MessageMain.h"
#include "font/ComWin/ComWin.h"

extern "C" MessageGlobals g_messageMain;

/* The numeric banner: a message object followed by an animated counter. */
struct MessageNumericBanner {
    /* 0x00 */ MessageObject object;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ s32 duration;
    /* 0x68 */ u32 unk68;
    /* 0x6C */ s32 value;
    /* 0x70 */ s32 delta;
    /* 0x74 */ s32 elapsed;
    /* 0x78 */ s32 base;
    /* 0x7C */ u8 state;
    /* 0x7D */ u8 wideValue;
    /* 0x7E */ u8 smallValue;
    /* 0x7F */ u8 alternateAnimation;
    /* 0x80 */ u8 unk80[0x6D4];
    /* 0x754 */ u8 sprite;
};
typedef char MessageNumericBannerOffsetsCheck[offsetof(MessageNumericBanner, state) == 0x7C && offsetof(MessageNumericBanner, sprite) == 0x754 ? 1 : -1];

extern "C" {
void titleOverlaySetModeAnimation(void *overlay, u32 mode);
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
        titleOverlaySetModeAnimation(object, object->close.mode);
        object->close.state = 3;
        object->close.pending = 0;
    }
}

// Finish an active numeric counter and start the banner's closing animation (closing both message objects when asked).
extern "C" u32 messageDismissNumericBanner(s32 close)
{
    MessageNumericBanner *banner = reinterpret_cast<MessageNumericBanner *>(g_messageMain.banner);
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
            s32 animation = banner->alternateAnimation != 0 ? 2 : 7;
            banner->state = 4;
            spriteStartAnimationByIndex(g_messageMain.banner->widget754, animation);
            messageRequestClose(reinterpret_cast<MessageObject *>(g_messageMain.state));
            messageRequestClose(&banner->object);
        }
        return 0;
    }
    if (banner->state == 0 || banner->state == 2 || banner->state == 1) {
        s32 animation = banner->alternateAnimation != 0 ? 2 : 7;
        banner->state = 4;
        spriteStartAnimationByIndex(g_messageMain.banner->widget754, animation);
    }
    return 1;
}
