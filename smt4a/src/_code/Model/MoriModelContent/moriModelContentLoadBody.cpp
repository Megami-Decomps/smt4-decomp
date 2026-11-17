/* NON_MATCHING: same instruction mix as retail; registers differ (retail keeps the constructor argument in r5 and the loaded content in r6, builds the loader defaults in r1-r3 and addresses the descriptor after overriding it; the build swaps r5/r6 and reuses r0-r2). */
#include "classes/Obj557b18.h"
#include "classes/Obj557d00.h"
#include <new>
#include "Model/MoriModelContent.h"

/* What the model loader is given: defaults that the content then overrides. */
struct ModelLoadDesc {
    /* 0x00 */ void *source;
    /* 0x04 */ u8 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14;

    ModelLoadDesc() : source(NULL), unk04(0), unk08(0x30000), unk0C(0x10000), unk10(0x10000), unk14(0) {}
};

extern "C" {

Obj557d00 *FUN_001581dc(void *desc);
void *asdMemoryAllocTraced(u32 size, const char *file, int line);   /* allocate with source location */

extern char g_moriModelContentSourcePath[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

// Loads the content's model and creates its body (MoriModelContent.cpp line 239).
void moriModelContentLoadBody(MoriModelContent *content, Obj557b18 *parent)
{
    if (content->file != NULL) {
        ModelLoadDesc desc;
        desc.source = content->file;
        desc.unk08 = content->requestFirst;
        desc.unk0C = content->requestSecond;
        desc.unk14 = content->requestMode;
        Obj557d00 *loaded = FUN_001581dc(&desc);
        content->resource = loaded;
        Obj557b18 *body = static_cast<Obj557b18 *>(
            asdMemoryAllocTraced(sizeof(Obj557b18), g_moriModelContentSourcePath, 0xef));
        if (body != NULL) {
            /* The constructor takes the parent body as a word (its mangled name keeps `unsigned int`). */
            body = new (body) Obj557b18(reinterpret_cast<UnitModelContent *>(loaded), 0,
                reinterpret_cast<u32>(parent));
        }
        content->body = body;
    }
}

} /* extern "C" */
