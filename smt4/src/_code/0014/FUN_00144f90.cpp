/* NON_MATCHING: supervisor-call wrapper (hand-written SDK assembly: push {r0}; svc 0x35; ldr r2,[sp]; str r1,[r2]); armcc __svc calls spill through r4 instead. */
#include "common.h"

extern "C" {

} /* extern "C" */
