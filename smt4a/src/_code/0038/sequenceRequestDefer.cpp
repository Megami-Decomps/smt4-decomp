#include "shard/W5_W5Match2_SequencePending.h"
extern "C" {
extern SequencePending DAT_005e1f4c;
/* Defer the supplied sequence request until the next update. */
void sequenceRequestDefer(u32 id,u32 argument) { DAT_005e1f4c.active=1; DAT_005e1f4c.id=id; DAT_005e1f4c.argument=argument; }
}
