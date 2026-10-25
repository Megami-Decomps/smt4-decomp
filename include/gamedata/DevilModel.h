#ifndef GAMEDATA_DEVIL_MODEL_H
#define GAMEDATA_DEVIL_MODEL_H
#include "gamedata/DevilRecord.h"
struct DevilModelOverride {
    u8 unk00[3]; // 0x00
    u8 flags; // 0x03
    u8 unk04[0x84]; // 0x04
    s16 model; // 0x88
    u8 unk8A[0x1E]; // 0x8A
};
typedef char DevilModelOverrideSizeCheck[sizeof(DevilModelOverride) == 0xA8 ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif

u8 aocJobIsValid(void);

#ifdef __cplusplus
}
#endif

#endif
