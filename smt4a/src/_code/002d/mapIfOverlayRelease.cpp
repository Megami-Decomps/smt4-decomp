#include "common.h"

extern "C" {

struct OverlayObject002d8af4;

typedef struct OverlayVtbl002d8af4 {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(struct OverlayObject002d8af4 *self);
} OverlayVtbl002d8af4;

typedef struct OverlayObject002d8af4 {
    /* 0x00 */ OverlayVtbl002d8af4 *vtbl;
} OverlayObject002d8af4;

typedef struct MapIfOverlay002d8af4 {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x1b];
    /* 0x1c */ OverlayObject002d8af4 *object;
} MapIfOverlay002d8af4;

typedef struct MapIf002d8af4 {
    /* 0x0000 */ u8 unk0000[0xcc3c];
    /* 0xcc3c */ MapIfOverlay002d8af4 overlay;
} MapIf002d8af4;

extern MapIf002d8af4 *g_mapIf; /* 0x58103c */

/* Releases the map interface's overlay object and clears the overlay's active flag. */
void mapIfOverlayRelease(void)
{
    MapIfOverlay002d8af4 *overlay = &g_mapIf->overlay;

    if (overlay->object != NULL) {
        overlay->object->vtbl->release(overlay->object);
        overlay->object = NULL;
    }
    overlay->active = 0;
}

} /* extern "C" */
