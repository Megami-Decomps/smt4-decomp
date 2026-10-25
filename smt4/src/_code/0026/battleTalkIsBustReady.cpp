#include "shard/W5_W5Match2_BustUpReady.h"

/* The bust-up's embedded record starts 0x20 bytes in; its signed flags byte is read through a leaf getter. */
struct BustUpRecordView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 record[1];
};

extern "C" {

extern BustUpReadyWork *g_btlTalkBustUp;
s32 uiSpriteGetCompletionState(const void *record);

/* An absent bust-up or a record with nonzero flags reports ready. */
s32 battleTalkIsBustReady(void)
{
    if (g_btlTalkBustUp == NULL) {
        return 1;
    }
    return uiSpriteGetCompletionState(reinterpret_cast<BustUpRecordView *>(g_btlTalkBustUp)->record) != 0;
}

} /* extern "C" */
