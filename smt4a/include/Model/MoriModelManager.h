/* Model/MoriModelManager.cpp (Apocalypse): the model manager, created once by handleRegistryCreate.
 *
 * The manager (class Obj557c48) owns the render scene, the shader, the command queues and the
 * shadow map, and lists the model objects registered with it: handleRegistryRegisterObject appends
 * an object to the list at +0x18 and stores the manager in the object's registry link (+0x268),
 * ptrListRemoveClearOwner removes it again and clears the link. */
#pragma once
#include "common.h"
#include "classes/Obj557c48.h"

extern "C" {

u8 *gameDataBlocksGetSaveData(void);

} /* extern "C" */

extern "C" {
void FUN_001582d0(u32 *valueRef);
}

extern "C" {
/* The model manager (handle registry); NULL until handleRegistryCreate runs. */
extern Obj557c48 *g_handleRegistry;

/* Lists `object` (a registered model object) in the manager unless a manager already holds it. */
void handleRegistryRegisterObject(Obj557c48 *registry, void *object);
/* Removes `object` from the manager's list and clears its registry link. */
void ptrListRemoveClearOwner(Obj557c48 *registry, void *object);
/* Releases the manager's render scene and shadow-map buffers. */
void resourceOwnerReleaseAndReset(Obj557c48 *registry);
}
