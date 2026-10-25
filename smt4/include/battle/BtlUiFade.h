/* The battle UI scene's fade-out trigger (smt4). */
#ifndef SMT4_BATTLE_BTLUIFADE_H
#define SMT4_BATTLE_BTLUIFADE_H

#include "common.h"

extern "C" {

/* Fades the battle UI scene out once it has faded in and its timer is ready; the argument (the UI
 * block its caller holds) is not used, the global UI is read instead. */
void btlUiPlaySceneFadeOutWhenReady(u32 ui);

} /* extern "C" */

#endif
