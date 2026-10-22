#include "shard/W4_Match4_Obj559ecc.h"

extern "C" void strDuplicateInto(char **destination, const char *source);

/* Duplicates the supplied text into the new string. */
Obj55aff4::Obj55aff4(const char *value)
{
    strDuplicateInto(&text, value);
}
