#include "battle/btlMain.h"
#include "shard/btlMainGetUnk14.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain;

u32 btlMainGetUnk14(void)
{
    return g_btlMain.unk14;
}

} /* extern "C" */
