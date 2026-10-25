/* Recreates the application's 128 KiB work buffer and the decoder object that runs on it. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

struct AocApplication {
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ u32 source;
    /* 0x084 */ u8 unk084[0x52c];
    /* 0x5b0 */ void *decoder;
    /* 0x5b4 */ void *buffer;
};

void *FUN_0023a1b8(void *decoder);
void asdMemFreeNonNull(void *decoder);
void asdMemFree(void *ptr);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memclr(void *buffer, u32 size);
void *asdOperatorNew(u32 size);
void *FUN_00352740(void *mem, u32 source, void *buffer, u32 size);
void asdFatalError(void);

void aocApplicationRecreateDecoder(AocApplication *app)
{
    void *decoder = app->decoder;
    if (decoder != NULL) {
        asdMemFreeNonNull(FUN_0023a1b8(decoder));
        app->decoder = NULL;
    }
    if (app->buffer != NULL) {
        asdMemFree(app->buffer);
        app->buffer = NULL;
    }
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\aocApplication.cpp", 391);
    app->buffer = asdMemoryAlloc(0x10000, 0x100, 0, 0x20000, 1);
    rt_memclr(app->buffer, 0x20000);
    if (app->buffer != NULL) {
        void *mem = asdOperatorNew(16);

        if (mem != NULL) {
            mem = FUN_00352740(mem, app->source, app->buffer, 0x20000);
        }
        app->decoder = mem;
    } else {
        asdFatalError();
    }
}

}
