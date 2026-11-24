#include "classes/Obj557d00.h"
#include <new>
#include "Model/MoriModelResource.h"
extern "C" {
void* asdMemoryAllocTraced(u32, const char*, u32);

/* Allocates a model resource and populates it from the request. */
Obj557d00 *moriModelResourceCreate(const MoriModelRequest *request)
{
    void* storage = asdMemoryAllocTraced(sizeof(Obj557d00),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 56);
    Obj557d00* resource = storage != NULL ? new (storage) Obj557d00 : NULL;
    FUN_0016c88c(request, resource);
    return resource;
}
}
