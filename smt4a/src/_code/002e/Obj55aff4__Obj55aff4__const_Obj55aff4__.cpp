#include "shard/W4_Match4_Obj559ecc.h"

extern "C" void strDuplicateInto(char **destination, const char *source);

/* Copies the string while retaining its own allocation. */
Obj55aff4::Obj55aff4(const Obj55aff4 &other)
{
    strDuplicateInto(&text, other.text);
}
