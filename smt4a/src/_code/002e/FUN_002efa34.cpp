#include "common.h"

/* An object whose vtable slot 31 (offset 0x7c) returns a 64-bit mask. */
class MaskSource {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void unk18();
    virtual void unk1c();
    virtual void unk20();
    virtual void unk24();
    virtual void unk28();
    virtual void unk2c();
    virtual void unk30();
    virtual void unk34();
    virtual void unk38();
    virtual void unk3c();
    virtual void unk40();
    virtual void unk44();
    virtual void unk48();
    virtual void unk4c();
    virtual void unk50();
    virtual void unk54();
    virtual void unk58();
    virtual void unk5c();
    virtual void unk60();
    virtual void unk64();
    virtual void unk68();
    virtual void unk6c();
    virtual void unk70();
    virtual void unk74();
    virtual void unk78();
    virtual u64 mask();
};

extern "C" {

/* True when any bit of `wanted` (two words, low and high) is in the source's mask. */
u32 FUN_002efa34(MaskSource *source, u64 wanted)
{
    if ((source->mask() & wanted) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
