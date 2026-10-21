#include "common.h"

namespace {
struct MessageState { u8 padding[0xa26]; u8 first; u8 second; };
struct MessageMain { u32 job; MessageState *first; MessageState *second; };
}

extern "C" {
/* Reads or updates the current object state. */
extern MessageMain g_messageMain;
void FUN_002a71fc(u8 value)
{
    g_messageMain.second->first = value;
    g_messageMain.first->first = value;
}
}
