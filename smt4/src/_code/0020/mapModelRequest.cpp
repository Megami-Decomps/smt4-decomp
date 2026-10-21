#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern ModelRequestWork *g_mapModelWork;

/* Set the active work's request flag. */
void mapModelRequest(void)
{
    g_mapModelWork->requested = 1;
}

}
