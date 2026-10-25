/* Recreates the application's 128 KiB work buffer and the decoder object that runs on it. */
#include "addon/AocBufferRequest.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void asdMemFree(void *ptr);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memclr(void *buffer, u32 size);
void sysFatalBreak(void);

void aocApplicationRecreatePrimaryRequest(AocApplicationRequestView *app)
{
    if (app->primary != NULL) {
        delete app->primary;
        app->primary = NULL;
    }
    if (app->primaryBuffer != NULL) {
        asdMemFree(app->primaryBuffer);
        app->primaryBuffer = NULL;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\aocApplication.cpp", 360);
    app->primaryBuffer = asdMemoryAlloc(0x10000, 0x100, 0, 0x20000, 1);
    rt_memclr(app->primaryBuffer, 0x20000);
    if (app->primaryBuffer != NULL) {
        app->primary = new AocBufferRequest(app->source, app->primaryBuffer, 0x20000);
    } else {
        sysFatalBreak();
    }
}

}
