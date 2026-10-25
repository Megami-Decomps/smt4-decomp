#include "classes/Obj557c90.h"

// Destroy all result records while retaining the vector's allocation.
extern "C" void onlineResultsClear(std::vector<OnlineResultRecord, AsdAllocator<OnlineResultRecord> > *results)
{
    results->erase(results->begin(), results->end());
}
