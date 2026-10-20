/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void resultCreate(u32);

void resultCreateDefault(void)
{
    resultCreate(0);
}

}
