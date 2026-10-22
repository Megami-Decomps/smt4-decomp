#include "common.h"
extern "C" {
void sysPlayVoice(u32 value);
/* Forwards to the shared implementation. */
void FUN_0047fa50(u32 value) { sysPlayVoice(value); }
}
