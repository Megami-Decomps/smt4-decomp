#include "battle/btlMain.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;
void asdMemFree(void *);
void btlStageFreeContext(void);
void engineFreeOptionalWork(void);
}

static inline void freeBattleBuffer(void *&buffer)
{
    if (buffer != NULL) {
        asdMemFree(buffer);
        buffer = NULL;
    }
}

extern "C" void FUN_002ae468(void)
{
    struct BattleBufferView {
        u8 prefix[0x28];
        void *resources[10];
    };
    typedef char BufferOffsetCheck[offsetof(BattleBufferView, resources) == 0x28 ? 1 : -1];
    BattleBufferView *buffers = reinterpret_cast<BattleBufferView *>(&g_btlMain);
    freeBattleBuffer(buffers->resources[0]);
    freeBattleBuffer(buffers->resources[1]);
    freeBattleBuffer(buffers->resources[2]);
    freeBattleBuffer(buffers->resources[3]);
    freeBattleBuffer(buffers->resources[4]);
    freeBattleBuffer(buffers->resources[5]);
    freeBattleBuffer(buffers->resources[6]);
    freeBattleBuffer(buffers->resources[7]);
    freeBattleBuffer(buffers->resources[8]);
    freeBattleBuffer(buffers->resources[9]);
    btlStageFreeContext();
    engineFreeOptionalWork();
}
