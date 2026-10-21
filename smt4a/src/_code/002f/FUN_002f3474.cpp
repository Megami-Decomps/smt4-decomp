/* NON_MATCHING: compiler schedules the virtual callback load before the embedded-object argument adjustment. */
#include "common.h"
extern "C" {
struct Shared;
struct Member { void (**vtable)(Member *); };
struct Shared { u8 unk00[0x0C]; Shared *previous; Member member; };
struct Holder { u32 unk00; Shared *object; };
/* Installs the replacement and optionally invokes its embedded callback. */
void FUN_002f3474(Holder *holder, Shared *replacement, u32 invoke) {
    replacement->previous = holder->object;
    if (invoke != 0) replacement->member.vtable[0](&replacement->member);
    holder->object = replacement;
}
}
