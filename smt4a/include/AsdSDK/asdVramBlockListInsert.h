#ifndef SMT4A_ASDSDK_ASDVRAMBLOCKLISTINSERT_H
#define SMT4A_ASDSDK_ASDVRAMBLOCKLISTINSERT_H

#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* Inserts a run into a list sorted by address. Apocalypse's lists use AsdVramBlockListA; IV's
 * function of the same name takes AsdVramBlockList, so the declaration is per game. */
extern "C" void asdVramBlockListInsert(AsdVramBlockListA *list, AsdVramBlockA *block);

#endif
