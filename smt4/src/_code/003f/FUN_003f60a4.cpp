#include "shard/W5_W5Match5_TwinRecords.h"

using namespace DecoderGlobals;


extern "C" {
extern DecoderState g_mwmoimaadpcmDecoder;
extern u32 DAT_0044e964;
s32 questQueryFalse(void);

void FUN_003f60a4(void)
{
    questQueryFalse();
    g_mwmoimaadpcmDecoder.unk00 = 0;
    g_mwmoimaadpcmDecoder.unk04 = 0;
}
}
