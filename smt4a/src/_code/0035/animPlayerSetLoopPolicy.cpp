/* NON_MATCHING: scheduling only: retail stores the policy-set byte (strb [r0,#88]) before the policy pointer (str [r0,#76]); the build emits them the other way round */
#include "common.h"

extern "C" {

typedef void PlayPolicy00359510(void);

typedef struct Player00359510 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ PlayPolicy00359510 *policy;
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ s8 policySet;
} Player00359510;

typedef struct Owner00359510 {
    /* 0x00 */ u32 flags;           /* bit 0 selects which player is active */
    /* 0x04 */ u8 unk04[0x48];
    /* 0x4c */ Player00359510 *playerA;
    /* 0x50 */ Player00359510 *playerB;
} Owner00359510;

extern PlayPolicy00359510 nw_anim_PlayPolicy_Loop; /* 0x1c37f8 */

/* Sets the looping policy of the owner's active player: the library loop policy when loop is set, otherwise the one at 0x1b9f9c. */
void animPlayerSetLoopPolicy(Owner00359510 *owner, s32 loop)
{
    Player00359510 *player;

    if ((owner->flags & 1) != 0) {
        player = owner->playerB;
    } else {
        player = owner->playerA;
    }
    if (player != NULL) {
        PlayPolicy00359510 *policy;

        if (loop == 0) {
            policy = (PlayPolicy00359510 *)0x1b9f9c;
        } else {
            policy = nw_anim_PlayPolicy_Loop;
        }
        player->policySet = 1;
        player->policy = policy;
    }
}

} /* extern "C" */
