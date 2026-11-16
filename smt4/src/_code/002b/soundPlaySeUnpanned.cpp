#include "common.h"

extern "C" {

extern int soundPlaySePanned(unsigned int id, int param);

/* Calls soundPlaySePanned with its second argument fixed at 0. */
void soundPlaySeUnpanned(unsigned int id)
{
    soundPlaySePanned(id, 0);
}

} /* extern "C" */
