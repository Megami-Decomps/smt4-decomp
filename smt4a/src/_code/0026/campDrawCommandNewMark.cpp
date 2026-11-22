#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/CampStateA.h"


#define CAMP_NOTICE_HEADER 0x14
#define CAMP_NOTICE_ICON 0x5B0
#define CAMP_NOTICE_FRAME_PLAIN 0x5B2
#define CAMP_NOTICE_FRAME_ANIMATED 0x5B1
#define CAMP_NOTICE_GLOW 0x5D6

extern "C" {

s32 gameFlagIsSet(u32 flag);
f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);

/* Draws the camp menu's "new" marker for a menu id when its notice flag (or story flag pair) is set; the
 * animated form adds a glow pulsing with the icon sprite's opacity. */
void campDrawCommandNewMark(s32 menu, s32 x, s32 y, u32 flags, s32 plain)
{
    CampStateA *camp = g_camp;
    const s8 *notice = camp->noticeFlags;
    s32 shown;
    /* The cases follow the order of retail's case blocks (6, 0x43, 3/0x11, the single-flag cases, then 8, 0x38,
     * 0x33), read off the retail code; written in ascending order the blocks are laid out differently (96 lines). */
    switch (menu) {
    case 6:
        shown = notice[0] != 0 || notice[1] != 0;
        break;
    case 0x43:
        shown = notice[2] != 0 || notice[3] != 0;
        break;
    case 3:
    case 0x11:
        shown = notice[4];
        break;
    case 0x1C:
        shown = notice[5];
        break;
    case 0x1D:
        shown = notice[0];
        break;
    case 0x1E:
        shown = notice[1];
        break;
    case 0x3B:
        shown = notice[6];
        break;
    case 0x42:
        shown = notice[2];
        break;
    case 0x45:
        shown = notice[3];
        break;
    case 8:
        shown = notice[5] != 0 || (gameFlagIsSet(0x464) != 0 && gameFlagIsSet(0x4CA) != 0);
        break;
    case 0x38:
        shown = gameFlagIsSet(0x45B) != 0 && gameFlagIsSet(0x4C7) != 0;
        break;
    case 0x33:
        shown = gameFlagIsSet(0x464) != 0 && gameFlagIsSet(0x4CA) != 0;
        break;
    default:
        return;
    }

    if (!shown)
        return;

    if (plain != 0) {
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(CAMP_NOTICE_HEADER, CAMP_NOTICE_FRAME_PLAIN);
        texDrawTableEntryAtStoredOrigin(2, CAMP_NOTICE_HEADER, CAMP_NOTICE_ICON, frame->x + x, frame->y + y, flags);
        return;
    }

    TextureTableEntryIV *frame = asdTMTexTableEntryAt(CAMP_NOTICE_HEADER, CAMP_NOTICE_FRAME_ANIMATED);
    texDrawTableEntryAtStoredOrigin(2, CAMP_NOTICE_HEADER, CAMP_NOTICE_ICON, frame->x + x, frame->y + y, flags);
    u32 active = jobGetScalarValue() != 0.0f;
    efctSetSpeed(vec2GetSpeed(&camp->sprites[37]) * (f32)active); /* the icon sprite's speed */
    RenderCtxA *context = g_renderCtx;
    s32 state = packNibblesAndByte(6, 1, 0);
    renderStackSet(context->stacks + RENDER_STACK_B, state);
    texDrawTableEntryAtStoredOrigin(2, CAMP_NOTICE_HEADER, CAMP_NOTICE_GLOW, frame->x + x, frame->y + y, flags);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackSet(context->stacks + RENDER_STACK_B, state);
    efctSetSpeed((f32)active);
}

} /* extern "C" */
