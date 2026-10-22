#include "common.h"

struct AsdCecMessageBox;

// Private views of the fields accessed by this function.
struct CecStateView {
    u8 unk00[0x18];
    AsdCecMessageBox* unk18; // 0x18
};

struct CecGlobalView {
    u8 unk00[4];
    CecStateView* unk04; // 0x04
};

extern "C" {
extern CecGlobalView g_asdCec;
s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 id, u32 expectedTag);
s32 asdCecMessageBoxClose(AsdCecMessageBox* box);
u32 wstrlenU16(const u16* text);
u32 nn_cec_CTR_MessageBox_SetMessageBoxData(AsdCecMessageBox* box,
                                         u32 tag, const void* data,
                                         u32 size);
}

// Store the UTF-16 name and supplied data in the message box, then close it.
extern "C" u32 cecWriteMessageBoxNameAndData(u32 id, u32 expectedTag, const u16* name,
                            const void* data, u32 dataSize)
{
    u32 result = 5;
    if (static_cast<s32>(asdCecMessageBoxOpen(g_asdCec.unk04->unk18,
                                             id, expectedTag) &
                         0x80000000u) >= 0) {
        u32 nameSize = wstrlenU16(name) << 1;
        nn_cec_CTR_MessageBox_SetMessageBoxData(g_asdCec.unk04->unk18,
                                               0x6e, name, nameSize);
        nn_cec_CTR_MessageBox_SetMessageBoxData(g_asdCec.unk04->unk18,
                                               0x65, data, dataSize);
        asdCecMessageBoxClose(g_asdCec.unk04->unk18);
        result = 0;
    }
    return result;
}
