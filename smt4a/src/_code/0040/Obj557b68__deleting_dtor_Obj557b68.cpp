/* NON_MATCHING: compiler inlines entry-vector destruction without retaining the vector member address across the word-vector destruction, reducing the saved-register frame. */
#include "classes/Obj557b68.h"

extern "C" {
void FUN_00406a1c(Obj557b68* owner);
Obj557b68WordVector* sysWordVectorRelease(Obj557b68WordVector* vector);
void rt_vec_dtor(Obj557b68WordVector* vectors,
                 Obj557b68WordVector* (*destroy)(Obj557b68WordVector*),
                 u32 stride, u32 count);
}

// Clean the owner and destroy its word vectors before its entry vector is released.
Obj557b68::~Obj557b68()
{
    FUN_00406a1c(this);
    rt_vec_dtor(records, sysWordVectorRelease, sizeof(Obj557b68WordVector), 8);
}
