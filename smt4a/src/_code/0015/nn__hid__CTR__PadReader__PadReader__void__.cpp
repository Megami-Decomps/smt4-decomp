/* NON_MATCHING: constructor preserves the shared -1 value across the member constructor rather than rematerializing it for the trailing pair. */
#include "nn/hid/PadReader.h"

namespace nn { namespace hid { namespace CTR {
PadReader::PadReader(void *memory) : sharedMemory(memory), index(-1)
{
    active = 1;
    lastRead = 0xffffffff;
    lastSample = 0xffffffff;
}
}}}
