/* The party's money: additions are clamped to 0..999999999. */
#ifndef GAMEDATA_PARTYMONEY_H
#define GAMEDATA_PARTYMONEY_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Adds `amount` (may be negative) to the party's money; returns the new total. */
s32 partyAddMoneyClamped(s32 amount);

/* Forwards to partyAddMoneyClamped: armlink NOPed the tail call to the next function. */
s32 partyAddMoneyClampedForward(s32 amount);

#ifdef __cplusplus
} /* extern "C" */
#endif

#ifdef __cplusplus
extern "C" {
#endif
/* Adds to the party money: tail-calls gameMoneyAdd (linked as a nop). */
void partyMoneyAddForward(s32 amount);
#ifdef __cplusplus
}
#endif

#endif
