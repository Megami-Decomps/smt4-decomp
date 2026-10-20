#include "shard/Shard003A.h"

extern "C" {

extern u8 g_messageMain;

void FUN_003a76a8(u8 value)
{
    g_messageMain = value;
}

} /* extern "C" */
