/* NON_MATCHING: retail uses push {r4, lr} where the compiled block uses bx lr. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace DecoderGlobals;


extern "C" {
extern DecoderState g_mwmoimaadpcmDecoder;
extern u32 DAT_0044e964;

void FUN_003f60a4(void)
{
    g_mwmoimaadpcmDecoder.unk00 = 0;
    g_mwmoimaadpcmDecoder.unk04 = 0;
}
}
