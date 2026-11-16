#include "shard/Shard0033.h"

extern "C" {

extern void effBehaviorRun(InfoTable *info);
extern void effObjectParticleInitMotion(InfoHolder *holder, Item1C *item);

/* After effBehaviorRun, calls effObjectParticleInitMotion for each kind-3 item whose table entry has unk10 == 0. */
void infoHolderInitItems(InfoHolder *holder)
{
    InfoTable *info;
    Entry28 *entries;
    Item1C *items;
    s32 count;
    s32 i;

    effBehaviorRun(holder->info);
    info = holder->info;
    count = info->count;
    if (count != 0 && info->unk10 != 0) {
        entries = info->entries;
        items = holder->items;
        if (holder->kind == 3) {
            for (i = 0; i < count; i++, entries++, items++) {
                if (entries->unk10 == 0) {
                    effObjectParticleInitMotion(holder, items);
                }
            }
        }
    }
}

} /* extern "C" */
