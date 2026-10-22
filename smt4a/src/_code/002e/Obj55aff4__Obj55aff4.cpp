#include "shard/W4_Match4_Obj559ecc.h"

extern "C" {
extern const char g_onlineEmptyText[];
void strDuplicateInto(char **destination, const char *source);
}

/* Initializes an empty string from the retail empty-text sentinel. */
Obj55aff4::Obj55aff4()
{
    strDuplicateInto(&text, g_onlineEmptyText);
}
