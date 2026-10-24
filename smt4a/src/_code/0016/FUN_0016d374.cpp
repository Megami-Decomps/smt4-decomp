#include "Model/MoriModelCommand.h"

extern "C" {

/* Initialises the vector as empty at `begin`. */
void FUN_0016d374(Vector8 *vector, u32 begin)
{
    vector->begin = begin;
    vector->count = NULL;
    vector->cursor = begin;
    vector->unk10 = 0;
    vector->end = begin;
}

} /* extern "C" */
