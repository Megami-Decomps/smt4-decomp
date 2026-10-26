#ifndef CLASSES_SCENECAMERAELEMENT_H
#define CLASSES_SCENECAMERAELEMENT_H

#include "classes/FloatState.h"

/* One 0x544-byte element of a scene camera pair; it constructs and destroys its FloatState. */
class SceneCameraElement {
public:
    SceneCameraElement();
    ~SceneCameraElement();

    /* 0x000 */ u8 unk000[0x4dc];
    /* 0x4DC */ FloatState state;
    /* 0x53C */ u8 unk53c[8];
};

/* Two elements behind a cookie word; its destructor destroys the elements in reverse. */
class SceneCameraElementPair {
public:
    SceneCameraElementPair() {}
    ~SceneCameraElementPair();

    /* 0x000 */ u32 cookie;
    /* 0x004 */ SceneCameraElement elements[2];
};

typedef char SceneCameraElementSizeCheck[
    sizeof(SceneCameraElement) == 0x544 && offsetof(SceneCameraElement, state) == 0x4dc &&
    sizeof(SceneCameraElementPair) == 0xa8c && offsetof(SceneCameraElementPair, elements) == 4 ? 1 : -1];

#endif
