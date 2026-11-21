/* NON_MATCHING: written as textureLoadOptionalDemonModel (the lookup open-coded, then the same lookup's loaded test as
 * an inline helper); only the clip's left edge differs: retail adds x - sourceX into the register holding originX and
 * loads the colour argument into r2, the build adds into r2 and uses r1. */
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/NkmEnemyRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/NkmEnemyLookup.h"

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
void FUN_00389f74(void *, s32, s32, s32, s32, s32, u32, s32, s32, s32, s32);
}

/* Whether the portrait texture of `unit` (its model, or its override portrait) is loaded; the same lookup as
 * textureLoadOptionalDemonModel's. */
static inline s32 isPortraitTextureLoaded(s32 unit, s32 lookup)
{
    u32 bank = 23;
    s32 image = unit;
    if (lookup) {
        if (unit < 0) {
            image = 0;
        } else {
            const NkmBaseRecord *devil = reinterpret_cast<const NkmBaseRecord *>(nkmBaseGetRecord(static_cast<u16>(unit)));
            if (!devil)
                return 0;
            const NkmEnemyRecord *record = nkmEnemyFindById(static_cast<u16>(unit));
            if (record->levelFlags & 1) {
                image = record->portraitId;
                bank = 35;
                if (image >= 129)
                    return 0;
            } else {
                image = devil->model + 1;
                if (image >= 614)
                    return 0;
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(bank, image);
}

/* Draws the portrait of `unit` clipped to a width x height window at (x, y), through the add-on system when it owns
 * the portrait. */
extern "C" void portraitDrawClipped(s32 unit, s32 sourceX, s32 sourceY, u32 color, s32 lookup,
                              s32 x, s32 y, s32 width, s32 height)
{
    s32 image = unit;
    u32 bank = 23;
    if (lookup) {
        if (unit < 0) {
            image = 0;
        } else {
            const NkmBaseRecord *devil = reinterpret_cast<const NkmBaseRecord *>(nkmBaseGetRecord(static_cast<u16>(unit)));
            if (!devil)
                return;
            const NkmEnemyRecord *record = nkmEnemyFindById(static_cast<u16>(unit));
            if (record->levelFlags & 1) {
                image = record->portraitId;
                bank = 35;
                if (image >= 129)
                    return;
            } else {
                image = devil->model + 1;
                if (image >= 614)
                    return;
            }
        }
    }
    if (!isPortraitTextureLoaded(unit, lookup))
        return;
    if (!recordPrepareLinkedOwner(g_aocSystem, bank, image)) {
        s32 sprite = image * 1000 + 1;
        const TextureTableEntryIV *dimensions = asdTMTexTableEntryAt(bank, sprite);
        PortraitClipBounds clip;
        clip.left = dimensions->originX + (x - sourceX);
        clip.right = clip.left + width;
        clip.top = dimensions->originY + (y - sourceY);
        clip.bottom = clip.top + height;
        FUN_002b04e8(2, bank, sprite, x, y, color, &clip);
    } else {
        FUN_00389f74(g_aocSystem, unit, 2, image, sourceX, sourceY, color, x, y, width, height);
    }
}
