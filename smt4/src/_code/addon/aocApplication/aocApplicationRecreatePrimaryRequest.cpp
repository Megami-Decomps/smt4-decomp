/* Recreates the application's 128 KiB work buffer and the decoder object that runs on it. */
#include "addon/AocBufferRequest.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void asdMemFree(void *ptr);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memclr(void *buffer, u32 size);
void asdFatalError(void);

void aocApplicationRecreatePrimaryRequest(AocMain *app)
{
    if (app->contentRequest != NULL) {
        delete app->contentRequest;
        app->contentRequest = NULL;
    }
    if (app->contentBuffer != NULL) {
        asdMemFree(app->contentBuffer);
        app->contentBuffer = NULL;
    }
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\aocApplication.cpp", 360);
    app->contentBuffer = asdMemoryAlloc(0x10000, 0x100, 0, 0x20000, 1);
    rt_memclr(app->contentBuffer, 0x20000);
    if (app->contentBuffer != NULL) {
        app->contentRequest = new AocBufferRequest(app->queryResult, app->contentBuffer, 0x20000);
    } else {
        asdFatalError();
    }
}

}
