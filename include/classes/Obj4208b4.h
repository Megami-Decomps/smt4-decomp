#ifndef CLASSES_OBJ4208B4_H
#define CLASSES_OBJ4208B4_H

#include "battle/TargetMarkerEntry.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


/* The battle target selection's marker group (vtable at 0x4208b4): five cursor markers that pulse
 * and turn. The constructor installs the vtable first, so the object is deleted through slot 1. */
class Obj4208b4 {
public:
    Obj4208b4()
    {
        for (s32 index = 0; index < 5; ++index) {
            entries[index].visible = 0;
        }
        pulseFrame = 0.0f;
        angleDegrees = 40.0f;
    }
    virtual ~Obj4208b4();

    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }

    /* 0x00: vtable pointer */
    /* 0x04 */ TargetMarkerEntry entries[5];
    /* 0x54 */ u32 unk54;
    /* 0x58 */ f32 pulseFrame;
    /* 0x5C */ f32 angleDegrees;
};

typedef char Obj4208b4SizeCheck[sizeof(Obj4208b4) == 0x60 ? 1 : -1];

#endif
