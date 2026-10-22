/* Resets the list's selection state and re-initialises its embedded widget. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk0000[0xc20];  /* 0x0000 */
    u8 listData[0x6b0]; /* 0x0c20 */
    u8 active;          /* 0x12d0 */
    u8 flag12d1;        /* 0x12d1 */
    u8 flag12d2;        /* 0x12d2 */
    u8 unk12d3;         /* 0x12d3 */
    s32 cursor;         /* 0x12d4 */
    s32 scroll;         /* 0x12d8 */
    u8 widget[1];       /* 0x12dc */
} ListScreen;

void uiSpriteInitializeState(void *widget, s32 a, s32 b, s32 c, void *data, s32 d, f32 scale);
void uiSpriteSetKeyframe(void *widget, s32 a, s32 b);

void listScreenOpen(ListScreen *screen)
{
    screen->cursor = 0;
    screen->scroll = 0;
    screen->active = 1;
    screen->flag12d1 = 0;
    screen->flag12d2 = 0;
    uiSpriteInitializeState(screen->widget, 0x13, 0x1121, 0x1d, screen->listData, 0x15, 1.0f);
    uiSpriteSetKeyframe(screen->widget, 5, 0);
}

} /* extern "C" */
