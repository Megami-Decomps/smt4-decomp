#include "gamedata/DevilPortraitDraw.h"

/* unit-local: the clipped draw's bounds live on the stack until the atlas draw consumes them. */
struct PortraitClipBounds {
    s32 top;
    s32 bottom;
    s32 left;
    s32 right;
};
extern "C" {
extern void *g_aocSystem;
s32 recordPrepareLinkedOwner(void *, u32, s32);

void FUN_002b04e8(s32, u32, s32, s32, s32, u32, const PortraitClipBounds *);
void portraitDrawPackageClip(void *, s32, s32, s32, s32, s32, u32, s32, s32, s32, s32);
} /* extern "C" */

/* Draws the portrait of `unit` clipped to a width x height window at (x, y), through the add-on system when it owns
 * the portrait. */
extern "C" void portraitDrawClipped(s32 unit, s32 sourceX, s32 sourceY, u32 color, s32 lookup,
                              s32 x, s32 y, s32 width, s32 height)
{
    s32 image = unit;
    u32 bank = DEMON_PORTRAIT_BANK;
    if (lookup) {
        if (unit < 0) {
            image = 0;
        } else {
            const NkmBaseRecord *devil = (const NkmBaseRecord *)nkmBaseGetRecord((u16)unit);
            if (devil == NULL)
                return;
            const NkmEnemyRecord *record = nkmEnemyFindById((u16)unit);
            if (record->levelFlags & DEMON_PORTRAIT_OVERRIDE) {
                image = record->portraitId;
                bank = ALTERNATE_PORTRAIT_BANK;
                if (image >= ALTERNATE_PORTRAIT_COUNT)
                    return;
            } else {
                image = devil->model + 1;
                if (image >= DEMON_PORTRAIT_COUNT)
                    return;
            }
        }
    }
    if (devilIsTextureLoaded(unit, lookup)) {
        if (recordPrepareLinkedOwner(g_aocSystem, bank, image)) {
            portraitDrawPackageClip(g_aocSystem, unit, 2, image, sourceX, sourceY, color, x, y, width, height);
        } else {
            s32 sprite = image * 1000 + 1;
            const TextureTableEntryIV *dimensions = asdTMTexTableEntryAt(bank, sprite);
            PortraitClipBounds clip;
            clip.left = dimensions->originX + (x - sourceX);
            clip.right = clip.left + width;
            clip.top = dimensions->originY + (y - sourceY);
            clip.bottom = clip.top + height;
            FUN_002b04e8(2, bank, sprite, x, y, color, &clip);
        }
    }
}
