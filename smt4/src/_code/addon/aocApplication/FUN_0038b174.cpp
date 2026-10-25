/* NON_MATCHING: address CSE differs: retail keeps &app->buffer (+0x5ac) in r5 and addresses the decoder field directly; the built code keeps &app->decoder in r5 (same as aocApplicationRecreateDecoder) */
/* Recreates the application's 128 KiB work buffer and the decoder object that runs on it. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

struct AocApplication {
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ u32 source;
    /* 0x084 */ u8 unk084[0x524];
    /* 0x5a8 */ void *decoder;
    /* 0x5ac */ void *buffer;
};

void *FUN_00352f0c(void *decoder);
void asdMemFreeNonNull(void *decoder);
void asdMemFree(void *ptr);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memclr(void *buffer, u32 size);
void *asdOperatorNew(u32 size);
void *FUN_00352ee8(void *mem, u32 source, void *buffer, u32 size);
void asdFatalError(void);

void FUN_0038b174(AocApplication *app)
{
    if (app->decoder != NULL) {
        asdMemFreeNonNull(FUN_00352f0c(app->decoder));
        app->decoder = NULL;
    }
    if (app->buffer != NULL) {
        asdMemFree(app->buffer);
        app->buffer = NULL;
    }
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\aocApplication.cpp", 360);
    app->buffer = asdMemoryAlloc(0x10000, 0x100, 0, 0x20000, 1);
    rt_memclr(app->buffer, 0x20000);
    if (app->buffer != NULL) {
        void *mem = asdOperatorNew(16);

        if (mem != NULL) {
            mem = FUN_00352ee8(mem, app->source, app->buffer, 0x20000);
        }
        app->decoder = mem;
    } else {
        asdFatalError();
    }
}

}
