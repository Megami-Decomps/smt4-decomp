/* The name entry screen's work area in Apocalypse: the task bookkeeping, then the form. */
#ifndef NAME_NAMEENTRYWORKA_H
#define NAME_NAMEENTRYWORKA_H

#include "name/nameMain.h"
#include "shard/W6_W6Match3_NameFormStateA.h"

struct NameEntryWorkA {
    /* 0x00 */ NameWork state;
    /* 0x10 */ NameFormStateA form;
};

#endif
