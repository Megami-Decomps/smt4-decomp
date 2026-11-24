#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* unit-local: the crop rectangle exists only on the stack while the portrait is drawn */
struct DemonPortraitCropA { s32 top, bottom, left, right; };
extern "C" {
extern u32 g_aocSystem;
bool gameFlagIsSet(u32 flag);
s32 recordPrepareLinkedOwner(u32 package, u32 table, s32 image);
void FUN_001849bc(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority, const void *crop);
void FUN_00471a04(u32 package, s32 id, u32 flags, s32 image, s32 x, s32 y, s32 z,
                  s32 clipX, s32 clipY, s32 clipWidth, s32 clipHeight);

/* Draws a clipped demon portrait from its add-on resource or the built-in portrait atlas. */
void portraitDrawClipped(s32 id, s32 x, s32 y, s32 z, s32 resolve,
                  s32 clipX, s32 clipY, s32 clipWidth, s32 clipHeight)
{
    u32 table = 15;
    s32 image = id;
    if (resolve) {
        if (id < 0) {
            image = gameFlagIsSet(17) ? 0 : 0x25e;
        } else {
            const NkmBaseRecordA *record = reinterpret_cast<const NkmBaseRecordA *>(nkmBaseGetRecord(static_cast<u16>(id)));
            if (record == NULL)
                return;
            const NkmEnemyRecordA *base = nkmEnemyFindById(static_cast<u16>(id));
            /* The texture-kind flag is in the table header, distinct from the flags at 0x16. */
            if (base->level & 0x8000) {
                image = base->battleTextureId;
                table = 25;
                if (image >= 154)
                    return;
            } else {
                image = record->model + 1;
                if (image >= 0x277)
                    return;
            }
        }
    }
    if (devilIsTextureLoaded(id, resolve)) {
        if (recordPrepareLinkedOwner(g_aocSystem, table, image)) {
            FUN_00471a04(g_aocSystem, id, 2, image, x, y, z, clipX, clipY, clipWidth, clipHeight);
        } else {
            s32 sprite = image * 1000 + 1;
            const TextureTableEntryIV *origin = asdTMTexTableEntryAt(table, sprite);
            DemonPortraitCropA crop;
            crop.left = origin->originX + (clipX - x);
            crop.right = crop.left + clipWidth;
            crop.top = origin->originY + (clipY - y);
            crop.bottom = crop.top + clipHeight;
            FUN_001849bc(2, table, sprite, clipX, clipY, z, &crop);
        }
    }
}
}
