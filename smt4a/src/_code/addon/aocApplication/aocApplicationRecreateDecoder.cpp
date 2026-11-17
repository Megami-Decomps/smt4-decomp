/* Recreates the application's 128 KiB work buffer and the decoder object that runs on it. */
#include "addon/AocBufferRequest.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void asdMemFree(void *ptr);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memclr(void *buffer, u32 size);
void sysFatalBreak(void);

void aocApplicationRecreateDecoder(AocMain *app)
{
    if (app->itemRequest != NULL) {
        delete app->itemRequest;
        app->itemRequest = NULL;
    }
    if (app->itemBuffer != NULL) {
        asdMemFree(app->itemBuffer);
        app->itemBuffer = NULL;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\aocApplication.cpp", 391);
    app->itemBuffer = asdMemoryAlloc(0x10000, 0x100, 0, 0x20000, 1);
    rt_memclr(app->itemBuffer, 0x20000);
    if (app->itemBuffer != NULL) {
        app->itemRequest = new AocAuxBufferRequest(app->queryResult, app->itemBuffer, 0x20000);
    } else {
        sysFatalBreak();
    }
}

}
