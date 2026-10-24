/* NON_MATCHING: everything up to and including the matrix copy and the scale stores matches retail (member-initializer order, owner recovered from the array constructor's result); after the scale sub-object retail rebases r4 back to `this` once (and so needs a register offset for the 0x208 halfword), armcc keeps addressing from the scale pointer and rebases only for the far words, and does not hold `this` in r4 for the return. */
#include "classes/Obj557b18.h"

using nw::math::MTX34;

extern "C" {
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *dest, const MTX34 *source);
void rt_aeabi_memclr(void *memory, u32 bytes);
}

Obj557b18::Obj557b18()
    : unk04(0), unk08(0), unk0c(0),
      unk98(0), unk9c(0), unka8(0), unkac(0), unkc8(0), unkcc(0), unkd8(0), unkdc(0),
      unke4(0), unke5(0), unke8(0), unkec(0), unkf0(0), unkf4(0), unkf8(0), unkfc(0), unk100(0), unk104(0),
      unk10c(0), unk110(0), unk114(0), unk118(0), unk11c(1),
      unk1b0(0), unk1b4(0.0f), unk1b8(0.0f), unk1bc(0.0f),
      unk1fc(1.0f), unk200(0), unk204(0), unk208(0xffff), unk20c(0), unk210(0),
      unk214(),
      unk254(0), unk258(0), unk25c(0), unk260(0), unk264(0), unk268(0)
{
}
