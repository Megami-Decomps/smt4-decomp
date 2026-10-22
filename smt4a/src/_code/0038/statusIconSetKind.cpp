#include "common.h"

extern "C" {

typedef struct StatusIconPanel {
    /* 0x0000 */ u8 unk0000[0x12B8];
    /* 0x12B8 */ u8 icon[0x8C];
} StatusIconPanel;

void uiSpriteSetKeyframe(void *sprite, s16 keyframe, s32 flags);
void uiSpriteSetImageKeyframe(void *sprite, s16 keyframe, s32 flags);

/* Show the icon for `kind`: kinds 9-12 use their own keyframe and frame, 21/22 only change the frame. */
void statusIconSetKind(StatusIconPanel *panel, s32 kind)
{
    void *icon = panel->icon;
    s32 image;

    if (kind == 21) {
        uiSpriteSetImageKeyframe(icon, 47, 0);
        return;
    }
    if (kind == 22) {
        uiSpriteSetImageKeyframe(icon, 48, 0);
        return;
    }
    image = 45;
    switch (kind) {
    case 0:
        break;
    case 9:
        kind = 15;
        image = 48;
        break;
    case 10:
        kind = 16;
        image = 48;
        break;
    case 11:
        kind = 17;
        image = 47;
        break;
    case 12:
        kind = 18;
        image = 47;
        break;
    }
    uiSpriteSetKeyframe(icon, kind, 0);
    uiSpriteSetImageKeyframe(icon, image, 0);
}

} /* extern "C" */
