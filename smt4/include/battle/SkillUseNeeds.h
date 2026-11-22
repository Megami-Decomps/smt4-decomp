/* IV: what using a skill or an item on a target needs, as the usability tests collect it (btlSkillCheckApplicable for a
 * battle entry, itemEffectCheckApplicable for a party member outside battle). A test gathers the needs the
 * record names, then the ones the target meets; the skill is usable when the two sets are equal. */
#ifndef SMT4_BATTLE_SKILLUSENEEDS_H
#define SMT4_BATTLE_SKILLUSENEEDS_H

#include "common.h"

enum {
    NEED_HEAL = 1,                  /* the target is missing HP */
    NEED_MP = 2,                    /* the target is missing MP */
    NEED_CURE = 4,                  /* the target has a status the cure event clears */
    NEED_STAT_ROOM = 0x40,          /* none of the entry's stats 11, 10 and 7 is at its limit */
    NEED_STAT_CHANGE = 0x80,        /* the three stat conditions are not all met yet */
    NEED_EFFECT13_OFF = 0x100,      /* the entry's effect counter 13 is not running (likewise below) */
    NEED_EFFECT18_OFF = 0x200,
    NEED_EFFECT19_OFF = 0x400,
    NEED_EFFECT18_ON = 0x800,
    NEED_EFFECT19_ON = 0x1000,
    NEED_EFFECT20_OFF = 0x2000,
    NEED_EFFECT14_OFF = 0x4000,
    NEED_EFFECT15_OFF = 0x8000,
    NEED_EFFECT16_OFF = 0x10000,
    NEED_EFFECT17_OFF = 0x20000,
    NEED_BATTLE_FLAG10_CLEAR = 0x80000, /* bit 10 of the battle flags is clear */
    NEED_BASE_MAX_HP = 0x100000,    /* the entry's maximum HP is not above its record's */
    NEED_EFFECT27_OFF = 0x200000,
    NEED_EFFECT28_OFF = 0x400000,
    NEED_ESCAPE = 0x800000,         /* the battle can be left */
    NEED_RESERVE = 0x1000000,       /* a reserve member can take the place */
    NEED_REVIVE = 0x2000000,        /* FUN_0033fc50 finds a stock unit */
    NEED_DEAD = 0x4000000,          /* the target has no status bit */
    NEED_MENU_ROOM = 0x8000000      /* both menu cursor coordinates are below 8 */
};

extern "C" {

/* Adds the status bits a cure event clears to `*mask`. */
void statusCureEventAddMask(u16 *mask, u32 event);
/* Whether the stock holds a unit that is not in the active party and that its status flags do not rule out. */
u32 FUN_0033fc50(void);

} /* extern "C" */

/* The status bits a cure event clears (statusCureEventAddMask adds them to an empty mask). */
static __inline u16 cureMask(u32 event)
{
    u16 mask = 0;
    statusCureEventAddMask(&mask, event);
    return mask;
}

#endif
