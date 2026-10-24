/* NON_MATCHING: same as the default constructor: after the two-element array constructor armcc addresses the later stores from the array constructor's result with folded offsets, retail rebases to `this` once. */
#include "classes/Obj557b18.h"

extern "C" void rt_aeabi_memclr(void *memory, u32 bytes);

Obj557b18::Obj557b18(UnitModelContent *content, u32 partIndex, u32 id)
    : unk04(0), unk08(0), unk0c(0),
      unk98(0), unk9c(0), unka8(0), unkac(0), unkc8(0), unkcc(0), unkd8(0), unkdc(0),
      unke4(0), unke5(0), unke8(0), unkec(0), unkf0(0), unkf4(0), unkf8(0), unkfc(0), unk100(0), unk104(0),
      unk10c(0), unk110(0), unk114(0), unk118(0), unk11c(1),
      unk1b0(0), unk1b4(0.0f), unk1b8(0.0f), unk1bc(0.0f),
      unk1fc(1.0f), unk200(0), unk204(0), unk208(0xffff), unk20c(0), unk210(0),
      unk254(0), unk258(0), unk25c(0), unk260(0), unk264(0), unk268(0)
{
    rt_aeabi_memclr(unk214, sizeof(unk214));
    unk1b0 = id;
    attachContent(content, partIndex);
}
