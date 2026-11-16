#include <new>
#include "classes/Obj4212b4.h"

Obj4212b4::Obj4212b4(const Obj4212b4Request *request, AsdAllocatorObject *allocator, Obj421230Res *res)
    : Obj421230(allocator, res, const_cast<Obj4212b4Request *>(request))
{
    unk148 = request->unk10;
    unk149 = request->unk11;
    unk14a = request->unk12;
    unk14c = request->unk14;
    this->request = *request;
}

/* Allocates and builds the object from a request (with no resource), then lets it initialize
 * itself. */
Obj4212b4 *Obj4212b4::create(const Obj4212b4Request *request, AsdAllocatorObject *allocator)
{
    Obj4212b4 *object = new (allocator->allocate(sizeof(Obj4212b4), 4)) Obj4212b4(request, allocator, NULL);
    object->initialize(allocator);
    return object;
}
