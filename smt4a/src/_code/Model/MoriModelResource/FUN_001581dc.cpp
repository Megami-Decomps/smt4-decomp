#include "classes/Obj557d00.h"
#include <new>
extern "C" {
void* FUN_00178b04(u32, const char*, u32);
void FUN_0016c88c(void*, Obj557d00*);

Obj557d00* FUN_001581dc(void* owner)
{
    void* storage = FUN_00178b04(sizeof(Obj557d00),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 56);
    Obj557d00* resource = storage != NULL ? new (storage) Obj557d00 : NULL;
    FUN_0016c88c(owner, resource);
    return resource;
}
}
