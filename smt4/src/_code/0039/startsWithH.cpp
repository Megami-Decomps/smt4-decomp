#include "common.h"

extern "C" {

u8 startsWithH(char *tag)
{
    return *tag == 'h';
}

} /* extern "C" */
