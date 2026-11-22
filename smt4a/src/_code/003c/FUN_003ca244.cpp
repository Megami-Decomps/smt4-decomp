/* NON_MATCHING: all 99 instructions match retail; inner duplicate-scan scratch registers (r1/r2/r3/ip) and literal pool order (DAT_005f1d74 vs g_mapDepart) differ (34 diff lines). */
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
/* The departure's collected-item counter is beyond the shared map-job prefix. */
struct DepartureItemOwnerView { u8 unk00[0xD0]; s32 count; };
typedef char DepartureCollectedItemOffsets[offsetof(DepartureCollectedItems, ids) == 0x54 &&
    offsetof(DepartureCollectedItems, quantities) == 0x84 &&
    offsetof(DepartureCollectedItems, count) == 0xA4 ? 1 : -1];
}
extern "C" {
extern MapDepart *g_mapDepart;
extern DepartureCollectedItems DAT_005f1d74;
s32 itemGetTable8Sub3Value(s32 item);

/* Collapse repeated collected items into a stable list with quantities and source attributes. */
void FUN_003ca244(void)
{
    DepartureItemOwnerView *owner = (DepartureItemOwnerView *)g_mapDepart;
    s16 ids[16] = {};
    u8 attributes[16] = {};
    for (s32 index = 0; index < DAT_005f1d74.sourceCount; ++index) {
        ids[index] = (s16)DAT_005f1d74.sourceIds[index];
        attributes[index] = DAT_005f1d74.sourceAttributes[index];
    }
    s32 count = 0;
    for (s32 index = 0; index < DAT_005f1d74.sourceCount; ++index) {
        s16 item = ids[index];
        if (item != 0) {
            s32 quantity = 1;
            for (s32 offset = 1; offset < DAT_005f1d74.sourceCount - index; ++offset) {
                if (ids[index + offset] != 0 && ids[index + offset] == item) {
                    ids[index + offset] = 0;
                    attributes[index + offset] = 0;
                    quantity++;
                }
            }
            DAT_005f1d74.ids[count] = ids[index];
            DAT_005f1d74.attributes[count] = attributes[index];
            DAT_005f1d74.quantities[count] = (s16)quantity;
            if (itemGetTable8Sub3Value(DAT_005f1d74.ids[count]) != 0)
                owner->count++;
            count++;
        }
    }
    DAT_005f1d74.count = (s16)count;
    for (s32 index = 0; index < DAT_005f1d74.count; ++index)
        jyoucyuGetTableEntry(0);
}
}
