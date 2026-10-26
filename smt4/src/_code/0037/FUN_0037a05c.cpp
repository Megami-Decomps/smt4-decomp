/* NON_MATCHING: retail loads the two stack bytes before the 8-byte pair and stores the pair last with vstmia through a separate address register (node kept in r1); this build loads the pair first and stores it with two vstr. */
#include "classes/Obj421aa4Requests.h"
#include "classes/SoundVoiceOwner.h"

/* A pair of floats (or the 64-bit word holding them) copied as a unit. */
union SoundFloatPair {
    u64 bits;
    f32 values[2];
};

/* The 10-word request node of the voice update. */
struct Obj421aa4NodeVoice : Obj421aa4Node {
    /* 0x18 */ u32 word2;
    /* 0x1C */ u16 half;
    /* 0x1E */ u8 flagA;
    /* 0x1F */ u8 flagB;
    /* 0x20 */ SoundFloatPair pair;
};

// Records the changed mask and enqueues a type-0x28 sound request carrying the voice's update.
extern "C" void FUN_0037a05c(SoundVoiceOwner *owner, u32 first, u32 second, u16 mask, u8 flagA, u8 flagB,
                             SoundFloatPair pair)
{
    owner->changedMask = mask;
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4NodeVoice *node = (Obj421aa4NodeVoice *)soundRequestBegin(manager, 10);
    node->type = 0x28;
    node->id = (u32)&owner->params;
    node->word = first;
    node->word2 = second;
    node->half = mask;
    node->flagA = flagA;
    node->flagB = flagB;
    node->pair = pair;
    listAppendNode(manager, node);
}
