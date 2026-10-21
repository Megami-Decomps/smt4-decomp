#include "common.h"

struct EnemyModelOwner {
    u8 unk0000[0x2294]; // 0x0000
    void* modelInfo;     // 0x2294
};

extern "C" {
void* FUN_0020214c(const char* path);
void asdLoadFileAsyncSimple(const char* path, void** destination, s32 flags);

// Load the enemy model table once, synchronously or asynchronously.
void btlLoadEnemyModelInfo(EnemyModelOwner* owner, s32 asynchronous)
{
    if (owner->modelInfo == NULL) {
        if (asynchronous != 0) {
            asdLoadFileAsyncSimple("battle/EnemyModelInfo.tbb", &owner->modelInfo, 0);
            return;
        }
        owner->modelInfo = FUN_0020214c("battle/EnemyModelInfo.tbb");
    }
}
}
