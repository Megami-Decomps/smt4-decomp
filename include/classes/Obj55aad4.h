#ifndef CLASSES_OBJ55AAD4_H
#define CLASSES_OBJ55AAD4_H
#include "classes/Obj55ac68.h"

// Owns two word values, a shared buffer, strings, and a nested state owner.
class Obj55aad4 {
public:
    virtual ~Obj55aad4();
private:
    // 0x00: vtable pointer
    u8 unk04[0x10]; // 0x04
    Obj55aff4 name; // 0x14
    Obj55a4b8 first; // 0x1C
    Obj55a4b8 second; // 0x30
    u8 unk44[4]; // 0x44
    Obj55b104 sharedState; // 0x48
    Obj55aff4Vector strings; // 0x68
    u8 unk74[0x14]; // 0x74
    Obj55ac68 nested; // 0x88
};
#endif
