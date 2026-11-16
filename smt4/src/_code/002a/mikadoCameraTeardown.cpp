#include "mikado/mikadoMain.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" void asdMemFreeNonNull(void *block);
inline void MikadoTalkWork::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}

extern "C" {
void FUN_003b8b0c(MikadoCamera *camera);
void FUN_003b980c(MikadoCamera *camera);
void placeWinRelease(void);

// Tear down the mikado camera's scene: release its resources, delete the talk window and close the place window.
void mikadoCameraTeardown(MikadoCamera *camera)
{
    FUN_003b8b0c(camera);
    FUN_003b980c(camera);
    asdDebugHookPtr(camera->talkWork);
    delete camera->talkWork;
    camera->talkWork = NULL;
    placeWinRelease();
}
}
