/* NON_MATCHING: same instruction mix as retail; registers differ (retail keeps the constructor argument in r5 and the loaded content in r6, builds the loader defaults in r1-r3 and addresses the descriptor after overriding it; the build swaps r5/r6 and reuses r0-r2). */
#include "classes/Obj557b18.h"
#include "classes/Obj557d00.h"
#include <new>
#include "Model/MoriModelContentLoad.h"

/* What the model loader is given: defaults that the content then overrides. */
struct ModelLoadDesc {
    /* 0x00 */ u32 source;
    /* 0x04 */ u8 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14;

    ModelLoadDesc() : source(0), unk04(0), unk08(0x30000), unk0C(0x10000), unk10(0x10000), unk14(0) {}
};

extern "C" {

Obj557d00 *FUN_001581dc(void *desc);
void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */

extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

// Loads the content's model and creates its body (MoriModelContent.cpp line 239).
void FUN_0040aad4(MoriModelContentLoad *content, u32 arg)
{
    if (content->source != 0) {
        ModelLoadDesc desc;
        desc.source = content->source;
        desc.unk08 = content->unk18;
        desc.unk0C = content->unk1C;
        desc.unk14 = content->unk14;
        Obj557d00 *loaded = FUN_001581dc(&desc);
        content->unk0C = reinterpret_cast<u32>(loaded);
        Obj557b18 *body = static_cast<Obj557b18 *>(
            FUN_00178b04(sizeof(Obj557b18), DAT_00526000, 0xef));
        if (body != NULL) {
            body = new (body) Obj557b18(reinterpret_cast<UnitModelContent *>(loaded), 0, arg);
        }
        content->body = reinterpret_cast<MoriModelBody *>(body);
    }
}

} /* extern "C" */
