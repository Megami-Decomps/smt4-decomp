/* Whether a pair of demons can be fused (Apocalypse): the answer fusionCheckPairAvailability gives the fusion screen and
 * the party panel. */
#ifndef CAMP_UNITE_FUSIONAVAILABILITY_H
#define CAMP_UNITE_FUSIONAVAILABILITY_H

#include "common.h"
#include <stddef.h>

struct UniteWorkA;

/* Why a pair cannot be fused (FusionAvailability::reason). The party panel marks each with its own flag. */
enum FusionRefusal {
    FUSION_REFUSAL_NONE = 0,
    FUSION_REFUSAL_NO_RESULT = 1, /* the pair makes nothing, or nothing the player may have */
    FUSION_REFUSAL_LEVEL = 2,     /* the result is above the level the player can fuse */
    FUSION_REFUSAL_OWNED = 3      /* the result is already in the stock */
};

struct FusionAvailability {
    /* 0x0 */ u8 available;
    /* 0x1 */ u8 unk01[3];
    /* 0x4 */ u32 reason;   /* a FusionRefusal */
    /* 0x8 */ u16 resultId; /* the demon the pair makes */
};
typedef char FusionAvailabilityLayoutCheck[
    offsetof(FusionAvailability, reason) == 4 && offsetof(FusionAvailability, resultId) == 8 &&
    sizeof(FusionAvailability) == 0xC ? 1 : -1];

extern "C" {
/* Resolves the result of fusing `first` with `second`; returns 0 and sets `output->reason` when the result is
 * unavailable, over the player's level or already owned. */
u8 fusionCheckPairAvailability(UniteWorkA *work, u32 first, u32 second, s32 special, FusionAvailability *output);
}

#endif
