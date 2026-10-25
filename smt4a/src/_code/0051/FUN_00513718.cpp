#include "shard/W5_W5Match5_TwinRecords.h"

using namespace DecoderGlobals;


extern "C" {
extern DecoderState g_mwmoimaadpcmDecoder;
extern u32 DAT_0044e964;
s32 FUN_00284dbc(void);

void FUN_00513718(void)
{
    FUN_00284dbc();
    g_mwmoimaadpcmDecoder.unk00 = 0;
    g_mwmoimaadpcmDecoder.unk04 = 0;
}
}
