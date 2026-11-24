/* NON_MATCHING: 12 lines; the frame draw's shared layer and the address of g_titleScene still trade saved registers.
 * Both stack updates use the counted setter, as the Apocalypse config draw does. */
#include <stdio.h>
#include "camp/Config/Config.h"
#include "camp/CampMenuEntry.h"
#include "camp/RenderCtxTitle.h"
#include "code/Code0029_VariantB.h"
#include "gamedata/DataTable.h"
#include "gfx/SpritePartDraw.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "text/TextDraw.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern ConfigWork *g_config;
u32 resourceRunOperationIfUnblocked(const GridNavigation *cursor);

// Draw the option frame, its unlocked heading, and the two or three available choices.
void configDrawOptionPanel(s32 x, s32 y, s32 /* display */)
{
    char text[64];
    ConfigWork *menu = g_config;
    resourceRunOperationIfUnblocked(&menu->cursor);
    listCursorGetRowIfUnblocked(&menu->cursor);
    texDrawCompositeSprite(2, 0x2F, 0, x, y, 11);
    u32 color = 0xE09800FF;
    const TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x2F, 0x20);
    s32 rowX = frame->x + x;
    s32 rowY = frame->y + y;
    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, 0x2F, 12, rowX, rowY, 11);
    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
    texDrawCompositeSprite(2, 0x2F, 1, rowX, rowY, 16);

    u32 variant = (u32)-1;
    if (gameFlagIsSet(0x555) && gameFlagIsSet(0x557))
        variant = 2;
    else if (gameFlagIsSet(0x557))
        variant = 1;
    else if (gameFlagIsSet(0x555))
        variant = 0;

    void *section = dataTableGet(0x36, 0);
    const ConfigurationChoices *options = (const ConfigurationChoices *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    const ConfigurationChoices *entry = variant < count ? &options[variant] : NULL;
    if (entry) {
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(0x2F, 0x1A);
        sprintf(text, "%s", entry->heading);
        textDrawString((f32)(frame->x + label->x + x), (f32)(frame->y + label->y + y), 0.0f, 2, 0.0f,
                       color, 1.0f, text);
        if (menu->flag == 1)
            configDrawChoices(3, frame->x + x, frame->y + y, menu->selectedChoice[resourceRunOperationIfUnblocked(&menu->cursor)], entry);
        else
            configDrawChoices(2, frame->x + x, frame->y + y, menu->selectedChoice[resourceRunOperationIfUnblocked(&menu->cursor)], entry);
    }
}
}
