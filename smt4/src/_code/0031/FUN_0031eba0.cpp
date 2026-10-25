/* NON_MATCHING: first portrait lookup spills the record pointer and second validation uses different scratch registers. */
#include "gamedata/DevilRecord.h"
#include "gamedata/Table00.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct PortraitClipBounds {
    s32 top;
    s32 bottom;
    s32 left;
    s32 right;
};
struct PortraitImageDimensions {
    u16 width;
    u16 height;
};
extern "C" {
extern void *g_aocSystem;
const Table00Record *dataTable00FindById(u16);
s32 recordPrepareLinkedOwner(void *, u32, s32);

void FUN_002b04e8(s32, u32, s32, s32, s32, u32, const PortraitClipBounds *);
void FUN_00389f74(void *, s32, s32, s32, s32, s32, u32, s32, s32, s32, s32);
}

static inline bool resolveClippedPortrait(s32 unit, s32 lookup, u32 &bank, s32 &image)
{
    bank = 23;
    image = unit;
    if (lookup) {
        if (unit < 0) {
            image = 0;
        } else {
            const DevilRecord *devil = reinterpret_cast<const DevilRecord *>(devilGetRecord(static_cast<u16>(unit)));
            if (!devil)
                return false;
            const Table00Record *record = dataTable00FindById(static_cast<u16>(unit));
            if (record->unk02[1] & 1) {
                image = record->portrait.id;
                bank = 35;
                if (image >= 129)
                    return false;
            } else {
                image = devil->model + 1;
                if (image >= 614)
                    return false;
            }
        }
    }
    return true;
}

extern "C" void FUN_0031eba0(s32 unit, s32 sourceX, s32 sourceY, u32 color, s32 lookup,
                              s32 x, s32 y, s32 width, s32 height)
{
    u32 bank;
    s32 image;
    if (!resolveClippedPortrait(unit, lookup, bank, image))
        return;
    u32 loadedBank;
    s32 loadedImage;
    if (!resolveClippedPortrait(unit, lookup, loadedBank, loadedImage))
        return;
    if (!asdTMTexTableNodeIsLoaded(loadedBank, loadedImage))
        return;
    if (!recordPrepareLinkedOwner(g_aocSystem, bank, image)) {
        s32 sprite = image * 1000 + 1;
        const PortraitImageDimensions *dimensions = reinterpret_cast<const PortraitImageDimensions *>(asdTMTexTableEntryAt(bank, sprite));
        PortraitClipBounds clip;
        clip.left = dimensions->width + (x - sourceX);
        clip.right = clip.left + width;
        clip.top = dimensions->height + (y - sourceY);
        clip.bottom = clip.top + height;
        FUN_002b04e8(2, bank, sprite, x, y, color, &clip);
    } else {
        FUN_00389f74(g_aocSystem, unit, 2, image, sourceX, sourceY, color, x, y, width, height);
    }
}
