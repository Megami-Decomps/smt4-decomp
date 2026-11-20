/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void nngxGetError(void);

void asdGxCheckError(void)
{
    nngxGetError();
}

}
