/* NON_MATCHING: all 99 instructions match retail; inner duplicate-scan scratch registers (r1/r2/r3/ip) and literal pool order (DAT_005f1d74 vs g_mapDepart) differ (34 diff lines). */
#include "map/mapDepart.h"
#include "kernel/jyoucyuGetTableEntry.h"
#include "map/MapDepartItems.h"
#include "map/MapDepartJobWorkA.h"

extern "C" {
extern MapDepart *g_mapDepart;
s32 itemGetTable8Sub3Value(s32 item);

/* Collapse repeated collected items into a stable list with quantities and source attributes. */
void FUN_003ca244(void)
{
    MapDepartJobWorkA *owner = (MapDepartJobWorkA *)g_mapDepart;
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
                owner->flaggedItemCount++;
            count++;
        }
    }
    DAT_005f1d74.count = (s16)count;
    for (s32 index = 0; index < DAT_005f1d74.count; ++index)
        jyoucyuGetTableEntry(0);
}
}
