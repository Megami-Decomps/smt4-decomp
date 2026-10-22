#include "shard/W4_Match4_Obj559ecc.h"

extern "C" {
void operatorDeleteArray(void *allocation);
void strDuplicateInto(char **destination, const char *source);
}

/* Reuses the value when both strings already refer to the same text. */
Obj55aff4 &Obj55aff4::operator=(const Obj55aff4 &other)
{
    if (text != other.text) {
        if (text != NULL) {
            operatorDeleteArray(text);
        }
        strDuplicateInto(&text, other.text);
    }
    return *this;
}
