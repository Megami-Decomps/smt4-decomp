#ifndef CLASSES_OBJ557C48_H
#define CLASSES_OBJ557C48_H

#include "common.h"
#include <vector>
#include <utility>

class Obj557b68;
class Obj557c28;
class Obj557b28;
class Obj557d00;

/* Polymorphic base holding the render scene (vtable at 0x557c38 region; no separate symbol). */
class Obj557c48Base {
public:
    Obj557c48Base() : renderScene(0) {}
    virtual ~Obj557c48Base() {}

    /* 0x00: vtable pointer */
    /* 0x04 */ Obj557b68 *renderScene;
};

/* The model manager, g_handleRegistry (Model/MoriModelManager.cpp; vtable at 0x557c48, named after it
 * until its real name is known; allocated at 0x4C bytes): the render scene, the shader, the active
 * camera, the command queue and the shadow map, the list of registered model objects and a pair
 * table, with room for 0x100 entries reserved up front. */
class Obj557c48 : public Obj557c48Base {
public:
    Obj557c48();
    virtual ~Obj557c48();

    Obj557b68 *scene() const { return renderScene; }
    void setScene(Obj557b68 *value) { renderScene = value; }
    void setShader(Obj557d00 *value) { shader = value; }
    Obj557c28 *commands() const { return commandQueue; }
    void setCommands(Obj557c28 *value) { commandQueue = value; }
    Obj557b28 *shadowMap() const { return shadowMapState; }
    void setShadowMap(Obj557b28 *value) { shadowMapState = value; }
    void *sceneResource() const { return resource; }
    void setScratch(void *value) { scratch = value; }

    /* 0x08 */ Obj557d00 *shader;
    /* 0x0C */ void *camera;                  /* the camera the scene is drawn with */
    /* 0x10 */ Obj557c28 *commandQueue;
    /* 0x14 */ Obj557b28 *shadowMapState;
    /* 0x18 */ std::vector<u32> objects;      /* the registered model objects */
    /* 0x24 */ std::vector<std::pair<u32, u32> > entries;
    /* 0x30 */ f32 scale;
    /* 0x34 */ u32 flags;
    /* 0x38 */ void *resource;
    /* 0x3C */ void *scratch;
    /* 0x40 */ u8 unk40[0xC];
};

typedef char Obj557c48SizeCheck[sizeof(Obj557c48) == 0x4C &&
    __INTADDR__(&((Obj557c48 *)0)->renderScene) == 0x04 && __INTADDR__(&((Obj557c48 *)0)->camera) == 0x0C &&
    __INTADDR__(&((Obj557c48 *)0)->objects) == 0x18 && __INTADDR__(&((Obj557c48 *)0)->flags) == 0x34 &&
    __INTADDR__(&((Obj557c48 *)0)->scratch) == 0x3C ? 1 : -1];

#endif
