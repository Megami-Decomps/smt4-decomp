#include "shard/Shard0033.h"

extern "C" {

extern PairLog *g_uniteEffectWork;

void pairLogSetValue(u16 value)
{
    g_uniteEffectWork->unk0C = value;
}

} /* extern "C" */
