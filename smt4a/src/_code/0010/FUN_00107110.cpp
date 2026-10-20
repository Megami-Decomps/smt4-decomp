#include "common.h"

extern "C" {

void onlineIpv4AddrFormat(void *object, u32 field, u32 a, u32 b);

typedef struct WordTriple {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 third;
} WordTriple;

/* Calls onlineIpv4AddrFormat with the object's second word. */
void FUN_00107110(WordTriple *object, u32 a, u32 b)
{
    onlineIpv4AddrFormat(object, object->second, a, b);
}

} /* extern "C" */
