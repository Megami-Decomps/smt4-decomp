/* NON_MATCHING: same instruction mix as retail; registers differ (retail keeps the constructor argument in r5 and the loaded content in r6, builds the loader defaults in r1-r3 and addresses the descriptor after overriding it; the build swaps r5/r6 and reuses r0-r2). */
#include "common.h"
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

u32 FUN_001581dc(ModelLoadDesc *desc);                      /* loads the model, returns its content */
void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */
extern MoriModelBody *_ZN9Obj557b18C1EP16UnitModelContentjj(void *mem, u32 unk0C, int zero, u32 arg);   /* body constructor */

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
        u32 loaded = FUN_001581dc(&desc);
        content->unk0C = loaded;
        void *mem = FUN_00178b04(0x26c, DAT_00526000, 0xef);
        MoriModelBody *body = (MoriModelBody *)mem;
        if (mem != NULL) {
            body = _ZN9Obj557b18C1EP16UnitModelContentjj(mem, loaded, 0, arg);
        }
        content->body = body;
    }
}

} /* extern "C" */
