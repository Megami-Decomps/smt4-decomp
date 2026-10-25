#ifndef ADDON_AOC_PACKAGE_MOUNT_BATCH_H
#define ADDON_AOC_PACKAGE_MOUNT_BATCH_H

#include "addon/AocContentEnumeration.h"
#include "classes/WindowOperation.h"
#include "shard/W5_W5Match4_Obj4221d4.h"

// Accessed prefix of the package system while constructing its mount operations.
struct AocPackageMountBatch : AocContentEnumeration {
    Obj4221d4 *packages; // 0x318
    WindowOperationResult operation; // 0x31c
};
typedef char AocPackageMountBatchLayoutCheck[
    offsetof(AocPackageMountBatch, packages) == 0x318 &&
    offsetof(AocPackageMountBatch, operation) == 0x31c &&
    sizeof(AocPackageMountBatch) == 0x330 ? 1 : -1];

#endif
