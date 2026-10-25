/* NON_MATCHING: collected-item buffer clearing and duplicate-scan loop scheduling differ. */
#include "map/mapDepart.h"
#include "kernel/jyoucyuGetTableEntry.h"

namespace {
struct DepartureCollectedItems {
    u32 sourceIds[16];
    u8 sourceAttributes[16];
    s32 sourceCount;
    s16 ids[16];
    u8 attributes[16];
    s16 quantities[16];
    s16 count;
};
struct DepartureItemBuffer { s16 ids[16]; u8 attributes[16]; };
/* The departure's collected-item counter is beyond the shared map-job prefix. */
struct DepartureItemOwnerView { u8 unk00[0xD0]; s32 count; };
typedef char DepartureCollectedItemOffsets[offsetof(DepartureCollectedItems, ids) == 0x54 &&
    offsetof(DepartureCollectedItems, quantities) == 0x84 &&
    offsetof(DepartureCollectedItems, count) == 0xA4 ? 1 : -1];
}
extern "C" {
extern MapDepart *g_mapDepart;
extern DepartureCollectedItems DAT_005f1d74;
s32 FUN_00480a54(s32 item);

/* Collapse repeated collected items into a stable list with quantities and source attributes. */
void FUN_003ca244(void)
{
    DepartureItemOwnerView *owner = reinterpret_cast<DepartureItemOwnerView *>(g_mapDepart);
    DepartureItemBuffer items = {};
    for (s32 index = 0; index < DAT_005f1d74.sourceCount; ++index) {
        items.ids[index] = static_cast<s16>(DAT_005f1d74.sourceIds[index]);
        items.attributes[index] = DAT_005f1d74.sourceAttributes[index];
    }
    s32 count = 0;
    for (s32 index = 0; index < DAT_005f1d74.sourceCount; ++index) {
        s16 item = items.ids[index];
        if (item != 0) {
            s32 quantity = 1;
            for (s32 next = index + 1; next < DAT_005f1d74.sourceCount; ++next) {
                if (items.ids[next] != 0 && items.ids[next] == item) {
                    items.ids[next] = 0;
                    quantity++;
                    items.attributes[next] = 0;
                }
            }
            DAT_005f1d74.ids[count] = items.ids[index];
            DAT_005f1d74.attributes[count] = items.attributes[index];
            DAT_005f1d74.quantities[count] = static_cast<s16>(quantity);
            if (FUN_00480a54(DAT_005f1d74.ids[count]) != 0)
                owner->count++;
            count++;
        }
    }
    DAT_005f1d74.count = static_cast<s16>(count);
    for (s32 index = 0; index < DAT_005f1d74.count; ++index)
        jyoucyuGetTableEntry(0);
}
}
