#ifndef CLASSES_OBJ557B58_H
#define CLASSES_OBJ557B58_H

#include "common.h"
#include <vector>
#include "classes/Obj557b18.h"

extern "C" void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);

class Obj557b58;
/* Builds the object's bodies (Model/MoriModelArray.cpp): one Obj557b18 per part of the model resource, each
 * attached to its part and started on the motion, material animation and clip named by its state. */
extern "C" void moriModelArrayConstruct(Obj557b58 *array, UnitModelContent *content);

/* The object whose vtable is at 0x557b58 (named after it until its real name is known): the model array
 * (Model/MoriModelArray.cpp, MoriModelContent's binding) owns one model body per part of a model resource
 * and deletes them all when it is destroyed. Slot 0 is the destructor. */
class Obj557b58 {
public:
    explicit Obj557b58(u32 resource);
    virtual ~Obj557b58();

    /* The engine's allocator with source location (file, line). */
    static void *operator new(u32 size, const char *file, s32 line) throw() { return asdMemoryAllocTraced(size, file, line); }

protected:
    friend void moriModelArrayConstruct(Obj557b58 *array, UnitModelContent *content);

    /* 0x00: vtable pointer */
    /* 0x04 */ std::vector<Obj557b18 *> bodies;
    /* 0x10 */ u32 count;                   /* the resource's part count */
    /* 0x14 */ UnitModelContent *content;   /* the resource the bodies are attached to */
    /* 0x18 */ u32 unk18;
};

#endif
