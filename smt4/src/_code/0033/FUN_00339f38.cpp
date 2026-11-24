/* NON_MATCHING: retail clears the field through r1 and passes the entry value of r5 to the allocator.
 * asdOperatorNew does not read its owner argument, so pass NULL rather than an indeterminate value. */
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
    if (scene->playerModel != NULL) {
        mdlPartsRelease(scene->playerModel);
        delete scene->playerModel;
        scene->playerModel = NULL;
    }
    scene->playerModel = new (NULL) Obj4207d0;
    playerModelListCreate(scene->playerModel, 7);
}

} /* extern "C" */
