#include "shard/W4_Match4_Obj559ecc.h"

extern "C" void wstrDuplicateInto(char **destination, const char *source);

/* Duplicates the supplied narrow text into the new string. */
Obj55aff4::Obj55aff4(const char *value)
{
    wstrDuplicateInto(&text, value);
}
