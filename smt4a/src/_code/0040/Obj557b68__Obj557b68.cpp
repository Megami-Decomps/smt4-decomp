/* NON_MATCHING: class layout, inlined matrix/-1 member constructors and nested blocks recovered; armcc keeps its own base-register strategy (retail rebases through writeback `str r5,[r0,#16]!` and `[r0,#220]!`, registers r4/r5/r6 vs r4-r8). */
#include "classes/Obj557b68.h"

Obj557b68::Obj557b68()
    : unk004(0), unk008(0), unk00c(0), unk0fc(0), unk100(0), unk104(4)
{
}
