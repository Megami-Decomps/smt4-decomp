/* NON_MATCHING: Result failure tests, error constant sharing, and box-state store/branch layout differ. */
#include "shard/W6_W6Match6_CecMessageBox.h"

extern "C" {
extern AsdCecGlobals g_asdCec;
s32 asdCecMessageBoxClose(AsdCecMessageBox *box);
u32 wstrlenU16(const u16 *text);
s32 FUN_0042ed58(AsdCecMessageBox *box, u32 id, u32 tag, u32 options, u32 mode,
                u32 icon, const u16 *name, u32 nameBytes, u32 inboxBytes, u32 outboxBytes,
                u32 inboxCapacity, u32 outboxCapacity, u32 messageBytes);

// Open a StreetPass box, creating a missing one, and return the module's status code.
u32 FUN_003a476c(u32 id, u32 tag, u32 options, u32 mode, u32 icon, const u16 *name,
                 u32 inboxCapacity, u32 outboxCapacity)
{
    u32 status = 5;
    s32 result = asdCecMessageBoxOpen(g_asdCec.cec->box, id, tag);
    if (static_cast<s32>(result & 0x80000000) < 0) {
        if (result != static_cast<s32>(0xc8810bef)) {
            if (result == static_cast<s32>(0xc8810bea))
                status = 2;
            return status;
        }
        u32 nameBytes = wstrlenU16(name) * 2;
        result = FUN_0042ed58(g_asdCec.cec->box, id, tag, options, mode, icon, name, nameBytes,
                              0x80000, 0x80000, inboxCapacity, outboxCapacity, 0x19000);
        if (result == static_cast<s32>(0xc8e10868))
            status = 3;
        if (result == static_cast<s32>(0xc8e10867))
            status = 4;
        result = asdCecMessageBoxOpen(g_asdCec.cec->box, id, tag);
        if (static_cast<s32>(result & 0x80000000) < 0)
            return status;
        status = 1;
    } else {
        status = 6;
    }
    AsdCec *cec = g_asdCec.cec;
    if (cec != NULL) {
        cec->unk00 = id;
        cec->unk04 = tag;
    }
    asdCecMessageBoxClose(cec->box);
    return status;
}
}
