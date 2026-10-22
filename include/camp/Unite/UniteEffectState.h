#ifndef CAMP_UNITE_UNITEEFFECTSTATE_H
#define CAMP_UNITE_UNITEEFFECTSTATE_H
#include "common.h"

struct UniteEffectWork {
    /* 0x000 */ u32 process;
    /* 0x004 */ u8 unk004[0x954];
};
typedef char UniteEffectWorkSizeCheck[sizeof(UniteEffectWork) == 0x958 ? 1 : -1];
#endif
