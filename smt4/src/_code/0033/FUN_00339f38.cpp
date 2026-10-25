/* NON_MATCHING: identical apart from the register of the null store after the release (retail r1, built r0); `owner` is an uninitialised local in the original (retail passes the unset r5) */
#include "classes/Obj4207d0.h"

extern "C" {

struct StatusModelScene {
    /* 0x0000 */ u8 unk0000[0x4394];
    /* 0x4394 */ Obj4207d0 *playerModel;
};

void mdlPartsRelease(void *model);
void playerModelListCreate(Obj4206e8 *model, s32 kind);

/* Releases the scene's player model (if any) and builds a fresh one. */
void FUN_00339f38(StatusModelScene *scene)
{
    void *owner;

    if (scene->playerModel != NULL) {
        mdlPartsRelease(scene->playerModel);
        delete scene->playerModel;
        scene->playerModel = NULL;
    }
    scene->playerModel = new (owner) Obj4207d0;
    playerModelListCreate(scene->playerModel, 7);
}

} /* extern "C" */
