#include "common.h"

struct ListedObject {
    u8 unk00; // 0x00
    u8 active; // 0x01
};

struct ObjectPointerList {
    ListedObject** begin; // 0x00
    ListedObject** end;   // 0x04
    ListedObject** capacityEnd; // 0x08
};

struct ObjectListOwner {
    u8 unk000[0x114]; // 0x000
    ObjectPointerList lists[8]; // 0x114
};

// Clear the active byte of every object in all eight lists.
extern "C" void objectListsClearActive(ObjectListOwner* owner)
{
    for (s32 index = 0; index < 8; ++index) {
        ObjectPointerList* list = &owner->lists[index];
        ListedObject** end = list->end;
        for (ListedObject** current = list->begin; current != end; ++current) {
            (*current)->active = 0;
        }
    }
}
