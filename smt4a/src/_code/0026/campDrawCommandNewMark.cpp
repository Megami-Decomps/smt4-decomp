/* NON_MATCHING: draws the camp menu's "new" marker for a menu id when the matching notification flag is set; written from the decompilation and the retail disassembly, the id dispatch and render-stack scheduling not compared with retail */
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

void campDrawCommandNewMark(s32 menu, s32 x, s32 y, u32 flags, s32 plain)
{
    const u8 *notice = g_camp->noticeFlags;
    bool shown;
    switch (menu) {
    case 3:
    case 0x11:
        shown = notice[4] != 0;
        break;
    case 6:
        shown = notice[0] != 0 || notice[1] != 0;
        break;
    case 8:
        shown = notice[5] != 0 || (gameFlagIsSet(0x464) != 0 && gameFlagIsSet(0x4CA) != 0);
        break;
    case 0x1C:
        shown = notice[5] != 0;
        break;
    case 0x1D:
        shown = notice[0] != 0;
        break;
    case 0x1E:
        shown = notice[1] != 0;
        break;
    case 0x33:
        shown = gameFlagIsSet(0x464) != 0 && gameFlagIsSet(0x4CA) != 0;
        break;
    case 0x38:
        shown = gameFlagIsSet(0x45B) != 0 && gameFlagIsSet(0x4C7) != 0;
        break;
    case 0x3B:
        shown = notice[6] != 0;
        break;
    case 0x42:
        shown = notice[2] != 0;
        break;
    case 0x43:
        shown = notice[2] != 0 || notice[3] != 0;
        break;
    case 0x45:
        shown = notice[3] != 0;
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
    efctSetSpeed(vec2GetSpeed(&g_camp->sprites[37]) * (f32)active); /* the icon sprite's speed */
    RenderCtxA *context = g_renderCtx;
    s32 state = packNibblesAndByte(6, 1, 0);
    renderStackSet(&context->stackB, state);
    texDrawTableEntryAtStoredOrigin(2, CAMP_NOTICE_HEADER, CAMP_NOTICE_GLOW, frame->x + x, frame->y + y, flags);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackSet(&context->stackB, state);
    efctSetSpeed((f32)active);
}

} /* extern "C" */
