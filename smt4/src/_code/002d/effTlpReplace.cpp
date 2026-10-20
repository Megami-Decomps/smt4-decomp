#include "common.h"

extern "C" {

typedef struct TlpOwner {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ void *tlp;
} TlpOwner;

void handleBlockUnref(void *handle);
void *effTlpCreate(u32 id);

/* Replaces the owner's TLP effect: releases the old one, then creates the effect `id` names. */
void effTlpReplace(TlpOwner *owner, u32 id)
{
    if (owner->tlp != NULL) {
        handleBlockUnref(owner->tlp);
    }
    owner->tlp = effTlpCreate(id);
}

} /* extern "C" */
