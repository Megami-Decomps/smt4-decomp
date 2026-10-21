#include "shard/W5_W5Match2_SequencePending.h"
extern "C" {
extern SequencePending DAT_004937a0;
/* Defer the supplied sequence request until the next update. */
void sequenceRequestDefer(u32 id,u32 argument) { DAT_004937a0.active=1; DAT_004937a0.id=id; DAT_004937a0.argument=argument; }
}
