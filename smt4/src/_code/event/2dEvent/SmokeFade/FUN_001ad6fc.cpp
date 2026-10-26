/* NON_MATCHING: the phase switch now builds retail's jump table (labels 3 and 4 fall out to the default, as in retail) and the images base is shared; the saved registers still differ (retail: state r4, loop index r5, loaded count r6, images r7; built has them rotated). */
#include "event/2dEvent/SmokeFade.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* One fade timing row of event/smoke_fade.tbl. */
struct SmokeFadeRow {
    s32 fadeOutFrames;      // 0x00
    s32 fadeOutSplit;       // 0x04
    s32 fadeInFrames;       // 0x08
    s32 fadeInSplit;        // 0x0C
};

extern "C" {
/* The SmokeFade globals: the state object, then the two fade images. */
extern struct SmokeFadeGlobals {
    SmokeFadeState *state;
    u32 unk04[5];
    SmokeFadeImage images[2];
} DAT_0043df28;
s32 FUN_002c1d5c(void);
void FUN_002a03d8(s32 slot, s32 value);
void slotSetRequest(s32 slot, s32 value, u32 mask);
f32 mathInterpolateTimed(s32 total, s32 elapsed, f32 from, f32 to);
}

/* The row of the fade table selected by the state, or NULL while the table is not loaded. */
static __inline SmokeFadeRow *smokeFadeGetRow()
{
    SmokeFadeRow *rows = static_cast<SmokeFadeRow *>(DAT_0043df28.state->file);
    if (rows == NULL)
        return NULL;
    return rows + DAT_0043df28.state->first;
}

static __inline bool smokeFadeImagesLoaded(SmokeFadeImage *images)
{
    s32 loaded = 0;
    for (s32 i = 0; i < 2; ++i) {
        if (asdTMTexTableNodeIsLoaded(images[i].table, images[i].node))
            loaded++;
    }
    return loaded == 2;
}

extern "C" u32 FUN_001ad6fc(u32 job)
{
    SmokeFadeImage *images = DAT_0043df28.images;
    SmokeFadeState *fade = DAT_0043df28.state;
    if (smokeFadeImagesLoaded(images) && fade->file != NULL && FUN_002c1d5c() != 0) {
        fade->active = 0;
        fade->phase = 3;
    }
    switch (fade->phase) {
    case 0: {
        if (!smokeFadeImagesLoaded(images) || fade->file == NULL)
            return 0;
        SmokeFadeRow *row = smokeFadeGetRow();
        if (fade->second != 0) {
            fade->scale = 0.0f;
            fade->opacity = 0.0f;
            fade->phase = 2;
            slotSetRequest(1, row->fadeInFrames + 1, 0xFFFFFFFF);
        } else {
            FUN_002a03d8(0, 0);
            FUN_002a03d8(1, row->fadeOutFrames + 1);
            fade->scale = 1.0f;
            fade->opacity = 1.0f;
            fade->phase = 1;
        }
        fade->active = 1;
        return 0;
    }
    case 1: {
        SmokeFadeRow *row = smokeFadeGetRow();
        fade->opacity = mathInterpolateTimed(row->fadeOutFrames, fade->frame, 1.0f, 0.0f);
        if (fade->frame >= row->fadeOutSplit)
            fade->scale = mathInterpolateTimed(row->fadeOutFrames - row->fadeOutSplit,
                                               fade->frame - row->fadeOutSplit, 1.0f, 0.0f);
        fade->frame++;
        if (fade->scale != 0.0f)
            return 0;
        break;
    }
    case 2: {
        SmokeFadeRow *row = smokeFadeGetRow();
        fade->opacity = mathInterpolateTimed(row->fadeInFrames, fade->frame, 0.0f, 1.0f);
        if (fade->frame >= row->fadeInSplit)
            fade->scale = mathInterpolateTimed(row->fadeInFrames - row->fadeInSplit, fade->frame - 50, 0.0f, 1.0f);
        fade->frame++;
        if (fade->scale >= 0.95f)
            slotSetRequest(0, 0, 0xFFFFFFFF);
        if (fade->scale != 1.0f)
            return 0;
        break;
    }
    case 3:
    case 4:
        return 0;
    default:
        return 0;
    }
    fade->phase = 3;
    fade->active = 0;
    fade->frame = 0;
    return 0;
}
