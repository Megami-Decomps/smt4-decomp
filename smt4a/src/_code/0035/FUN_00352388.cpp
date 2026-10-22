/* NON_MATCHING: retail copies the home vectors through VFP registers component by component (x apart from y/z); struct assignment here copies them with ldm/stm */
#include "common.h"

extern "C" {

typedef struct MapViewVec {
    f32 x;
    f32 y;
    f32 z;
} MapViewVec;

struct MapViewOwned;

typedef struct MapViewOwnedVtbl {
    void *unk00;
    void (*destroy)(struct MapViewOwned *self); /* 0x04 */
} MapViewOwnedVtbl;

typedef struct MapViewOwned {
    MapViewOwnedVtbl *vtbl;
} MapViewOwned;

typedef struct MapView {
    u8 unk000[0x38];
    MapViewVec eye;          /* 0x038 */
    MapViewVec target;       /* 0x044 */
    MapViewVec prevEye;      /* 0x050 */
    MapViewVec prevTarget;   /* 0x05C */
    u8 unk068[0x250];
    u8 unk2B8;               /* 0x2B8 */
    u8 unk2B9[3];
    MapViewOwned *owned;     /* 0x2BC */
    MapViewVec homeEye;      /* 0x2C0 */
    MapViewVec homeTarget;   /* 0x2CC */
    u8 unk2D8[0x2C];
    u8 unk304;               /* 0x304 */
} MapView;

typedef struct MapViewHolder {
    u32 unk00;
    MapView *view; /* 0x04 */
} MapViewHolder;

extern MapViewHolder DAT_005806a0;

void FUN_00292b84(void);
s32 mapStateGet(void);
void settings5BSetValue(s32 value);

/* Destroys the view's owned object and resets its eye and target (current and previous) to the home pose. */
void FUN_00352388(void)
{
    MapView *view;

    if (DAT_005806a0.view->owned != NULL) {
        DAT_005806a0.view->owned->vtbl->destroy(DAT_005806a0.view->owned);
        DAT_005806a0.view->owned = NULL;
    }
    view = DAT_005806a0.view;
    view->target = view->homeTarget;
    view->eye = view->homeEye;
    view->prevTarget = view->homeTarget;
    view->prevEye = view->homeEye;
    view->unk2B8 = 0;
    view->unk304 = 0;
    FUN_00292b84();
    if (mapStateGet()) {
        settings5BSetValue(1);
    }
}

} /* extern "C" */
