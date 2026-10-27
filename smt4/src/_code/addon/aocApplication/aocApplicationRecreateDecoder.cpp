/* Recreates the application's 128 KiB work buffer and the decoder object that runs on it. */
#include "addon/AocBufferRequest.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void asdMemFree(void *ptr);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memclr(void *buffer, u32 size);
void asdFatalError(void);

void aocApplicationRecreateDecoder(AocApplicationRequestView *app)
{
    if (app->auxiliary != NULL) {
        delete app->auxiliary;
        app->auxiliary = NULL;
    }
    if (app->auxiliaryBuffer != NULL) {
        asdMemFree(app->auxiliaryBuffer);
        app->auxiliaryBuffer = NULL;
    }
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\aocApplication.cpp", 391);
    app->auxiliaryBuffer = asdMemoryAlloc(0x10000, 0x100, 0, 0x20000, 1);
    rt_memclr(app->auxiliaryBuffer, 0x20000);
    if (app->auxiliaryBuffer != NULL) {
        app->auxiliary = new AocAuxBufferRequest(app->source, app->auxiliaryBuffer, 0x20000);
    } else {
        asdFatalError();
    }
}

}
