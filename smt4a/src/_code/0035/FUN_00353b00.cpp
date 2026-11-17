/* NON_MATCHING: register allocation of the flag mask/index in the loop (retail: index r5, mask r6) and the popup stores (retail uses post-increment `str r2,[r0],#4; str r1,[r0],#16`, the build emits stm and an offset store). */
#include "common.h"
#include "game/GameStateA.h"
#include "code/Code0015.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "map/PopupStateA.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0xDD0];
    /* 0xDD0 */ u8 seen[0x12];   /* one bit per id */
} FlagBlock;


extern u8 DAT_00531ac8; /* 0x531ac8 */
extern char DAT_0060a198[]; /* 0x60a198 */

extern int textFormatBuffer(char *dst, u8 *src);
extern FlagBlock *gameFlagsGetBlock(void);
extern int gameFlagIsSet(u32 flag);
extern int shopGetEntryAvailability(u32 id);

/* Marks every id 1-0x8C whose data flag is set (or whose check does not return 2) as seen; when something new was marked outside a popup, opens popup type 0x18. */
void FUN_00353b00(int popupOpen)
{
    u32 id;
    u8 marked;

    FUN_00152f44();
    marked = 0;
    for (id = 1; id < 0x8D; id++) {
        FlagBlock *block = gameFlagsGetBlock();
        int mask = 1 << ((int)id % 8);

        if ((block->seen[(int)id / 8] & mask) == 0) {
            if ((int)gameDataFlagTestBit(id) != 0) {
                gameFlagsGetBlock()->seen[(int)id / 8] |= mask;
            } else if (shopGetEntryAvailability(id) != 2) {
                gameFlagsGetBlock()->seen[(int)id / 8] |= mask;
                marked = 1;
            }
        }
    }
    if (popupOpen == 0 && marked && g_gameState.mapId != 0x24 && gameFlagIsSet(0x408) != 0) {
        textFormatBuffer(DAT_0060a198, &DAT_00531ac8);
        g_popupState->state = 0x18;
        g_popupState->timer = 0;
        g_popupState->message = DAT_0060a198;
    }
}

} /* extern "C" */
