#include "shard/W4_Match4_Obj559ecc.h"

extern "C" void strDuplicateInto(char **destination, const unsigned short *source);

/* Duplicates the supplied UTF-16 text into the new string. */
Obj55aff4::Obj55aff4(const unsigned short *value)
{
    strDuplicateInto(&text, value);
}
