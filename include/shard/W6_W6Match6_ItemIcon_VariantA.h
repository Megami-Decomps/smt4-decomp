/* The item-category icon draw as its forwarding wrappers see it: the last argument is one word
 * the callee reads as an integer or a float, and the wrappers pass it through VFP (vldr/vstr). */
#ifndef SHARD_W6_W6MATCH6_ITEMICON_VARIANTA_H
#define SHARD_W6_W6MATCH6_ITEMICON_VARIANTA_H

#include "common.h"

/* A one-word argument the callee reads as an integer or a float. */
union BadgeWord {
    f32 f;
    s32 i;
};

extern "C" {
/* smt4a. */
void uiDrawItemCategoryIcon(u32 id, s32 x, s32 y, s32 layer, BadgeWord showEquipped);
/* smt4 twin of uiDrawItemCategoryIcon. */
void itemDrawCategoryBadge(u32 id, s32 x, s32 y, s32 layer, BadgeWord equippedFlag);
}

#endif
